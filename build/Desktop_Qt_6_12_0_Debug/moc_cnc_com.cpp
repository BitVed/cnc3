/****************************************************************************
** Meta object code from reading C++ file 'cnc_com.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cnc_com.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnc_com.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6CncComE_t {};
} // unnamed namespace

template <> constexpr inline auto CncCom::qt_create_metaobjectdata<qt_meta_tag_ZN6CncComE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CncCom",
        "writeResult",
        "",
        "valid",
        "readResult",
        "std::vector<uint8_t>",
        "readFifoResult",
        "readArray32Result",
        "std::vector<uint32_t>",
        "read16Result",
        "uint16_t",
        "read32Result",
        "uint32_t",
        "read48Result",
        "uint64_t",
        "read64Result",
        "onResponse",
        "ComPacket",
        "rxPack",
        "onError",
        "std::string",
        "s",
        "onTimeout"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'writeResult'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'readResult'
        QtMocHelpers::SignalData<void(const std::vector<uint8_t> &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'readFifoResult'
        QtMocHelpers::SignalData<void(const std::vector<uint8_t> &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'readArray32Result'
        QtMocHelpers::SignalData<void(const std::vector<uint32_t> &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'read16Result'
        QtMocHelpers::SignalData<void(uint16_t, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Signal 'read32Result'
        QtMocHelpers::SignalData<void(uint32_t, bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Signal 'read48Result'
        QtMocHelpers::SignalData<void(uint64_t, bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Signal 'read64Result'
        QtMocHelpers::SignalData<void(uint64_t, bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Slot 'onResponse'
        QtMocHelpers::SlotData<void(const ComPacket &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'onError'
        QtMocHelpers::SlotData<void(const std::string &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'onTimeout'
        QtMocHelpers::SlotData<void(const QString &)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CncCom, qt_meta_tag_ZN6CncComE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CncCom::staticMetaObject = { {
    QMetaObject::SuperData::link<CncComThread::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CncComE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CncComE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6CncComE_t>.metaTypes,
    nullptr
} };

void CncCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CncCom *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->writeResult((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->readResult((*reinterpret_cast<std::add_pointer_t<std::vector<uint8_t>>>(_a[1]))); break;
        case 2: _t->readFifoResult((*reinterpret_cast<std::add_pointer_t<std::vector<uint8_t>>>(_a[1]))); break;
        case 3: _t->readArray32Result((*reinterpret_cast<std::add_pointer_t<std::vector<uint32_t>>>(_a[1]))); break;
        case 4: _t->read16Result((*reinterpret_cast<std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->read32Result((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->read48Result((*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->read64Result((*reinterpret_cast<std::add_pointer_t<uint64_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->onResponse((*reinterpret_cast<std::add_pointer_t<ComPacket>>(_a[1]))); break;
        case 9: _t->onError((*reinterpret_cast<std::add_pointer_t<std::string>>(_a[1]))); break;
        case 10: _t->onTimeout((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(bool )>(_a, &CncCom::writeResult, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(const std::vector<uint8_t> & )>(_a, &CncCom::readResult, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(const std::vector<uint8_t> & )>(_a, &CncCom::readFifoResult, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(const std::vector<uint32_t> & )>(_a, &CncCom::readArray32Result, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(uint16_t , bool )>(_a, &CncCom::read16Result, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(uint32_t , bool )>(_a, &CncCom::read32Result, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(uint64_t , bool )>(_a, &CncCom::read48Result, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CncCom::*)(uint64_t , bool )>(_a, &CncCom::read64Result, 7))
            return;
    }
}

const QMetaObject *CncCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CncCom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6CncComE_t>.strings))
        return static_cast<void*>(this);
    return CncComThread::qt_metacast(_clname);
}

int CncCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CncComThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CncCom::writeResult(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void CncCom::readResult(const std::vector<uint8_t> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void CncCom::readFifoResult(const std::vector<uint8_t> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void CncCom::readArray32Result(const std::vector<uint32_t> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void CncCom::read16Result(uint16_t _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void CncCom::read32Result(uint32_t _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void CncCom::read48Result(uint64_t _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void CncCom::read64Result(uint64_t _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
