/****************************************************************************
** Meta object code from reading C++ file 'form_contour.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../form_contour.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_contour.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11FormContourE_t {};
} // unnamed namespace

template <> constexpr inline auto FormContour::qt_create_metaobjectdata<qt_meta_tag_ZN11FormContourE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FormContour",
        "homePageClicked",
        "",
        "muxPageClicked",
        "size_t",
        "ctr",
        "passesPageClicked",
        "one_pass",
        "editPageClicked",
        "auto_plot",
        "helpPageClicked",
        "file_name",
        "fileNameChanged",
        "on_btnOpen_clicked",
        "on_btnSave_clicked",
        "on_btnSaveAs_clicked",
        "printUnused",
        "OK",
        "std::string",
        "lastError",
        "Contour",
        "free",
        "tails",
        "trySort",
        "Contour&",
        "cnt",
        "Contour*",
        "prev",
        "prev_first",
        "trySortDxf",
        "on_btnLoadDxf_clicked",
        "on_btnNewContour_clicked",
        "on_btnNewCutline_clicked",
        "on_btnMerge_clicked",
        "on_actDeleteCtr_clicked",
        "on_actDeleteSeg_clicked",
        "on_btnClear_clicked",
        "on_btnChangeDir_clicked",
        "on_actReverseSeg_clicked",
        "on_actFirstCtr_clicked",
        "on_actLastCtr_clicked",
        "on_actUpCtr_clicked",
        "on_actDownCtr_clicked",
        "on_actFirstSeg_clicked",
        "on_actLastSeg_clicked",
        "on_actUpSeg_clicked",
        "on_actDownSeg_clicked",
        "on_actSortCtrClicked",
        "on_actSortSegClicked",
        "onViewContoursClicked",
        "QModelIndex",
        "onViewSegmentsClicked",
        "on_actUseAsEntryLine_clicked",
        "on_btnSegProp_clicked",
        "on_btnCtrProp_clicked",
        "selectedIndexes",
        "QModelIndexList",
        "sort_req",
        "descent",
        "on_actMoveSeg_clicked",
        "on_actExitPoint_triggered",
        "on_actRotate_triggered",
        "on_actResize_triggered",
        "on_actFlipLeftRight_triggered",
        "on_actFlipUpDown_triggered",
        "on_plotClicked",
        "QPointF",
        "pt",
        "on_plotControlClicked",
        "setFontPointSize",
        "QWidget*",
        "w",
        "pointSize",
        "QAction*",
        "act"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'homePageClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'muxPageClicked'
        QtMocHelpers::SignalData<void(size_t)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'passesPageClicked'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'passesPageClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'editPageClicked'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'helpPageClicked'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'fileNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'on_btnOpen_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSave_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSaveAs_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'printUnused'
        QtMocHelpers::SlotData<void(bool, const std::string &, const Contour &, const Contour &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 17 }, { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 }, { 0x80000000 | 20, 22 },
        }}),
        // Slot 'trySort'
        QtMocHelpers::SlotData<void(Contour &, Contour * const, bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { 0x80000000 | 26, 27 }, { QMetaType::Bool, 28 },
        }}),
        // Slot 'trySortDxf'
        QtMocHelpers::SlotData<void(Contour &)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'on_btnLoadDxf_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNewContour_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNewCutline_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMerge_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actDeleteCtr_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actDeleteSeg_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnClear_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnChangeDir_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actReverseSeg_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actFirstCtr_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actLastCtr_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actUpCtr_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actDownCtr_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actFirstSeg_clicked'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actLastSeg_clicked'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actUpSeg_clicked'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actDownSeg_clicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actSortCtrClicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actSortSegClicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onViewContoursClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 50, 2 },
        }}),
        // Slot 'onViewSegmentsClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 50, 2 },
        }}),
        // Slot 'on_actUseAsEntryLine_clicked'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSegProp_clicked'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnCtrProp_clicked'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectedIndexes'
        QtMocHelpers::SlotData<QModelIndexList(bool, bool)>(55, 2, QMC::AccessPrivate, 0x80000000 | 56, {{
            { QMetaType::Bool, 57 }, { QMetaType::Bool, 58 },
        }}),
        // Slot 'selectedIndexes'
        QtMocHelpers::SlotData<QModelIndexList(bool)>(55, 2, QMC::AccessPrivate | QMC::MethodCloned, 0x80000000 | 56, {{
            { QMetaType::Bool, 57 },
        }}),
        // Slot 'selectedIndexes'
        QtMocHelpers::SlotData<QModelIndexList()>(55, 2, QMC::AccessPrivate | QMC::MethodCloned, 0x80000000 | 56),
        // Slot 'on_actMoveSeg_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actExitPoint_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actRotate_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actResize_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actFlipLeftRight_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actFlipUpDown_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_plotClicked'
        QtMocHelpers::SlotData<void(const QPointF &)>(65, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 66, 67 },
        }}),
        // Slot 'on_plotControlClicked'
        QtMocHelpers::SlotData<void(const QPointF &)>(68, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 66, 67 },
        }}),
        // Slot 'setFontPointSize'
        QtMocHelpers::SlotData<void(QWidget * const, int)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 70, 71 }, { QMetaType::Int, 72 },
        }}),
        // Slot 'setFontPointSize'
        QtMocHelpers::SlotData<void(QAction * const, int)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 73, 74 }, { QMetaType::Int, 72 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FormContour, qt_meta_tag_ZN11FormContourE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FormContour::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FormContourE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FormContourE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FormContourE_t>.metaTypes,
    nullptr
} };

void FormContour::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FormContour *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->homePageClicked(); break;
        case 1: _t->muxPageClicked((*reinterpret_cast<std::add_pointer_t<size_t>>(_a[1]))); break;
        case 2: _t->passesPageClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->passesPageClicked(); break;
        case 4: _t->editPageClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->helpPageClicked((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->fileNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_btnOpen_clicked(); break;
        case 8: _t->on_btnSave_clicked(); break;
        case 9: _t->on_btnSaveAs_clicked(); break;
        case 10: _t->printUnused((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Contour>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<Contour>>(_a[4]))); break;
        case 11: _t->trySort((*reinterpret_cast<std::add_pointer_t<Contour&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Contour*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 12: _t->trySortDxf((*reinterpret_cast<std::add_pointer_t<Contour&>>(_a[1]))); break;
        case 13: _t->on_btnLoadDxf_clicked(); break;
        case 14: _t->on_btnNewContour_clicked(); break;
        case 15: _t->on_btnNewCutline_clicked(); break;
        case 16: _t->on_btnMerge_clicked(); break;
        case 17: _t->on_actDeleteCtr_clicked(); break;
        case 18: _t->on_actDeleteSeg_clicked(); break;
        case 19: _t->on_btnClear_clicked(); break;
        case 20: _t->on_btnChangeDir_clicked(); break;
        case 21: _t->on_actReverseSeg_clicked(); break;
        case 22: _t->on_actFirstCtr_clicked(); break;
        case 23: _t->on_actLastCtr_clicked(); break;
        case 24: _t->on_actUpCtr_clicked(); break;
        case 25: _t->on_actDownCtr_clicked(); break;
        case 26: _t->on_actFirstSeg_clicked(); break;
        case 27: _t->on_actLastSeg_clicked(); break;
        case 28: _t->on_actUpSeg_clicked(); break;
        case 29: _t->on_actDownSeg_clicked(); break;
        case 30: _t->on_actSortCtrClicked(); break;
        case 31: _t->on_actSortSegClicked(); break;
        case 32: _t->onViewContoursClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 33: _t->onViewSegmentsClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 34: _t->on_actUseAsEntryLine_clicked(); break;
        case 35: _t->on_btnSegProp_clicked(); break;
        case 36: _t->on_btnCtrProp_clicked(); break;
        case 37: { QModelIndexList _r = _t->selectedIndexes((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 38: { QModelIndexList _r = _t->selectedIndexes((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 39: { QModelIndexList _r = _t->selectedIndexes();
            if (_a[0]) *reinterpret_cast<QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->on_actMoveSeg_clicked(); break;
        case 41: _t->on_actExitPoint_triggered(); break;
        case 42: _t->on_actRotate_triggered(); break;
        case 43: _t->on_actResize_triggered(); break;
        case 44: _t->on_actFlipLeftRight_triggered(); break;
        case 45: _t->on_actFlipUpDown_triggered(); break;
        case 46: _t->on_plotClicked((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 47: _t->on_plotControlClicked((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 48: _t->setFontPointSize((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 49: _t->setFontPointSize((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)()>(_a, &FormContour::homePageClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)(size_t )>(_a, &FormContour::muxPageClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)(bool )>(_a, &FormContour::passesPageClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)(bool )>(_a, &FormContour::editPageClicked, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)(const QString & )>(_a, &FormContour::helpPageClicked, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormContour::*)(const QString & )>(_a, &FormContour::fileNameChanged, 6))
            return;
    }
}

const QMetaObject *FormContour::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormContour::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FormContourE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormContour::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void FormContour::homePageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormContour::muxPageClicked(size_t _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void FormContour::passesPageClicked(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 4
void FormContour::editPageClicked(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void FormContour::helpPageClicked(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void FormContour::fileNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
