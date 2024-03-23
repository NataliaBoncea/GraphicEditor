cmake_minimum_required(VERSION 3.16)

project(v6 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appv6
    main.cpp
)

qt_add_qml_module(appv6
    URI v6
    VERSION 1.0
    QML_FILES main.qml
    RESOURCES
        assets/images/brushDefault.svg
        assets/images/brushPressed.svg
        assets/images/2dShapesDefault.svg
        assets/images/2dShapesPressed.svg
        assets/images/3dShapesDefault.svg
        assets/images/3dShapesPressed.svg
        assets/images/GrayscaleDefault.svg
        assets/images/GrayscalePressed.svg
        assets/images/ColorBalanceDefault.svg
        assets/images/ColorBalancePressed.svg
        assets/swap.svg
        assets/eyedropper.svg
        assets/alphaBackground.png
SOURCES colorhistorymodel.cpp colorhistorymodel.h colorpicker_p.cpp colorpicker_p.h colorpickerpreview.cpp colorpickerpreview.h colorsampler_p.cpp colorsampler_p.h colorslider_p.cpp colorslider_p.h colortool_p.cpp colortool_p.h colorwheel.cpp colorwheel.h
QML_FILES Canva.qml ColorHistory.qml ColorPicker.qml ColorPickerDialog.qml ColorSampler.qml ColorSlider.qml ColorTool.qml CustomButton.qml HSVSlider.qml
RESOURCES ../build-v6-Desktop_Qt_6_6_1_MinGW_64_bit-Debug/v6/ColorTools/qmldir
SOURCES textfielddoublevalidator.cpp textfielddoublevalidator.h
QML_FILES RGBSlider.qml
RESOURCES qtquickcontrols2.conf
QML_FILES PropertiesWindow.qml
RESOURCES assets/images/SaveAsDefault.svg assets/images/SaveAsPressed.svg assets/images/UploadDefault.svg assets/images/UploadPressed.svg
          assets/images/2DDefault_01.svg
          assets/images/2DDefault_02.svg
          assets/images/2DDefault_03.svg
          assets/images/2DDefault_04.svg
          assets/images/2DDefault_05.svg
          assets/images/2DDefault_06.svg
          assets/images/2DDefault_07.svg
          assets/images/2DPressed_01.svg
          assets/images/2DPressed_02.svg
          assets/images/2DPressed_03.svg
          assets/images/2DPressed_04.svg
          assets/images/2DPressed_05.svg
          assets/images/2DPressed_06.svg
          assets/images/2DPressed_07.svg
          assets/images/3DDefault-01.svg
          assets/images/3DDefault-02.svg
          assets/images/3DDefault-03.svg
          assets/images/3DDefault-04.svg
          assets/images/3DDefault-05.svg
          assets/images/3DPressed-01.svg
          assets/images/3DPressed-02.svg
          assets/images/3DPressed-03.svg
          assets/images/3DPressed-04.svg
          assets/images/3DPressed-05.svg
QML_FILES ConeShape.qml
          CubeShape.qml
          SphereShape.qml
QML_FILES RectangleShape.qml
QML_FILES CylinderShape.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appv6 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appv6
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appv6
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS appv6
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
