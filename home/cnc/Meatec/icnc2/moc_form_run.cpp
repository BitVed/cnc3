/****************************************************************************
** Meta object code from reading C++ file 'form_run.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_run.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_run.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormRun_t {
    QByteArrayData data[17];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormRun_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormRun_t qt_meta_stringdata_FormRun = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FormRun"
QT_MOC_LITERAL(1, 8, 15), // "homePageClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "helpPageClicked"
QT_MOC_LITERAL(4, 41, 9), // "file_name"
QT_MOC_LITERAL(5, 51, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(6, 70, 19), // "on_btnStart_clicked"
QT_MOC_LITERAL(7, 90, 21), // "on_btnReverse_clicked"
QT_MOC_LITERAL(8, 112, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(9, 133, 20), // "highlightCurrentLine"
QT_MOC_LITERAL(10, 154, 14), // "readCncContext"
QT_MOC_LITERAL(11, 169, 7), // "readAdc"
QT_MOC_LITERAL(12, 177, 14), // "onFrameChanged"
QT_MOC_LITERAL(13, 192, 9), // "frame_num"
QT_MOC_LITERAL(14, 202, 8), // "fpoint_t"
QT_MOC_LITERAL(15, 211, 7), // "bot_pos"
QT_MOC_LITERAL(16, 219, 7) // "top_pos"

    },
    "FormRun\0homePageClicked\0\0helpPageClicked\0"
    "file_name\0on_btnHome_clicked\0"
    "on_btnStart_clicked\0on_btnReverse_clicked\0"
    "on_btnCancel_clicked\0highlightCurrentLine\0"
    "readCncContext\0readAdc\0onFrameChanged\0"
    "frame_num\0fpoint_t\0bot_pos\0top_pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormRun[] = {

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
       3,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    3,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14, 0x80000000 | 14,   13,   15,   16,

       0        // eod
};

void FormRun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormRun *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homePageClicked(); break;
        case 1: _t->helpPageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnHome_clicked(); break;
        case 3: _t->on_btnStart_clicked(); break;
        case 4: _t->on_btnReverse_clicked(); break;
        case 5: _t->on_btnCancel_clicked(); break;
        case 6: _t->highlightCurrentLine(); break;
        case 7: _t->readCncContext(); break;
        case 8: _t->readAdc(); break;
        case 9: _t->onFrameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const fpoint_t(*)>(_a[2])),(*reinterpret_cast< const fpoint_t(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormRun::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormRun::homePageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormRun::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormRun::helpPageClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormRun::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormRun.data,
    qt_meta_data_FormRun,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormRun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormRun::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormRun.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormRun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FormRun::homePageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormRun::helpPageClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
