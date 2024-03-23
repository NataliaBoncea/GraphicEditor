/****************************************************************************
** Meta object code from reading C++ file 'colorpickerpreview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../v6/colorpickerpreview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorpickerpreview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS = QtMocHelpers::stringData(
    "ColorPickerPreview",
    "QML.Element",
    "auto",
    "previewSizeChanged",
    "",
    "sizeChanged",
    "mousePositionChanged",
    "setMousePosition",
    "newMousePosition",
    "previewSize",
    "size",
    "mousePosition"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[19];
    char stringdata4[1];
    char stringdata5[12];
    char stringdata6[21];
    char stringdata7[17];
    char stringdata8[17];
    char stringdata9[12];
    char stringdata10[5];
    char stringdata11[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS_t qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ColorPickerPreview"
        QT_MOC_LITERAL(19, 11),  // "QML.Element"
        QT_MOC_LITERAL(31, 4),  // "auto"
        QT_MOC_LITERAL(36, 18),  // "previewSizeChanged"
        QT_MOC_LITERAL(55, 0),  // ""
        QT_MOC_LITERAL(56, 11),  // "sizeChanged"
        QT_MOC_LITERAL(68, 20),  // "mousePositionChanged"
        QT_MOC_LITERAL(89, 16),  // "setMousePosition"
        QT_MOC_LITERAL(106, 16),  // "newMousePosition"
        QT_MOC_LITERAL(123, 11),  // "previewSize"
        QT_MOC_LITERAL(135, 4),  // "size"
        QT_MOC_LITERAL(140, 13)   // "mousePosition"
    },
    "ColorPickerPreview",
    "QML.Element",
    "auto",
    "previewSizeChanged",
    "",
    "sizeChanged",
    "mousePositionChanged",
    "setMousePosition",
    "newMousePosition",
    "previewSize",
    "size",
    "mousePosition"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSColorPickerPreviewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   40,    4, 0x06,    4 /* Public */,
       5,    0,   41,    4, 0x06,    5 /* Public */,
       6,    0,   42,    4, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   43,    4, 0x02,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QPointF,    8,

 // properties: name, type, flags
       9, QMetaType::QReal, 0x00015103, uint(0), 0,
      10, QMetaType::QReal, 0x00015103, uint(1), 0,
      11, QMetaType::QPointF, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorPickerPreview::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSColorPickerPreviewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'previewSize'
        qreal,
        // property 'size'
        qreal,
        // property 'mousePosition'
        QPointF,
        // Q_OBJECT / Q_GADGET
        ColorPickerPreview,
        // method 'previewSizeChanged'
        void,
        // method 'sizeChanged'
        void,
        // method 'mousePositionChanged'
        void,
        // method 'setMousePosition'
        void,
        QPointF
    >,
    nullptr
} };

void ColorPickerPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPickerPreview *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->previewSizeChanged(); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->mousePositionChanged(); break;
        case 3: _t->setMousePosition((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorPickerPreview::*)();
            if (_t _q_method = &ColorPickerPreview::previewSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorPickerPreview::*)();
            if (_t _q_method = &ColorPickerPreview::sizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorPickerPreview::*)();
            if (_t _q_method = &ColorPickerPreview::mousePositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorPickerPreview *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->previewSize(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->mousePosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorPickerPreview *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPreviewSize(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSize(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setMousePosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ColorPickerPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPickerPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSColorPickerPreviewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int ColorPickerPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ColorPickerPreview::previewSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorPickerPreview::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorPickerPreview::mousePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
