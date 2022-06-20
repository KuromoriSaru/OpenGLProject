/****************************************************************************
** Meta object code from reading C++ file 'FinalProjectQT.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../FinalProjectQT.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FinalProjectQT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FinalProjectQT_t {
    const uint offsetsAndSize[46];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FinalProjectQT_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FinalProjectQT_t qt_meta_stringdata_FinalProjectQT = {
    {
QT_MOC_LITERAL(0, 14), // "FinalProjectQT"
QT_MOC_LITERAL(15, 7), // "addTime"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "chooseModel"
QT_MOC_LITERAL(36, 9), // "modelName"
QT_MOC_LITERAL(46, 20), // "changeTextureDefault"
QT_MOC_LITERAL(67, 5), // "index"
QT_MOC_LITERAL(73, 13), // "toggleTexture"
QT_MOC_LITERAL(87, 7), // "checked"
QT_MOC_LITERAL(95, 11), // "toggleLight"
QT_MOC_LITERAL(107, 10), // "shaderType"
QT_MOC_LITERAL(118, 19), // "currentLightControl"
QT_MOC_LITERAL(138, 11), // "changeColor"
QT_MOC_LITERAL(150, 15), // "changeShininess"
QT_MOC_LITERAL(166, 5), // "shiny"
QT_MOC_LITERAL(172, 13), // "lightProperty"
QT_MOC_LITERAL(186, 5), // "light"
QT_MOC_LITERAL(192, 14), // "spotLightSpecs"
QT_MOC_LITERAL(207, 4), // "spot"
QT_MOC_LITERAL(212, 13), // "lightMovement"
QT_MOC_LITERAL(226, 5), // "value"
QT_MOC_LITERAL(232, 17), // "updateCamRotation"
QT_MOC_LITERAL(250, 17) // "updateCamPosition"

    },
    "FinalProjectQT\0addTime\0\0chooseModel\0"
    "modelName\0changeTextureDefault\0index\0"
    "toggleTexture\0checked\0toggleLight\0"
    "shaderType\0currentLightControl\0"
    "changeColor\0changeShininess\0shiny\0"
    "lightProperty\0light\0spotLightSpecs\0"
    "spot\0lightMovement\0value\0updateCamRotation\0"
    "updateCamPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FinalProjectQT[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x0a,    1 /* Public */,
       3,    1,   99,    2, 0x0a,    2 /* Public */,
       5,    1,  102,    2, 0x0a,    4 /* Public */,
       7,    1,  105,    2, 0x0a,    6 /* Public */,
       9,    1,  108,    2, 0x0a,    8 /* Public */,
      10,    1,  111,    2, 0x0a,   10 /* Public */,
      11,    1,  114,    2, 0x0a,   12 /* Public */,
      12,    0,  117,    2, 0x0a,   14 /* Public */,
      13,    1,  118,    2, 0x0a,   15 /* Public */,
      15,    1,  121,    2, 0x0a,   17 /* Public */,
      17,    1,  124,    2, 0x0a,   19 /* Public */,
      19,    1,  127,    2, 0x0a,   21 /* Public */,
      21,    1,  130,    2, 0x0a,   23 /* Public */,
      22,    1,  133,    2, 0x0a,   25 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void FinalProjectQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FinalProjectQT *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addTime(); break;
        case 1: _t->chooseModel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->changeTextureDefault((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->toggleTexture((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->toggleLight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->shaderType((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->currentLightControl((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->changeColor(); break;
        case 8: _t->changeShininess((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->lightProperty((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->spotLightSpecs((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->lightMovement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateCamRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->updateCamPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FinalProjectQT::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FinalProjectQT.offsetsAndSize,
    qt_meta_data_FinalProjectQT,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FinalProjectQT_t
, QtPrivate::TypeAndForceComplete<FinalProjectQT, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *FinalProjectQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinalProjectQT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FinalProjectQT.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FinalProjectQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
