/****************************************************************************
** Meta object code from reading C++ file 'colorslider_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../v6/colorslider_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorslider_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSColorSlider_pENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSColorSlider_pENDCLASS = QtMocHelpers::stringData(
    "ColorSlider_p",
    "QML.Element",
    "auto",
    "valueChanged",
    "",
    "setValue",
    "newValue",
    "increase",
    "stepSize",
    "decrease",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSColorSlider_pENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[13];
    char stringdata4[1];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSColorSlider_pENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSColorSlider_pENDCLASS_t qt_meta_stringdata_CLASSColorSlider_pENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ColorSlider_p"
        QT_MOC_LITERAL(14, 11),  // "QML.Element"
        QT_MOC_LITERAL(26, 4),  // "auto"
        QT_MOC_LITERAL(31, 12),  // "valueChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 8),  // "setValue"
        QT_MOC_LITERAL(54, 8),  // "newValue"
        QT_MOC_LITERAL(63, 8),  // "increase"
        QT_MOC_LITERAL(72, 8),  // "stepSize"
        QT_MOC_LITERAL(81, 8),  // "decrease"
        QT_MOC_LITERAL(90, 5)   // "value"
    },
    "ColorSlider_p",
    "QML.Element",
    "auto",
    "valueChanged",
    "",
    "setValue",
    "newValue",
    "increase",
    "stepSize",
    "decrease",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSColorSlider_pENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   40,    4, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    4, 0x02,    3 /* Public */,
       7,    1,   44,    4, 0x02,    5 /* Public */,
       9,    1,   47,    4, 0x02,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QReal,    8,

 // properties: name, type, flags
      10, QMetaType::QReal, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorSlider_p::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSColorSlider_pENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSColorSlider_pENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'value'
        qreal,
        // Q_OBJECT / Q_GADGET
        ColorSlider_p,
        // method 'valueChanged'
        void,
        // method 'setValue'
        void,
        qreal,
        // method 'increase'
        void,
        qreal,
        // method 'decrease'
        void,
        qreal
    >,
    nullptr
} };

void ColorSlider_p::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorSlider_p *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->setValue((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->increase((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->decrease((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorSlider_p::*)();
            if (_t _q_method = &ColorSlider_p::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorSlider_p *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorSlider_p *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ColorSlider_p::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorSlider_p::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSColorSlider_pENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorSlider_p::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ColorSlider_p::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
