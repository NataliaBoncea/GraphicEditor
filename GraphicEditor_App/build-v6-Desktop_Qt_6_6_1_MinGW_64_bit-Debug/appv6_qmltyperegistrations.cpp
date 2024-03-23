/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <colorhistorymodel.h>
#include <colorpicker_p.h>
#include <colorpickerpreview.h>
#include <colorsampler_p.h>
#include <colorslider_p.h>
#include <colortool_p.h>
#include <colorwheel.h>
#include <textfielddoublevalidator.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_v6()
{
    qmlRegisterTypesAndRevisions<ColorHistoryModel>("v6", 1);
    qmlRegisterAnonymousType<QAbstractItemModel, 254>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorPickerPreview>("v6", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorPicker_p>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorSampler_p>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorSlider_p>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorTool_p>("v6", 1);
    qmlRegisterTypesAndRevisions<ColorWheel>("v6", 1);
    QMetaType::fromType<QDoubleValidator *>().id();
    qmlRegisterTypesAndRevisions<TextFieldDoubleValidator>("v6", 1);
    qmlRegisterModule("v6", 1, 0);
}

static const QQmlModuleRegistration registration("v6", qml_register_types_v6);
