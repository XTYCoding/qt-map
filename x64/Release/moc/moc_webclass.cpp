/****************************************************************************
** Meta object code from reading C++ file 'webclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../webclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebClass_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebClass_t qt_meta_stringdata_WebClass = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WebClass"
QT_MOC_LITERAL(1, 9, 12), // "sendToJs_WGS"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "jsShow"
QT_MOC_LITERAL(4, 30, 7), // "sendWgs"
QT_MOC_LITERAL(5, 38, 8), // "filepath"
QT_MOC_LITERAL(6, 47, 8), // "jscallme"
QT_MOC_LITERAL(7, 56, 4) // "show"

    },
    "WebClass\0sendToJs_WGS\0\0jsShow\0sendWgs\0"
    "filepath\0jscallme\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToJs_WGS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->jsShow(); break;
        case 2: _t->sendWgs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->jscallme(); break;
        case 4: _t->show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebClass::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebClass::sendToJs_WGS)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebClass::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebClass::jsShow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WebClass.data,
    qt_meta_data_WebClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WebClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WebClass::sendToJs_WGS(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebClass::jsShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
