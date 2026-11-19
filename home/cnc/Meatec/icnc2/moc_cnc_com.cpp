/****************************************************************************
** Meta object code from reading C++ file 'cnc_com.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/cnc_com.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnc_com.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CncCom_t {
    QByteArrayData data[23];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CncCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CncCom_t qt_meta_stringdata_CncCom = {
    {
QT_MOC_LITERAL(0, 0, 6), // "CncCom"
QT_MOC_LITERAL(1, 7, 11), // "writeResult"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "valid"
QT_MOC_LITERAL(4, 26, 10), // "readResult"
QT_MOC_LITERAL(5, 37, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(6, 58, 14), // "readFifoResult"
QT_MOC_LITERAL(7, 73, 17), // "readArray32Result"
QT_MOC_LITERAL(8, 91, 21), // "std::vector<uint32_t>"
QT_MOC_LITERAL(9, 113, 12), // "read16Result"
QT_MOC_LITERAL(10, 126, 8), // "uint16_t"
QT_MOC_LITERAL(11, 135, 12), // "read32Result"
QT_MOC_LITERAL(12, 148, 8), // "uint32_t"
QT_MOC_LITERAL(13, 157, 12), // "read48Result"
QT_MOC_LITERAL(14, 170, 8), // "uint64_t"
QT_MOC_LITERAL(15, 179, 12), // "read64Result"
QT_MOC_LITERAL(16, 192, 10), // "onResponse"
QT_MOC_LITERAL(17, 203, 9), // "ComPacket"
QT_MOC_LITERAL(18, 213, 6), // "rxPack"
QT_MOC_LITERAL(19, 220, 7), // "onError"
QT_MOC_LITERAL(20, 228, 11), // "std::string"
QT_MOC_LITERAL(21, 240, 1), // "s"
QT_MOC_LITERAL(22, 242, 9) // "onTimeout"

    },
    "CncCom\0writeResult\0\0valid\0readResult\0"
    "std::vector<uint8_t>\0readFifoResult\0"
    "readArray32Result\0std::vector<uint32_t>\0"
    "read16Result\0uint16_t\0read32Result\0"
    "uint32_t\0read48Result\0uint64_t\0"
    "read64Result\0onResponse\0ComPacket\0"
    "rxPack\0onError\0std::string\0s\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CncCom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,
       9,    2,   81,    2, 0x06 /* Public */,
      11,    2,   86,    2, 0x06 /* Public */,
      13,    2,   91,    2, 0x06 /* Public */,
      15,    2,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  101,    2, 0x08 /* Private */,
      19,    1,  104,    2, 0x08 /* Private */,
      22,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,    2,    3,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,    2,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,    2,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,    2,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void CncCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CncCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->readResult((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 2: _t->readFifoResult((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 3: _t->readArray32Result((*reinterpret_cast< const std::vector<uint32_t>(*)>(_a[1]))); break;
        case 4: _t->read16Result((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->read32Result((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->read48Result((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->read64Result((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->onResponse((*reinterpret_cast< const ComPacket(*)>(_a[1]))); break;
        case 9: _t->onError((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->onTimeout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CncCom::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::writeResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::readResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::readFifoResult)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(const std::vector<uint32_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::readArray32Result)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(uint16_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::read16Result)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(uint32_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::read32Result)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(uint64_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::read48Result)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CncCom::*)(uint64_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncCom::read64Result)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CncCom::staticMetaObject = { {
    &CncComThread::staticMetaObject,
    qt_meta_stringdata_CncCom.data,
    qt_meta_data_CncCom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CncCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CncCom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CncCom.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CncCom::writeResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CncCom::readResult(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CncCom::readFifoResult(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CncCom::readArray32Result(const std::vector<uint32_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CncCom::read16Result(uint16_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CncCom::read32Result(uint32_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CncCom::read48Result(uint64_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CncCom::read64Result(uint64_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
