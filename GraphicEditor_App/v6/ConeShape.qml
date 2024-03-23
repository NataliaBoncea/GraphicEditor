import QtQuick
import QtQuick3D

//creeaza conuri
Node {
    id: coneShape

    Model {
        id: coneModel
        objectName: "Cone"
        source: "#Cone"
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

        scale.x : 1 * coneModel.scalar
        scale.y : 1 * coneModel.scalar
        scale.z : 1 * coneModel.scalar

        materials: DefaultMaterial {
            diffuseColor: coneModel.culoare
            specularAmount: 1
            specularRoughness: 0.1
        }

        SequentialAnimation on eulerRotation {
            running: coneModel.isPicked
            loops: Animation.Infinite
            PropertyAnimation {
                duration: 10000
                from: Qt.vector3d(0, 0, 0)
                to: Qt.vector3d(-360, 360, 0)
            }
        }
    }
}
