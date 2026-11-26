#include "form_pult.h"

#ifdef STONE

#include "gframe.h"

#include <QDebug>
#include <QMessageBox>

#include <cmath>
#include <cstdint>
#include <limits>
#include <list>
#include <string>

namespace {

// MCU program array clear register
constexpr uint32_t PA_CLEAR = 0x106u << 2;

bool validScale(double value)
{
    return std::isfinite(value) && value > 0.0;
}

bool validPosition(int64_t value)
{
    return value >= std::numeric_limits<int32_t>::min()
        && value <= std::numeric_limits<int32_t>::max();
}

} // namespace


void FormPult::on_btnMove_clicked(bool dir)
{
    if (m_stoneActive || !btnHome->isEnabled())
        return;

    const auto reportError = [this](const QString& text) {
        qWarning() << "Pult:" << text;
        QMessageBox::warning(this, tr("Pult"), text);
    };

    try {
        if (!par.cnc.isOpen()) {
            reportError(tr("No CNC connection"));
            return;
        }

        // Read actual CNC position and state
        const CncContext ctx = par.cnc.readCncContext();

        if (!ctx.valid() || !ctx.isInit()) {
            reportError(tr("Cannot read CNC context"));
            return;
        }

        if (!ctx.isIdle()) {
            reportError(tr("CNC is not idle"));
            return;
        }

        // This implementation is for XY machines only.
        if (ctx.uvEnabled() || ctx.u() != 0 || ctx.v() != 0) {
            reportError(tr("XYUV mode is not supported"));
            return;
        }

        // G92 also changes encoder coordinates.
        if (ctx.isEncoderMode()) {
            reportError(tr("Encoder mode is not supported"));
            return;
        }

        if (ctx.get().field.fb_ena) {
            reportError(tr("Feedback mode is not supported"));
            return;
        }

        const double scaleX = CncParam::scaleX;
        const double scaleY = CncParam::scaleY;

        if (!validScale(scaleX) || !validScale(scaleY)) {
            reportError(tr("Invalid motor scale"));
            return;
        }

        // Pult and MCU must use the same motor scale.
        if (pultWidget->scale(0) != scaleX ||
            pultWidget->scale(1) != scaleY)
        {
            reportError(
                tr("Pult motor scale differs from CNC settings")
            );
            return;
        }

        // Relative movement in motor steps
        int64_t nx = pultWidget->getMoveN(0);
        int64_t ny = pultWidget->getMoveN(1);

        if (dir) {
            nx = -nx;
            ny = -ny;
        }

        if (nx == 0 && ny == 0)
            return;

        // Absolute target position in motor steps
        const int64_t targetX = int64_t(ctx.x()) + nx;
        const int64_t targetY = int64_t(ctx.y()) + ny;

        if (!validPosition(targetX) ||
            !validPosition(targetY))
        {
            reportError(tr("Target position is out of range"));
            return;
        }

        // Convert positions to millimeters
        const double x0 = double(ctx.x()) / scaleX;
        const double y0 = double(ctx.y()) / scaleY;

        const double x1 = double(targetX) / scaleX;
        const double y1 = double(targetY) / scaleY;

        // Feed rate in mm/min
        const double requestedSpeed = pultWidget->speed();

        if (!std::isfinite(requestedSpeed) ||
            requestedSpeed <= 0.0)
        {
            reportError(tr("Invalid movement speed"));
            return;
        }

        const WireSpeed wireSpeed(requestedSpeed);
        const double speed = wireSpeed.getMMM();

        // Temporary G-code, using the existing GFrame generator.
        // Do not modify ProgramParam G-code or contours.
        GFrame move = GFrame::G1(x1, y1);
        move.append(GFrame::F(speed));

        const std::list<std::string> frames {
            GFrame::delimiter().toString(),
            GFrame::G92(x0, y0).toString(),
            move.toString(),
            GFrame::delimiter().toString()
        };

        for (const auto& frame : frames)
            qDebug() << frame.c_str();

        // Prevent recovery of temporary G-code
        if (!ProgramParam::setPultRecoveryBlocked(true)) {
            reportError(tr("Cannot disable CNC recovery"));
            return;
        }

        // Lock movement controls during program loading
        controlsEnable(false, true);

        // Clear program array without resetting coordinates
        if (!par.cnc.writeUInt32(PA_CLEAR, 1)) {
            reportError(tr("Cannot clear CNC program memory"));
            return;
        }

        // Upload temporary program
        if (!par.cnc.write(frames)) {
            reportError(tr("Cannot load temporary G-code"));
            return;
        }

        // Verify uploaded program
        if (par.cnc.read() != frames) {
            reportError(tr("G-code verification failed"));
            return;
        }

        // Disable imitation mode
        if (!par.cnc.writeUInt32(ADDR::CLEAR, ADDR::IMIT_MASK)) {
            reportError(tr("Cannot disable imitation mode"));
            return;
        }

        // Enable motors
        if (!par.cnc.writeHoldEnable(true)) {
            reportError(tr("Cannot enable motors"));
            return;
        }

        // Remember target position and pending start request
        m_stoneTargetX = static_cast<int32_t>(targetX);
        m_stoneTargetY = static_cast<int32_t>(targetY);

        m_stoneActive = true;
        m_stoneStartPending = true;
        m_stoneMoving = false;

        // Start execution.
        // If communication fails, the request may nevertheless
        // have reached the MCU. Do not retry automatically.
        if (!par.cnc.runReq()) {
            reportError(
                tr("CNC start request failed. "
                   "Check CNC state or press Cancel.")
            );
            return;
        }

    } catch (...) {
        reportError(tr("CNC movement exception"));
    }
}


