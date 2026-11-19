/****************************************************************************
** Meta object code from reading C++ file 'cnc_com_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/cnc_com_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnc_com_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CncComThread_t {
    QByteArrayData data[12];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CncComThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CncComThread_t qt_meta_stringdata_CncComThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CncComThread"
QT_MOC_LITERAL(1, 13, 5), // "error"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "std::string"
QT_MOC_LITERAL(4, 32, 1), // "s"
QT_MOC_LITERAL(5, 34, 8), // "response"
QT_MOC_LITERAL(6, 43, 9), // "ComPacket"
QT_MOC_LITERAL(7, 53, 6), // "rxpack"
QT_MOC_LITERAL(8, 60, 7), // "timeout"
QT_MOC_LITERAL(9, 68, 20), // "writeBurstProcessing"
QT_MOC_LITERAL(10, 89, 3), // "pct"
QT_MOC_LITERAL(11, 93, 19) // "readBurstProcessing"

    },
    "CncComThread\0error\0\0std::string\0s\0"
    "response\0ComPacket\0rxpack\0timeout\0"
    "writeBurstProcessing\0pct\0readBurstProcessing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CncComThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,
      11,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void CncComThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CncComThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->response((*reinterpret_cast< const ComPacket(*)>(_a[1]))); break;
        case 2: _t->timeout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->writeBurstProcessing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->readBurstProcessing((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CncComThread::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncComThread::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CncComThread::*)(const ComPacket & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncComThread::response)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CncComThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncComThread::timeout)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CncComThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncComThread::writeBurstProcessing)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CncComThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CncComThread::readBurstProcessing)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CncComThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_CncComThread.data,
    qt_meta_data_CncComThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CncComThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CncComThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CncComThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CncComThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CncComThread::error(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CncComThread::response(const ComPacket & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CncComThread::timeout(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CncComThread::writeBurstProcessing(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CncComThread::readBurstProcessing(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
