// /v6/CustomButton.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _v6_CustomButton_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3d,0x0,0x0,0x0,0x1,0x6,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x68,0x8,0x0,0x0,0x61,0x34,0x64,0x37,
0x63,0x38,0x37,0x39,0x61,0x32,0x31,0x64,
0x62,0x30,0x62,0x64,0x31,0x61,0x66,0x66,
0x36,0x65,0x39,0x61,0x36,0x39,0x37,0x30,
0x36,0x30,0x30,0x62,0x62,0x32,0x65,0x61,
0x36,0x63,0x36,0x30,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x80,0x9d,0xf0,0x28,
0x56,0x2c,0x78,0x95,0xa9,0xe3,0x67,0xb4,
0xda,0x51,0xc,0x7e,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x70,0x2,0x0,0x0,
0x3,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x9,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x28,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x30,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb8,0x5,0x0,0x0,
0x38,0x1,0x0,0x0,0x90,0x1,0x0,0x0,
0x20,0x2,0x0,0x0,0x43,0x0,0x0,0x0,
0x50,0x1,0x0,0x0,0x53,0x0,0x0,0x0,
0x63,0x0,0x0,0x0,0x3,0x1,0x0,0x0,
0x60,0x1,0x0,0x0,0x43,0x0,0x0,0x0,
0x50,0x1,0x0,0x0,0x73,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x66,0x66,0x66,0x66,0x66,0x26,0x13,0x40,
0x44,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xe,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x3c,0x1,
0x50,0x4,0x2e,0x2,0x4c,0x2,0x2e,0x3,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x68,0x0,0x0,0x0,0x19,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x10,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x6,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x16,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x2e,0x4,0x3c,0x5,0x50,0xd,0x2e,0x6,
0x3c,0x7,0x50,0x4,0x10,0x1,0x4c,0x2,
0x4,0x0,0x2,0x10,0x1,0x2,0x16,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x39,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x18,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x8,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd0,0x2,0x0,0x0,0xd8,0x2,0x0,0x0,
0xf0,0x2,0x0,0x0,0x18,0x3,0x0,0x0,
0x30,0x3,0x0,0x0,0x48,0x3,0x0,0x0,
0x80,0x3,0x0,0x0,0xb8,0x3,0x0,0x0,
0xd0,0x3,0x0,0x0,0xf0,0x3,0x0,0x0,
0x0,0x4,0x0,0x0,0x18,0x4,0x0,0x0,
0x48,0x4,0x0,0x0,0x60,0x4,0x0,0x0,
0x78,0x4,0x0,0x0,0xb0,0x4,0x0,0x0,
0xc8,0x4,0x0,0x0,0xf0,0x4,0x0,0x0,
0x8,0x5,0x0,0x0,0x18,0x5,0x0,0x0,
0x48,0x5,0x0,0x0,0x68,0x5,0x0,0x0,
0x80,0x5,0x0,0x0,0xa0,0x5,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x43,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x73,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x42,0x0,0x75,0x0,
0x74,0x0,0x74,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x62,0x0,0x61,0x0,
0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,
0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,
0x50,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x65,0x0,0x64,0x0,0x49,0x0,
0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x62,0x0,0x61,0x0,
0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,
0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,
0x44,0x0,0x65,0x0,0x66,0x0,0x61,0x0,
0x75,0x0,0x6c,0x0,0x74,0x0,0x49,0x0,
0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x63,0x0,0x68,0x0,
0x65,0x0,0x63,0x0,0x6b,0x0,0x61,0x0,
0x62,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x68,0x0,0x6f,0x0,
0x76,0x0,0x65,0x0,0x72,0x0,0x45,0x0,
0x6e,0x0,0x61,0x0,0x62,0x0,0x6c,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x49,0x0,0x6d,0x0,
0x61,0x0,0x67,0x0,0x65,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x73,0x0,0x6f,0x0,
0x75,0x0,0x72,0x0,0x63,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x73,0x0,0x6f,0x0,0x75,0x0,
0x72,0x0,0x63,0x0,0x65,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x6d,0x0,0x69,0x0,
0x70,0x0,0x6d,0x0,0x61,0x0,0x70,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x6f,0x0,0x70,0x0,
0x61,0x0,0x63,0x0,0x69,0x0,0x74,0x0,
0x79,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x70,0x0,0x61,0x0,
0x63,0x0,0x69,0x0,0x74,0x0,0x79,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x41,0x0,
0x72,0x0,0x65,0x0,0x61,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x62,0x0,0x75,0x0,
0x74,0x0,0x74,0x0,0x6f,0x0,0x6e,0x0,
0x4d,0x0,0x6f,0x0,0x75,0x0,0x73,0x0,
0x65,0x0,0x41,0x0,0x72,0x0,0x65,0x0,
0x61,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x62,0x0,0x61,0x0,
0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,
0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x63,0x0,0x68,0x0,
0x65,0x0,0x63,0x0,0x6b,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x61,0x0,0x69,0x0,
0x6e,0x0,0x73,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x38,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x48,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0xb8,0x1,0x0,0x0,0x40,0x2,0x0,0x0,
0x3,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x4,0x0,0x10,0x0,
0x5,0x0,0x50,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x5,0x0,0x0,0x20,0x7,0x0,0x50,0x0,
0x6,0x0,0x0,0x0,0x5,0x0,0x0,0x20,
0x8,0x0,0x50,0x0,0x14,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd,0x0,0x50,0x0,
0xd,0x0,0x10,0x1,0x8,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x50,0x0,
0xb,0x0,0x30,0x1,0x7,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xa,0x0,0x50,0x0,
0xa,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0xd,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x90,0x0,
0x10,0x0,0x50,0x1,0xc,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf,0x0,0x90,0x0,
0xf,0x0,0x10,0x1,0xa,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x90,0x0,
0xe,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x16,0x0,0x90,0x0,
0x16,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x16,0x0,0x90,0x0,
0x17,0x0,0xd0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x19,0x0,0xd0,0x0,
0x19,0x0,0xb0,0x1,0x11,0x0,0x0,0x0,
0x0,0x0,0xa,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x0,0xd0,0x0,
0x18,0x0,0x50,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x18,0x0,0xd0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x0,0x50,0x1,
0x18,0x0,0xb0,0x1,0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 2, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for fill at line 24, column 13
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(8, &r2_0)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(8, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
// generate_Ret
return r2_0;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
