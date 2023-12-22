import QtQuick
import QtQuick.Controls.Fusion

Window {
    width: 1500
    height: 1000
    visible: true
    title: qsTr("Hello World")
    color: "#121212"

    Rectangle {
        id: topbar

        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
        }
        height: 50

        color: "#1F1F1F"
    }

    Rectangle {
        id: mainButtons

        anchors {
            bottom: parent.bottom
            left: parent.left
            top: topbar.bottom
        }

        width: 60

        color: "#535353"
        //color: "transparent"

        CustomButton {
            id: btn1

            width: 60
            height: 60

            backgroundPressedImage: "assets/images/brushPressed.svg"
            backgroundDefaultImage: "assets/images/brushDefault.svg"

            anchors.top: parent.top
            //anchors.topMargin: 2
        }

        CustomButton {
            id: btn2

            width: 60
            height: 60

            backgroundPressedImage: "assets/images/2dShapesPressed.svg"
            backgroundDefaultImage: "assets/images/2dShapesDefault.svg"

            anchors.top: btn1.bottom
            //anchors.topMargin: 2
        }

        CustomButton {
            id: btn3

            width: 60
            height: 60

            backgroundPressedImage: "assets/images/3dShapesPressed.svg"
            backgroundDefaultImage: "assets/images/3dShapesDefault.svg"

            anchors.top: btn2.bottom
            //anchors.topMargin: 2
        }

        CustomButton {
            id: btn4

            width: 60
            height: 60

            backgroundPressedImage: "assets/images/GrayscalePressed.svg"
            backgroundDefaultImage: "assets/images/GrayscaleDefault.svg"

            anchors.top: btn3.bottom
            //anchors.topMargin: 2
        }

        CustomButton {
            id: btn5

            width: 60
            height: 60

            backgroundPressedImage: "assets/images/ColorBalancePressed.svg"
            backgroundDefaultImage: "assets/images/ColorBalanceDefault.svg"

            anchors.top: btn4.bottom
            //anchors.topMargin: 2
        }

        Rectangle {
            id: filler

            color: "#1F1F1F"

            anchors {
                top: btn5.bottom
                bottom: parent.bottom
            }

            width: 60
        }
    }

    Rectangle {
        id: properties

        anchors {
            top: topbar.bottom
            right: parent.right
            bottom: parent.bottom
        }

        width: 350

        color: "#1F1F1F"

        PropertiesWindow {
            id:window1
            anchors {
                top: parent.top
                bottom:parent.bottom
                right: parent.right
                left: parent.left
            }

        }


    }


    ColorPickerDialog {
      id: colorDialog
      width: 450
      height: 700
      title: qsTr("Color Picker")
      onAccepted: colorTool.primaryFirstPlane ? (colorTool.primary = color) : (colorTool.secondary = color)
    }


    Rectangle {
        id: canvasZone

        anchors {
            top: topbar.bottom
            left: mainButtons.right
            right: properties.left
            bottom: parent.bottom
        }

        color: "#535353"

        Canva {
            id: canva1

            canva_height: 640
            canva_width: 640

            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

}

