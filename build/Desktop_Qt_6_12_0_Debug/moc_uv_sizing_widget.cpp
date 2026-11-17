/****************************************************************************
** Meta object code from reading C++ file 'uv_sizing_widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../uv_sizing_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uv_sizing_widget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14UVSizingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto UVSizingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN14UVSizingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UVSizingWidget",
        "clicked",
        "",
        "onReset",
        "onGenerate",
        "onRecalc",
        "getSizingPar",
        "uv_sizing_t",
        "calcDia",
        "uv_dia_t",
        "p",
        "calc_dx",
        "H",
        "L",
        "u_max",
        "recalc",
        "uv_result_t",
        "d"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGenerate'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRecalc'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getSizingPar'
        QtMocHelpers::SlotData<uv_sizing_t() const>(6, 2, QMC::AccessPrivate, 0x80000000 | 7),
        // Slot 'calcDia'
        QtMocHelpers::SlotData<uv_dia_t(const uv_sizing_t &)>(8, 2, QMC::AccessPrivate, 0x80000000 | 9, {{
            { 0x80000000 | 7, 10 },
        }}),
        // Slot 'calc_dx'
        QtMocHelpers::SlotData<double(double, double, double)>(11, 2, QMC::AccessPrivate, QMetaType::Double, {{
            { QMetaType::Double, 12 }, { QMetaType::Double, 13 }, { QMetaType::Double, 14 },
        }}),
        // Slot 'recalc'
        QtMocHelpers::SlotData<uv_result_t(const uv_sizing_t &, uv_dia_t)>(15, 2, QMC::AccessPrivate, 0x80000000 | 16, {{
            { 0x80000000 | 7, 10 }, { 0x80000000 | 9, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UVSizingWidget, qt_meta_tag_ZN14UVSizingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UVSizingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UVSizingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UVSizingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14UVSizingWidgetE_t>.metaTypes,
    nullptr
} };

void UVSizingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UVSizingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->onReset(); break;
        case 2: _t->onGenerate(); break;
        case 3: _t->onRecalc(); break;
        case 4: { uv_sizing_t _r = _t->getSizingPar();
            if (_a[0]) *reinterpret_cast<uv_sizing_t*>(_a[0]) = std::move(_r); }  break;
        case 5: { uv_dia_t _r = _t->calcDia((*reinterpret_cast<std::add_pointer_t<uv_sizing_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast<uv_dia_t*>(_a[0]) = std::move(_r); }  break;
        case 6: { double _r = _t->calc_dx((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])));
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 7: { uv_result_t _r = _t->recalc((*reinterpret_cast<std::add_pointer_t<uv_sizing_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uv_dia_t>>(_a[2])));
            if (_a[0]) *reinterpret_cast<uv_result_t*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UVSizingWidget::*)()>(_a, &UVSizingWidget::clicked, 0))
            return;
    }
}

const QMetaObject *UVSizingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UVSizingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UVSizingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UVSizingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UVSizingWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
