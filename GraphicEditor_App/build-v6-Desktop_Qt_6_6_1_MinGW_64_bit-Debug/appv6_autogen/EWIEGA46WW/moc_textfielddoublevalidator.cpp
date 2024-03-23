/****************************************************************************
** Meta object code from reading C++ file 'textfielddoublevalidator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../v6/textfielddoublevalidator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textfielddoublevalidator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS = QtMocHelpers::stringData(
    "TextFieldDoubleValidator",
    "QML.Element",
    "auto"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[25];
    char stringdata1[12];
    char stringdata2[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS_t qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "TextFieldDoubleValidator"
        QT_MOC_LITERAL(25, 11),  // "QML.Element"
        QT_MOC_LITERAL(37, 4)   // "auto"
    },
    "TextFieldDoubleValidator",
    "QML.Element",
    "auto"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTextFieldDoubleValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject TextFieldDoubleValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleValidator::staticMetaObject>(),
    qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTextFieldDoubleValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        TextFieldDoubleValidator
    >,
    nullptr
} };

void TextFieldDoubleValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TextFieldDoubleValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextFieldDoubleValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTextFieldDoubleValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDoubleValidator::qt_metacast(_clname);
}

int TextFieldDoubleValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleValidator::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
