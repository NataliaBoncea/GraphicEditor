/****************************************************************************
** Meta object code from reading C++ file 'colorpicker_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../v6/colorpicker_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorpicker_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSColorPicker_pENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSColorPicker_pENDCLASS = QtMocHelpers::stringData(
    "ColorPicker_p",
    "QML.Element",
    "auto",
    "colorChanged",
    "",
    "pickingChanged",
    "oldColorChanged",
    "setColor",
    "newColor",
    "eyedrop",
    "mousePosition",
    "setOldColor",
    "newOldColor",
    "startPicking",
    "revertPicking",
    "color",
    "oldColor",
    "picking"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSColorPicker_pENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[13];
    char stringdata4[1];
    char stringdata5[15];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[8];
    char stringdata10[14];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[13];
    char stringdata14[14];
    char stringdata15[6];
    char stringdata16[9];
    char stringdata17[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSColorPicker_pENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSColorPicker_pENDCLASS_t qt_meta_stringdata_CLASSColorPicker_pENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ColorPicker_p"
        QT_MOC_LITERAL(14, 11),  // "QML.Element"
        QT_MOC_LITERAL(26, 4),  // "auto"
        QT_MOC_LITERAL(31, 12),  // "colorChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "pickingChanged"
        QT_MOC_LITERAL(60, 15),  // "oldColorChanged"
        QT_MOC_LITERAL(76, 8),  // "setColor"
        QT_MOC_LITERAL(85, 8),  // "newColor"
        QT_MOC_LITERAL(94, 7),  // "eyedrop"
        QT_MOC_LITERAL(102, 13),  // "mousePosition"
        QT_MOC_LITERAL(116, 11),  // "setOldColor"
        QT_MOC_LITERAL(128, 11),  // "newOldColor"
        QT_MOC_LITERAL(140, 12),  // "startPicking"
        QT_MOC_LITERAL(153, 13),  // "revertPicking"
        QT_MOC_LITERAL(167, 5),  // "color"
        QT_MOC_LITERAL(173, 8),  // "oldColor"
        QT_MOC_LITERAL(182, 7)   // "picking"
    },
    "ColorPicker_p",
    "QML.Element",
    "auto",
    "colorChanged",
    "",
    "pickingChanged",
    "oldColorChanged",
    "setColor",
    "newColor",
    "eyedrop",
    "mousePosition",
    "setOldColor",
    "newOldColor",
    "startPicking",
    "revertPicking",
    "color",
    "oldColor",
    "picking"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSColorPicker_pENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       3,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   64,    4, 0x06,    4 /* Public */,
       5,    0,   65,    4, 0x06,    5 /* Public */,
       6,    0,   66,    4, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   67,    4, 0x02,    7 /* Public */,
       9,    1,   70,    4, 0x02,    9 /* Public */,
      11,    1,   73,    4, 0x02,   11 /* Public */,
      13,    0,   76,    4, 0x02,   13 /* Public */,
      14,    0,   77,    4, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::QPointF,   10,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QColor, 0x00015903, uint(0), 0,
      16, QMetaType::QColor, 0x00015103, uint(2), 0,
      17, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorPicker_p::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSColorPicker_pENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSColorPicker_pENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'color'
        QColor,
        // property 'oldColor'
        QColor,
        // property 'picking'
        bool,
        // Q_OBJECT / Q_GADGET
        ColorPicker_p,
        // method 'colorChanged'
        void,
        // method 'pickingChanged'
        void,
        // method 'oldColorChanged'
        void,
        // method 'setColor'
        void,
        const QColor &,
        // method 'eyedrop'
        void,
        QPointF,
        // method 'setOldColor'
        void,
        const QColor &,
        // method 'startPicking'
        void,
        // method 'revertPicking'
        void
    >,
    nullptr
} };

void ColorPicker_p::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPicker_p *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->pickingChanged(); break;
        case 2: _t->oldColorChanged(); break;
        case 3: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 4: _t->eyedrop((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 5: _t->setOldColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 6: _t->startPicking(); break;
        case 7: _t->revertPicking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorPicker_p::*)();
            if (_t _q_method = &ColorPicker_p::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorPicker_p::*)();
            if (_t _q_method = &ColorPicker_p::pickingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorPicker_p::*)();
            if (_t _q_method = &ColorPicker_p::oldColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorPicker_p *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->oldColor(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->picking(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorPicker_p *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setOldColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPicking(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ColorPicker_p::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPicker_p::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSColorPicker_pENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorPicker_p::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ColorPicker_p::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorPicker_p::pickingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorPicker_p::oldColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
