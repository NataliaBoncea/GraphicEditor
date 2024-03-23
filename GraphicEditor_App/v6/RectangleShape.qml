import QtQuick
import QtQuick3D

Node {
    id: rectangleShape

    Model {
        id: rectangleModel
        objectName: "Rectangle"
        source: "#Rectangle"
        pickable: true
        property bool isPicked: false
        property color culoare: "#41cd52"
        property double scalar: 1.0
        property int posX: 0
        property int posY: 0
        property int posZ: 0

        x: posX
        y: posY
        z: posZ

        scale.x : 1 * rectangleModel.scalar
        scale.y : 1 * rectangleModel.scalar
        scale.z : 1 * rectangleModel.scalar

        materials: DefaultMaterial {
            diffuseColor: rectangleModel.culoare
            //! [picked color]
            specularAmount: 0.25
            specularRoughness: 0.2
        }


        //! [picked animation]
        SequentialAnimation on eulerRotation {
            running: rectangleModel.isPicked
            //! [picked animation]
            loops: Animation.Infinite
            PropertyAnimation {
                duration: 2500
                from: Qt.vector3d(0, 0, 0)
                to: Qt.vector3d(360, 360, 360)
            }
        }
    }
}
