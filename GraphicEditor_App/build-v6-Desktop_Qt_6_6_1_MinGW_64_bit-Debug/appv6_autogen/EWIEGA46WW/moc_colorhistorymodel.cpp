/****************************************************************************
** Meta object code from reading C++ file 'colorhistorymodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../v6/colorhistorymodel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorhistorymodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSColorHistoryModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSColorHistoryModelENDCLASS = QtMocHelpers::stringData(
    "ColorHistoryModel",
    "QML.Element",
    "auto",
    "historySizeChanged",
    "",
    "at",
    "row",
    "append",
    "newColor",
    "clear",
    "removeAt",
    "historySize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSColorHistoryModelENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[19];
    char stringdata4[1];
    char stringdata5[3];
    char stringdata6[4];
    char stringdata7[7];
    char stringdata8[9];
    char stringdata9[6];
    char stringdata10[9];
    char stringdata11[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSColorHistoryModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSColorHistoryModelENDCLASS_t qt_meta_stringdata_CLASSColorHistoryModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "ColorHistoryModel"
        QT_MOC_LITERAL(18, 11),  // "QML.Element"
        QT_MOC_LITERAL(30, 4),  // "auto"
        QT_MOC_LITERAL(35, 18),  // "historySizeChanged"
        QT_MOC_LITERAL(54, 0),  // ""
        QT_MOC_LITERAL(55, 2),  // "at"
        QT_MOC_LITERAL(58, 3),  // "row"
        QT_MOC_LITERAL(62, 6),  // "append"
        QT_MOC_LITERAL(69, 8),  // "newColor"
        QT_MOC_LITERAL(78, 5),  // "clear"
        QT_MOC_LITERAL(84, 8),  // "removeAt"
        QT_MOC_LITERAL(93, 11)   // "historySize"
    },
    "ColorHistoryModel",
    "QML.Element",
    "auto",
    "historySizeChanged",
    "",
    "at",
    "row",
    "append",
    "newColor",
    "clear",
    "removeAt",
    "historySize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSColorHistoryModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       1,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   47,    4, 0x02,    3 /* Public */,
       7,    1,   50,    4, 0x02,    5 /* Public */,
       9,    0,   53,    4, 0x02,    7 /* Public */,
      10,    1,   54,    4, 0x02,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QColor, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorHistoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSColorHistoryModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSColorHistoryModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'historySize'
        int,
        // Q_OBJECT / Q_GADGET
        ColorHistoryModel,
        // method 'historySizeChanged'
        void,
        // method 'at'
        QColor,
        int,
        // method 'append'
        void,
        const QColor &,
        // method 'clear'
        void,
        // method 'removeAt'
        void,
        int
    >,
    nullptr
} };

void ColorHistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorHistoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->historySizeChanged(); break;
        case 1: { QColor _r = _t->at((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->append((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->removeAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorHistoryModel::*)();
            if (_t _q_method = &ColorHistoryModel::historySizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorHistoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->historySize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorHistoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHistorySize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ColorHistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorHistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSColorHistoryModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ColorHistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ColorHistoryModel::historySizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
