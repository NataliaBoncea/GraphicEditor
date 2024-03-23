import QtQuick 2.15
import QtQuick.Controls.Fusion

Item {
    id: propertiesW

    Rectangle {
        id: windowTitle

        color: "#414141"
        Text {
            font.family: "Arial"
            color: "white"
            text: "Properties"
            font.pointSize: 9

            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }

        anchors {
            top: parent.top
            left: parent.left
        }

        radius: 1
        height: 25
        width: 80
    }

    Rectangle {
        id: window

        color: "#414141"
        anchors {
            top: windowTitle.bottom
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }

        Pane {
          height: parent.height
          width: 100

          background: Rectangle {
              color: parent.color
          }

          Column {
            width: parent.width
            spacing: 24

            ColorTool {
              id: colorTool
              width: 80
              height: 80

              primary: "purple"
              secondary: "orange"

              //        onPrimaryClicked: console.log("ColorTool Primary Clicked", primary)
              //        onSecondaryClicked: console.log("ColorTool Secondary Clicked", secondary)
              onCurrentColorChanged: colorDialog.color = currentColor
              onPrimaryDoubleClicked: colorDialog.open()
              onSecondaryDoubleClicked: colorDialog.open()
            }
          }
        }
    }


}
