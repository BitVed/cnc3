/****************************************************************************
** Meta object code from reading C++ file 'form_center.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_center.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_center.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormCenter_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormCenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormCenter_t qt_meta_stringdata_FormCenter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FormCenter"
QT_MOC_LITERAL(1, 11, 15), // "homePageClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "helpPageClicked"
QT_MOC_LITERAL(4, 44, 9), // "file_name"
QT_MOC_LITERAL(5, 54, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(6, 73, 23), // "on_btnXYForward_clicked"
QT_MOC_LITERAL(7, 97, 3), // "dir"
QT_MOC_LITERAL(8, 101, 4), // "AXIS"
QT_MOC_LITERAL(9, 106, 4), // "axis"
QT_MOC_LITERAL(10, 111, 20), // "on_btnCenter_clicked"
QT_MOC_LITERAL(11, 132, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(12, 153, 12), // "readCutState"
QT_MOC_LITERAL(13, 166, 7) // "readAdc"

    },
    "FormCenter\0homePageClicked\0\0helpPageClicked\0"
    "file_name\0on_btnHome_clicked\0"
    "on_btnXYForward_clicked\0dir\0AXIS\0axis\0"
    "on_btnCenter_clicked\0on_btnCancel_clicked\0"
    "readCutState\0readAdc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormCenter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x08 /* Private */,
       6,    2,   59,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormCenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homePageClicked(); break;
        case 1: _t->helpPageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnHome_clicked(); break;
        case 3: _t->on_btnXYForward_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< AXIS(*)>(_a[2]))); break;
        case 4: _t->on_btnCenter_clicked(); break;
        case 5: _t->on_btnCancel_clicked(); break;
        case 6: _t->readCutState(); break;
        case 7: _t->readAdc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormCenter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormCenter::homePageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormCenter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormCenter::helpPageClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormCenter::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormCenter.data,
    qt_meta_data_FormCenter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormCenter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FormCenter::homePageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormCenter::helpPageClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
