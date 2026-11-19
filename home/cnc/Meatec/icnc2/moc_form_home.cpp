/****************************************************************************
** Meta object code from reading C++ file 'form_home.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/form_home.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormHome_t {
    QByteArrayData data[20];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormHome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormHome_t qt_meta_stringdata_FormHome = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormHome"
QT_MOC_LITERAL(1, 9, 18), // "contourPageClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "editPageClicked"
QT_MOC_LITERAL(4, 45, 4), // "plot"
QT_MOC_LITERAL(5, 50, 14), // "runPageClicked"
QT_MOC_LITERAL(6, 65, 6), // "backup"
QT_MOC_LITERAL(7, 72, 15), // "testPageClicked"
QT_MOC_LITERAL(8, 88, 19), // "settingsPageClicked"
QT_MOC_LITERAL(9, 108, 15), // "pultPageClicked"
QT_MOC_LITERAL(10, 124, 17), // "centerPageClicked"
QT_MOC_LITERAL(11, 142, 15), // "helpPageClicked"
QT_MOC_LITERAL(12, 158, 9), // "file_name"
QT_MOC_LITERAL(13, 168, 15), // "programMinimize"
QT_MOC_LITERAL(14, 184, 13), // "onItemClicked"
QT_MOC_LITERAL(15, 198, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(16, 215, 4), // "item"
QT_MOC_LITERAL(17, 220, 6), // "column"
QT_MOC_LITERAL(18, 227, 10), // "connectCnc"
QT_MOC_LITERAL(19, 238, 5) // "reset"

    },
    "FormHome\0contourPageClicked\0\0"
    "editPageClicked\0plot\0runPageClicked\0"
    "backup\0testPageClicked\0settingsPageClicked\0"
    "pultPageClicked\0centerPageClicked\0"
    "helpPageClicked\0file_name\0programMinimize\0"
    "onItemClicked\0QTreeWidgetItem*\0item\0"
    "column\0connectCnc\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormHome[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       3,    0,   88,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   89,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x26 /* Public | MethodCloned */,
       7,    0,   93,    2, 0x06 /* Public */,
       8,    0,   94,    2, 0x06 /* Public */,
       9,    0,   95,    2, 0x06 /* Public */,
      10,    0,   96,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,
      13,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  101,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x0a /* Public */,
      18,    0,  109,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void FormHome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormHome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contourPageClicked(); break;
        case 1: _t->editPageClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->editPageClicked(); break;
        case 3: _t->runPageClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->runPageClicked(); break;
        case 5: _t->testPageClicked(); break;
        case 6: _t->settingsPageClicked(); break;
        case 7: _t->pultPageClicked(); break;
        case 8: _t->centerPageClicked(); break;
        case 9: _t->helpPageClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->programMinimize(); break;
        case 11: _t->onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->connectCnc((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->connectCnc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::contourPageClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormHome::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::editPageClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FormHome::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::runPageClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::testPageClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::settingsPageClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::pultPageClicked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::centerPageClicked)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FormHome::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::helpPageClicked)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FormHome::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormHome::programMinimize)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormHome::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormHome.data,
    qt_meta_data_FormHome,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormHome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormHome::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormHome.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void FormHome::runPageClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FormHome::programMinimize()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