void FormPult::onStoneSpeedChanged()
{
    if (!m_stoneActive || !m_stoneMoving)
        return;

    const double value = pultWidget->speed();

    if (!std::isfinite(value) || value <= 0.0)
        return;

    try {
        const WireSpeed speed(value);

        if (!par.cnc.writeSpeed(speed)) {
            qWarning() << "Pult: Cannot change CNC speed";

            pultWidget->numSpeed->setToolTip(
                tr("CNC speed update failed")
            );
        } else {
            pultWidget->numSpeed->setToolTip(QString());
        }

    } catch (...) {
        qWarning() << "Pult: CNC speed exception";
    }
}


void FormPult::updateStoneMotion(const CncContext& ctx)
{
    if (!ctx.valid() || !ctx.isInit()) {
        m_stoneMoving = false;

        controlsEnable(false, true);
        return;
    }

    if (ctx.isWork()) {
        if (m_stoneActive)
            m_stoneStartPending = false;

        // Enable live feed adjustment only after the
        // G1 frame has actually started.
        m_stoneMoving =
            m_stoneActive &&
            ctx.cncState() == cnc_state_t::ST_SEGMENT;

        controlsEnable(false);

        pultWidget->numSpeed->setEnabled(m_stoneMoving);
        pultWidget->speedMMM->setEnabled(m_stoneMoving);
        pultWidget->speedUMS->setEnabled(m_stoneMoving);

        return;
    }

    m_stoneMoving = false;

    if (ctx.isError()) {
        controlsEnable(false, true);
        return;
    }

    if (!ctx.isIdle()) {
        controlsEnable(false, true);
        return;
    }

    if (m_stoneStartPending) {
        // A very short movement can finish between polls.
        if (ctx.x() == m_stoneTargetX &&
            ctx.y() == m_stoneTargetY)
        {
            m_stoneStartPending = false;
        } else {
            // Start has not been confirmed.
            // Keep controls locked until Cancel or confirmation.
            controlsEnable(false, true);
            return;
        }
    }

    // CNC has finished or cancelled the movement
    m_stoneActive = false;

    controlsEnable(true, true);
}


void FormPult::on_btnCancel_clicked()
{
    m_stoneMoving = false;

    controlsEnable(false, true);

    try {
        // STOP also clears a pending RUN request in MCU.
        const bool stopOK = par.cnc.stopReq();
        const bool cancelOK = par.cnc.cancelReq();

        if (!stopOK || !cancelOK) {
            QMessageBox::warning(
                this,
                tr("Pult"),
                tr("CNC cancel request failed")
            );
            return;
        }

        m_stoneStartPending = false;
        m_stoneActive = false;

        // Controls will be enabled by updateStoneMotion()
        // after MCU confirms ST_IDLE.

    } catch (...) {
        qWarning() << "Pult: CNC cancel exception";
    }
}

#endif // STONE
