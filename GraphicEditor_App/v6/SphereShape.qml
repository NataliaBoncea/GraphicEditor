import QtQuick
import QtQuick3D


//creeaza sfera
Node {
    id: sphereShape
    Model {
        id: sphereModel
        objectName: "Sphere"
        source: "#Sphere"
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

        scale.x : 1 * sphereModel.scalar
        scale.y : 1 * sphereModel.scalar
        scale.z : 1 * sphereModel.scalar

        materials: DefaultMaterial {
            diffuseColor: sphereModel.culoare
            specularAmount: 0.25
            specularRoughness: 0.2
        }

        SequentialAnimation on eulerRotation.x {
            running: sphereModel.isPicked
            loops: Animation.Infinite
            PropertyAnimation {
                duration: 5000
                from: 0
                to: 360
            }
        }
    }
}
