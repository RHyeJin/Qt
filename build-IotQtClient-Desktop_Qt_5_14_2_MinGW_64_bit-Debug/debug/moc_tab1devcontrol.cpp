/****************************************************************************
** Meta object code from reading C++ file 'tab1devcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../IotQtClient_Tab1/tab1devcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab1devcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab1DevControl_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab1DevControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab1DevControl_t qt_meta_stringdata_Tab1DevControl = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Tab1DevControl"
QT_MOC_LITERAL(1, 15, 21), // "slotKeyCheckBoxUpdate"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "slotSetValueDial"
QT_MOC_LITERAL(4, 55, 14), // "slotTimerStart"
QT_MOC_LITERAL(5, 70, 20), // "slotTimerValueChange"
QT_MOC_LITERAL(6, 91, 16) // "slotDialsetValue"

    },
    "Tab1DevControl\0slotKeyCheckBoxUpdate\0"
    "\0slotSetValueDial\0slotTimerStart\0"
    "slotTimerValueChange\0slotDialsetValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab1DevControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    0,   42,    2, 0x08 /* Private */,
       4,    1,   43,    2, 0x08 /* Private */,
       5,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Tab1DevControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab1DevControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotKeyCheckBoxUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotSetValueDial(); break;
        case 2: _t->slotTimerStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotTimerValueChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotDialsetValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab1DevControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab1DevControl.data,
    qt_meta_data_Tab1DevControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab1DevControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab1DevControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab1DevControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab1DevControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
