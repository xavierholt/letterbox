/****************************************************************************
** Meta object code from reading C++ file 'button.h'
**
** Created: Thu Jun 13 21:35:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "button.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Button[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      16,    7,    7,    7, 0x0a,

 // properties: name, type, flags
      29,   25, 0x02095103,
      35,   25, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_Button[] = {
    "Button\0\0reset()\0toggle()\0int\0state\0"
    "numStates\0"
};

void Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Button *_t = static_cast<Button *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->toggle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Button::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Button::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Button,
      qt_meta_data_Button, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Button::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Button::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Button))
        return static_cast<void*>(const_cast< Button*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getState(); break;
        case 1: *reinterpret_cast< int*>(_v) = getNumStates(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setState(*reinterpret_cast< int*>(_v)); break;
        case 1: setNumStates(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
