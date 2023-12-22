import QtQuick
import QtQuick.Controls

Button {
    id: control

    property string backgroundPressedImage
    property string backgroundDefaultImage

    checkable: true
    hoverEnabled: false

    background: Image {
        source: control.checked ? backgroundPressedImage : backgroundDefaultImage;
        mipmap: true
        opacity:    if (buttonMouseArea.containsMouse) {
                        return control.checked ? 1.0 : 0.7;
                    } else {
                        return 1.0
                    }

        MouseArea {
            id:buttonMouseArea
            anchors.fill: parent
            hoverEnabled: true
        }
    }
}
