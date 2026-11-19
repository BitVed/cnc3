/****************************************************************************
** Meta object code from reading C++ file 'form_passes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_passes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_passes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormPasses_t {
    QByteArrayData data[14];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormPasses_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormPasses_t qt_meta_stringdata_FormPasses = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FormPasses"
QT_MOC_LITERAL(1, 11, 15), // "backPageClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "helpPageClicked"
QT_MOC_LITERAL(4, 44, 9), // "file_name"
QT_MOC_LITERAL(5, 54, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(6, 73, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(7, 92, 20), // "on_btnSaveAs_clicked"
QT_MOC_LITERAL(8, 113, 23), // "on_btnOpenModes_clicked"
QT_MOC_LITERAL(9, 137, 23), // "on_btnSaveModes_clicked"
QT_MOC_LITERAL(10, 161, 25), // "on_btnSaveAsModes_clicked"
QT_MOC_LITERAL(11, 187, 20), // "on_tableMode_clicked"
QT_MOC_LITERAL(12, 208, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 220, 5) // "index"

    },
    "FormPasses\0backPageClicked\0\0helpPageClicked\0"
    "file_name\0on_btnOpen_clicked\0"
    "on_btnSave_clicked\0on_btnSaveAs_clicked\0"
    "on_btnOpenModes_clicked\0on_btnSaveModes_clicked\0"
    "on_btnSaveAsModes_clicked\0"
    "on_tableMode_clicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormPasses[] = {

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
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void FormPasses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormPasses *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backPageClicked(); break;
        case 1: _t->helpPageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnOpen_clicked(); break;
        case 3: _t->on_btnSave_clicked(); break;
        case 4: _t->on_btnSaveAs_clicked(); break;
        case 5: _t->on_btnOpenModes_clicked(); break;
        case 6: _t->on_btnSaveModes_clicked(); break;
        case 7: _t->on_btnSaveAsModes_clicked(); break;
        case 8: _t->on_tableMode_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormPasses::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormPasses::backPageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormPasses::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormPasses::helpPageClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormPasses::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormPasses.data,
    qt_meta_data_FormPasses,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormPasses::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormPasses::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormPasses.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormPasses::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FormPasses::backPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormPasses::helpPageClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
