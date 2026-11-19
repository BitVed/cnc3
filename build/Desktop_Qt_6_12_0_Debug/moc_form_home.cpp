/****************************************************************************
** Meta object code from reading C++ file 'form_home.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../form_home.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_home.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8FormHomeE_t {};
} // unnamed namespace

template <> constexpr inline auto FormHome::qt_create_metaobjectdata<qt_meta_tag_ZN8FormHomeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FormHome",
        "contourPageClicked",
        "",
        "editPageClicked",
        "plot",
        "runPageClicked",
        "backup",
        "testPageClicked",
        "settingsPageClicked",
        "pultPageClicked",
        "centerPageClicked",
        "helpPageClicked",
        "file_name",
        "programMinimize",
        "onItemClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "connectCnc",
        "reset"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'contourPageClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editPageClicked'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'editPageClicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'runPageClicked'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'runPageClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'testPageClicked'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsPageClicked'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pultPageClicked'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'centerPageClicked'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'helpPageClicked'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'programMinimize'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onItemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'connectCnc'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'connectCnc'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FormHome, qt_meta_tag_ZN8FormHomeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FormHome::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FormHomeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FormHomeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8FormHomeE_t>.metaTypes,
    nullptr
} };

void FormHome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FormHome *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contourPageClicked(); break;
        case 1: _t->editPageClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->editPageClicked(); break;
        case 3: _t->runPageClicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->runPageClicked(); break;
        case 5: _t->testPageClicked(); break;
        case 6: _t->settingsPageClicked(); break;
        case 7: _t->pultPageClicked(); break;
        case 8: _t->centerPageClicked(); break;
        case 9: _t->helpPageClicked((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->programMinimize(); break;
        case 11: _t->onItemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->connectCnc((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->connectCnc(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::contourPageClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)(bool )>(_a, &FormHome::editPageClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)(bool )>(_a, &FormHome::runPageClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::testPageClicked, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::settingsPageClicked, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::pultPageClicked, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::centerPageClicked, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)(const QString & )>(_a, &FormHome::helpPageClicked, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormHome::*)()>(_a, &FormHome::programMinimize, 10))
            return;
    }
}

const QMetaObject *FormHome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormHome::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8FormHomeE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormHome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void FormHome::contourPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormHome::editPageClicked(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 3
void FormHome::runPageClicked(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 5
void FormHome::testPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FormHome::settingsPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FormHome::pultPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FormHome::centerPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FormHome::helpPageClicked(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void FormHome::programMinimize()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
