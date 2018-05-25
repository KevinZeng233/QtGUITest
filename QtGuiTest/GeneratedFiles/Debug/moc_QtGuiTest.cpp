/****************************************************************************
** Meta object code from reading C++ file 'QtGuiTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGuiTest_t {
    QByteArrayData data[10];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiTest_t qt_meta_stringdata_QtGuiTest = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtGuiTest"
QT_MOC_LITERAL(1, 10, 4), // "open"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "openColor"
QT_MOC_LITERAL(4, 26, 8), // "critical"
QT_MOC_LITERAL(5, 35, 10), // "imgMessage"
QT_MOC_LITERAL(6, 46, 5), // "Input"
QT_MOC_LITERAL(7, 52, 10), // "MouseEvent"
QT_MOC_LITERAL(8, 63, 4), // "Exit"
QT_MOC_LITERAL(9, 68, 11) // "Painted_msg"

    },
    "QtGuiTest\0open\0\0openColor\0critical\0"
    "imgMessage\0Input\0MouseEvent\0Exit\0"
    "Painted_msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

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

void QtGuiTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiTest *_t = static_cast<QtGuiTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->openColor(); break;
        case 2: _t->critical(); break;
        case 3: _t->imgMessage(); break;
        case 4: _t->Input(); break;
        case 5: _t->MouseEvent(); break;
        case 6: _t->Exit(); break;
        case 7: _t->Painted_msg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtGuiTest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtGuiTest.data,
      qt_meta_data_QtGuiTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGuiTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiTest.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtGuiTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
