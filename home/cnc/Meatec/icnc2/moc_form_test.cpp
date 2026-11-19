/****************************************************************************
** Meta object code from reading C++ file 'form_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormTest_t {
    QByteArrayData data[12];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormTest_t qt_meta_stringdata_FormTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormTest"
QT_MOC_LITERAL(1, 9, 15), // "homePageClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "editPageClicked"
QT_MOC_LITERAL(4, 42, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(5, 61, 23), // "on_btnQuickTest_clicked"
QT_MOC_LITERAL(6, 85, 22), // "on_btnFullTest_clicked"
QT_MOC_LITERAL(7, 108, 19), // "on_btnGCode_clicked"
QT_MOC_LITERAL(8, 128, 18), // "on_btnImit_clicked"
QT_MOC_LITERAL(9, 147, 23), // "on_btnReadGCode_clicked"
QT_MOC_LITERAL(10, 171, 21), // "on_btnMemTest_clicked"
QT_MOC_LITERAL(11, 193, 18) // "on_btnConn_clicked"

    },
    "FormTest\0homePageClicked\0\0editPageClicked\0"
    "on_btnHome_clicked\0on_btnQuickTest_clicked\0"
    "on_btnFullTest_clicked\0on_btnGCode_clicked\0"
    "on_btnImit_clicked\0on_btnReadGCode_clicked\0"
    "on_btnMemTest_clicked\0on_btnConn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homePageClicked(); break;
        case 1: _t->editPageClicked(); break;
        case 2: _t->on_btnHome_clicked(); break;
        case 3: _t->on_btnQuickTest_clicked(); break;
        case 4: _t->on_btnFullTest_clicked(); break;
        case 5: _t->on_btnGCode_clicked(); break;
        case 6: _t->on_btnImit_clicked(); break;
        case 7: _t->on_btnReadGCode_clicked(); break;
        case 8: _t->on_btnMemTest_clicked(); break;
        case 9: _t->on_btnConn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormTest::homePageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormTest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormTest::editPageClicked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FormTest::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormTest.data,
    qt_meta_data_FormTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormTest.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FormTest::homePageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormTest::editPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
