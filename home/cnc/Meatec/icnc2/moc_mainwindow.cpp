/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "onHomePageClickedUnlocked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "onHomePageClicked"
QT_MOC_LITERAL(4, 56, 10), // "onCncError"
QT_MOC_LITERAL(5, 67, 11), // "std::string"
QT_MOC_LITERAL(6, 79, 1), // "s"
QT_MOC_LITERAL(7, 81, 20), // "onContourPageClicked"
QT_MOC_LITERAL(8, 102, 17), // "onEditPageClicked"
QT_MOC_LITERAL(9, 120, 4), // "plot"
QT_MOC_LITERAL(10, 125, 16), // "onRunPageClicked"
QT_MOC_LITERAL(11, 142, 6), // "backup"
QT_MOC_LITERAL(12, 149, 21), // "onSettingsPageClicked"
QT_MOC_LITERAL(13, 171, 17), // "onPultPageClicked"
QT_MOC_LITERAL(14, 189, 19), // "onCenterPageClicked"
QT_MOC_LITERAL(15, 209, 17), // "onTestPageClicked"
QT_MOC_LITERAL(16, 227, 17), // "onFileNameChanged"
QT_MOC_LITERAL(17, 245, 9), // "file_name"
QT_MOC_LITERAL(18, 255, 19), // "onPassesPageClicked"
QT_MOC_LITERAL(19, 275, 17), // "onHelpPageClicked"
QT_MOC_LITERAL(20, 293, 8), // "QWidget*"
QT_MOC_LITERAL(21, 302, 6), // "source"
QT_MOC_LITERAL(22, 309, 16), // "helpHtmlFileName"
QT_MOC_LITERAL(23, 326, 17), // "onBackHelpClicked"
QT_MOC_LITERAL(24, 344, 8) // "showTime"

    },
    "MainWindow\0onHomePageClickedUnlocked\0"
    "\0onHomePageClicked\0onCncError\0std::string\0"
    "s\0onContourPageClicked\0onEditPageClicked\0"
    "plot\0onRunPageClicked\0backup\0"
    "onSettingsPageClicked\0onPultPageClicked\0"
    "onCenterPageClicked\0onTestPageClicked\0"
    "onFileNameChanged\0file_name\0"
    "onPassesPageClicked\0onHelpPageClicked\0"
    "QWidget*\0source\0helpHtmlFileName\0"
    "onBackHelpClicked\0showTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    1,  105,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    2,  109,    2, 0x08 /* Private */,
      23,    0,  114,    2, 0x08 /* Private */,
      24,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QString,   21,   22,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onHomePageClickedUnlocked(); break;
        case 1: _t->onHomePageClicked(); break;
        case 2: _t->onCncError((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->onContourPageClicked(); break;
        case 4: _t->onEditPageClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onRunPageClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onSettingsPageClicked(); break;
        case 7: _t->onPultPageClicked(); break;
        case 8: _t->onCenterPageClicked(); break;
        case 9: _t->onTestPageClicked(); break;
        case 10: _t->onFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onPassesPageClicked(); break;
        case 12: _t->onHelpPageClicked((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->onBackHelpClicked(); break;
        case 14: _t->showTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
