/****************************************************************************
** Meta object code from reading C++ file 'form_pult.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_pult.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_pult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormPult_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormPult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormPult_t qt_meta_stringdata_FormPult = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormPult"
QT_MOC_LITERAL(1, 9, 15), // "homePageClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "helpPageClicked"
QT_MOC_LITERAL(4, 42, 9), // "file_name"
QT_MOC_LITERAL(5, 52, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(6, 71, 18), // "on_btnMove_clicked"
QT_MOC_LITERAL(7, 90, 3), // "dir"
QT_MOC_LITERAL(8, 94, 17), // "on_btnSet_clicked"
QT_MOC_LITERAL(9, 112, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(10, 133, 12), // "readCutState"
QT_MOC_LITERAL(11, 146, 7) // "readAdc"

    },
    "FormPult\0homePageClicked\0\0helpPageClicked\0"
    "file_name\0on_btnHome_clicked\0"
    "on_btnMove_clicked\0dir\0on_btnSet_clicked\0"
    "on_btnCancel_clicked\0readCutState\0"
    "readAdc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormPult[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       6,    0,   67,    2, 0x28 /* Private | MethodCloned */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormPult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormPult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homePageClicked(); break;
        case 1: _t->helpPageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnHome_clicked(); break;
        case 3: _t->on_btnMove_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_btnMove_clicked(); break;
        case 5: _t->on_btnSet_clicked(); break;
        case 6: _t->on_btnCancel_clicked(); break;
        case 7: _t->readCutState(); break;
        case 8: _t->readAdc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormPult::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormPult::homePageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormPult::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormPult::helpPageClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormPult::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormPult.data,
    qt_meta_data_FormPult,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormPult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormPult::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormPult.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormPult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FormPult::homePageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormPult::helpPageClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
