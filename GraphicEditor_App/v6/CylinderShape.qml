import QtQuick
import QtQuick3D

Node {
    id: cylinderShape

    Model {
        id: cylinderModel
        objectName: "Cylinder"
        source: "#Cylinder"
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

        scale.x : 1 * cylinderModel.scalar
        scale.y : 1 * cylinderModel.scalar
        scale.z : 1 * cylinderModel.scalar

        materials: DefaultMaterial {
            diffuseColor: cylinderModel.culoare
            //! [picked color]
            specularAmount: 0.25
            specularRoughness: 0.2
        }


        //! [picked animation]
        SequentialAnimation on eulerRotation {
            running: cylinderModel.isPicked
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
