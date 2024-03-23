import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

import Qt.labs.platform
import QtCore

import QtQuick3D
import QtQuick3D.Helpers
import QtQuick3D.AssetUtils

ApplicationWindow {
    id: windowRoot
    visible: true
    width: 1280
    height: 720

    property url importUrl;
    property int slidevisibile : 1;

    title: qsTr("Editor Grafic")
    //color: "#121212"

    //! [camera control]
    // Controlul camerei - se poate alege între rotirea camerei și miscarea camerei prin scena
    OrbitCameraController {
        id: orbitController
        origin: orbitCameraNode
        camera: orbitCamera
        enabled: helper.orbitControllerEnabled
    }
    WasdController {
        id: wasdController
        controlledObject: wasdCamera
        enabled: !helper.orbitControllerEnabled

    }
    //! [camera control]

    // Secțiunea cu etichete pentru afișarea informațiilor despre obiectele pickate
    Row {
        anchors.left: mainButtons.right
        anchors.top: topbar.bottom
        anchors.leftMargin: 8
        spacing: 10
        Column {
            Label {
                color: "white"
                font.pointSize: 14
                text: "Last Pick:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "Screen Position:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "UV Position:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "Distance:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "World Position:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "Local Position:"
            }

            Label {
                color: "white"
                font.pointSize: 14
                text: "World Normal:"
            }
            Label {
                color: "white"
                font.pointSize: 14
                text: "Local Normal:"
            }
        }
        Column {
            Label {
                id: pickName
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: pickPosition
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: uvPosition
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: distance
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: scenePosition
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: localPosition
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: worldNormal
                color: "white"
                font.pointSize: 14
            }
            Label {
                id: localNormal
                color: "white"
                font.pointSize: 14
            }

        }
    }

    //! [base scene]
    // Scena 3D principală
    View3D {
        id: view3D
        anchors.fill: parent
        renderMode: View3D.Underlay
        environment: SceneEnvironment {
            // Setări pentru mediu, cum ar fi grid-ul și lumina
            id: env
            backgroundMode: SceneEnvironment.SkyBox
            lightProbe: Texture {
                textureData: ProceduralSkyTextureData{}
            }
            InfiniteGrid {
                visible: helper.gridEnabled
                gridInterval: helper.gridInterval
            }
        }
        Node{
            id : lastclicked
            property var lastclicked : null
        }
        camera: helper.orbitControllerEnabled ? orbitCamera : wasdCamera

        DirectionalLight {
            eulerRotation.x: -35
            eulerRotation.y: -90

            castsShadow: true
        }

        Node {
            id: orbitCameraNode
            PerspectiveCamera {
                id: orbitCamera
                position: Qt.vector3d(0, 0, 50)
            }
        }

        PerspectiveCamera {
            // Logica pentru ajustarea near/far în funcție de distanța camerei
            id: wasdCamera
            onPositionChanged: {
                // Near/far logic copied from OrbitController
                let distance = position.length()
                if (distance < 1) {
                    clipNear = 0.01
                    clipFar = 100
                } else if (distance < 100) {
                    clipNear = 0.1
                    clipFar = 1000
                } else {
                    clipNear = 1
                    clipFar = 10000
                }
            }
        }

    //! [base scene]
    // Funcții pentru resetarea vederii și gestionarea controlerului camerei
        function resetView() {
            if (importNode.status === RuntimeLoader.Success) {
                helper.resetController()
            }
        }

        QtObject {
            id: helper
            property real boundsDiameter: 0
            property vector3d boundsCenter
            property vector3d boundsSize
            property bool orbitControllerEnabled: true
            property bool gridEnabled: gridButton.checked
            property real cameraDistance: orbitControllerEnabled ? orbitCamera.z : wasdCamera.position.length()
            property real gridInterval: Math.pow(10, Math.round(Math.log10(cameraDistance)) - 1)

            function updateBounds(bounds) {
                boundsSize = Qt.vector3d((bounds.maximum.x - bounds.minimum.x) * 12.5,
                                         (bounds.maximum.y - bounds.minimum.y) * 12.5,
                                         (bounds.maximum.z - bounds.minimum.z) * 12.5)
                boundsDiameter = (Math.max(boundsSize.x, boundsSize.y, boundsSize.z)) * 12.5
                boundsCenter = Qt.vector3d((bounds.maximum.x + bounds.minimum.x) * 6.25,
                                           (bounds.maximum.y + bounds.minimum.y) * 6.25,
                                           (bounds.maximum.z + bounds.minimum.z) * 6.25)

                wasdController.speed = boundsDiameter / 1000.0 * 12.5
                wasdController.shiftSpeed = 3 * wasdController.speed
                wasdCamera.clipNear = boundsDiameter / 100 * 12.5
                wasdCamera.clipFar = boundsDiameter * 10 * 12.5
                view3D.resetView()
            }

            function resetController() {
                orbitCameraNode.eulerRotation = Qt.vector3d(0, 0, 0)
                orbitCameraNode.position = boundsCenter
                orbitCamera.position = Qt.vector3d(0, 0, 2 * helper.boundsDiameter)
                orbitCamera.eulerRotation = Qt.vector3d(0, 0, 0)
                orbitControllerEnabled = true
            }

            function switchController(useOrbitController) {
                if (useOrbitController) {
                    let wasdOffset = wasdCamera.position.minus(boundsCenter)
                    let wasdDistance = wasdOffset.length()
                    let wasdDistanceInPlane = Qt.vector3d(wasdOffset.x, 0, wasdOffset.z).length()
                    let yAngle = Math.atan2(wasdOffset.x, wasdOffset.z) * 180 / Math.PI
                    let xAngle = -Math.atan2(wasdOffset.y, wasdDistanceInPlane) * 180 / Math.PI

                    orbitCameraNode.position = boundsCenter
                    orbitCameraNode.eulerRotation = Qt.vector3d(xAngle, yAngle, 0)
                    orbitCamera.position = Qt.vector3d(0, 0, wasdDistance)

                    orbitCamera.eulerRotation = Qt.vector3d(0, 0, 0)
                } else {
                    wasdCamera.position = orbitCamera.scenePosition
                    wasdCamera.rotation = orbitCamera.sceneRotation
                    wasdController.focus = true
                }
                orbitControllerEnabled = useOrbitController
            }
        }

        //! [runtimeloader]
        // Componenta pentru încărcarea de modele 3D în scenă
        RuntimeLoader {
            id: importNode
            source: windowRoot.importUrl
            scale : Qt.vector3d(12.5, 12.5, 12.5)
            onBoundsChanged: helper.updateBounds(bounds)
        }
        //! [runtimeloader]



        //! [spawner node]
        // Nod pentru gestionarea adăugării și ștergerii formelor în scenă
        Node {
            id: shapeSpawner
            property real range: 300
            property var instances: []
            property int count
        //! [spawner node]

            //! [adding]
            // Funcție pentru adăugarea de forme în scenă
            function addShape(shape)
            {
                var shapeComponent = Qt.createComponent(shape);
                let instance = shapeComponent.createObject(shapeSpawner,
                    { "x": 0, "y": 0, "z": 0, "scale": Qt.vector3d(0.25, 0.25, 0.25)});
                instances.push(instance);
                count = instances.length
            }
            //! [adding]

            //! [removing]
            // Funcție pentru ștergerea ultimei forme adăugate
            function removeShape()
            {
                if (instances.length > 0) {
                    let instance = instances.pop();
                    instance.destroy();
                    count = instances.length
                }
            }
            //! [removing]
        }
        // Zonă de mouse pentru detectarea clicurilor și pick-urilor în scenă
        MouseArea {
            anchors.fill: view3D
            //! [mouse area]

            onClicked: (mouse) => {
                // Get screen coordinates of the click
                pickPosition.text = "(" + mouse.x + ", " + mouse.y + ")"
                //! [pick result]
                var result = view3D.pick(mouse.x, mouse.y);
                //! [pick result]
                //! [pick specifics]
                if (result.objectHit) {
                    var pickedObject = result.objectHit;
                    // Toggle the isPicked property for the model
                    pickedObject.isPicked = !pickedObject.isPicked;
                    colorTool.primary = pickedObject.culoare;
                    objN.text = pickedObject.objectName;
                    coord_x.text = pickedObject.posX;
                    coord_y.text = pickedObject.posY;
                    coord_z.text = pickedObject.posZ;
                    scale_val.text = pickedObject.scalar.toFixed(2);
                    pickName.text = pickedObject.objectName;
                    // Get other pick specifics
                    uvPosition.text = "("
                            + result.uvPosition.x.toFixed(2) + ", "
                            + result.uvPosition.y.toFixed(2) + ")";
                    distance.text = result.distance.toFixed(2);
                    scenePosition.text = "("
                            + result.scenePosition.x.toFixed(2) + ", "
                            + result.scenePosition.y.toFixed(2) + ", "
                            + result.scenePosition.z.toFixed(2) + ")";
                    localPosition.text = "("
                            + result.position.x.toFixed(2) + ", "
                            + result.position.y.toFixed(2) + ", "
                            + result.position.z.toFixed(2) + ")";
                    worldNormal.text = "("
                            + result.sceneNormal.x.toFixed(2) + ", "
                            + result.sceneNormal.y.toFixed(2) + ", "
                            + result.sceneNormal.z.toFixed(2) + ")";
                    localNormal.text = "("
                            + result.normal.x.toFixed(2) + ", "
                            + result.normal.y.toFixed(2) + ", "
                            + result.normal.z.toFixed(2) + ")";
                    //! [pick specifics]
                    lastclicked.lastclicked = pickedObject
                    windowRoot.slidevisibile = 4
                    } else {
                    pickName.text = "None";
                    objN.text = "None";
                    objN.text = pickedObject.objectName;
                    coord_x.text = "";
                    coord_y.text = "";
                    coord_z.text = "";
                    scale_val.text = "";
                    uvPosition.text = "";
                    distance.text = "";
                    scenePosition.text = "";
                    localPosition.text = "";
                    worldNormal.text = "";
                    localNormal.text = "";
                    lastclicked.lastclicked = null
                    windowRoot.slidevisibile = 1
                    }

            }
        }
    }

    //bara de sus de optiuni de la butoanele principale
    Rectangle {
        id: topbar

        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
        }
        height: 50

        color: "#1F1F1F"

        Rectangle {
            id: filler

            color: "#1F1F1F"

            anchors {
                top: parent.bottom
                bottom: parent.top
                left: parent.left
            }

            width: 60
        }

        Rectangle {
            id: graphic2dLayout
            visible: (btn2.isChecked) ? true : false
            anchors {
                top: parent.top
                left: filler.right
                bottom: parent.bottom
            }

            CustomButton {
                id: sh21

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_01.svg"
                backgroundDefaultImage: "assets/images/2DDefault_01.svg"

                onClicked: shapeSpawner.addShape("RectangleShape.qml")

                anchors.left: filler.right
                //anchors.topMargin: 2
            }


            CustomButton {
                id: sh22

                width: 60
                height: 50


                backgroundPressedImage: "assets/images/2DPressed_02.svg"
                backgroundDefaultImage: "assets/images/2DDefault_02.svg"

                anchors.left: sh21.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh23

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_03.svg"
                backgroundDefaultImage: "assets/images/2DDefault_03.svg"

                anchors.left: sh22.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh24

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_04.svg"
                backgroundDefaultImage: "assets/images/2DDefault_04.svg"

                anchors.left: sh23.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh25

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_05.svg"
                backgroundDefaultImage: "assets/images/2DDefault_05.svg"

                anchors.left: sh24.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh26

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_06.svg"
                backgroundDefaultImage: "assets/images/2DDefault_06.svg"

                anchors.left: sh25.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh27

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/2DPressed_07.svg"
                backgroundDefaultImage: "assets/images/2DDefault_07.svg"

                anchors.left: sh26.right
                //anchors.topMargin: 2
            }
        }

        Rectangle {
            id: graphic3dLayout
            visible: (btn3.isChecked) ? true : false
            anchors {
                top: parent.top
                left: filler.right
                bottom: parent.bottom
            }

            CustomButton {
                id: sh31

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/3DPressed-01.svg"
                backgroundDefaultImage: "assets/images/3DDefault-01.svg"

                onClicked: shapeSpawner.addShape("ConeShape.qml")

                anchors.left: filler.right
                //anchors.topMargin: 2
            }


            CustomButton {
                id: sh32

                width: 60
                height: 50


                backgroundPressedImage: "assets/images/3DPressed-02.svg"
                backgroundDefaultImage: "assets/images/3DDefault-02.svg"

                onClicked: shapeSpawner.addShape("CylinderShape.qml")

                anchors.left: sh31.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh33

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/3DPressed-03.svg"
                backgroundDefaultImage: "assets/images/3DDefault-03.svg"

                onClicked: shapeSpawner.addShape("SphereShape.qml")

                anchors.left: sh32.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh34

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/3DPressed-04.svg"
                backgroundDefaultImage: "assets/images/3DDefault-04.svg"

                onClicked: shapeSpawner.addShape("SphereShape.qml")

                anchors.left: sh33.right
                //anchors.topMargin: 2
            }

            CustomButton {
                id: sh35

                width: 60
                height: 50

                backgroundPressedImage: "assets/images/3DPressed-05.svg"
                backgroundDefaultImage: "assets/images/3DDefault-05.svg"

                onClicked: shapeSpawner.addShape("CubeShape.qml")

                anchors.left: sh34.right
                //anchors.topMargin: 2
            }
        }

        RoundButton {
            id: controllerButton
            onClicked: helper.switchController(!helper.orbitControllerEnabled)
            focusPolicy: Qt.NoFocus
            text: helper.orbitControllerEnabled ? "Orbit" : "WASD"
            font.pixelSize: 12
            font.family: "Arial"

            anchors{
                left: parent.left
                verticalCenter: parent.verticalCenter
                leftMargin: 600
            }
        }
        RowLayout {
            id: materialOverride
            anchors{
                left: controllerButton.right
                verticalCenter: parent.verticalCenter
                leftMargin: 30
            }
            Label {
                text: "Material Override"
                font.pixelSize: 12
                font.family: "Arial"
                color: "white"
            }
            //optiuni de procesare de imagini a obiectelor incarcate in scena
            ComboBox {
                id: materialOverrideComboBox
                textRole: "text"
                valueRole: "value"
                implicitContentWidthPolicy: ComboBox.WidestText
                onActivated: env.debugSettings.materialOverride = currentValue

                Component.onCompleted: materialOverrideComboBox.currentIndex = materialOverrideComboBox.indexOfValue(env.debugSettings.materialOverride)

                model: [
                    { value: DebugSettings.None, text: "None"},
                    { value: DebugSettings.BaseColor, text: "Base Color"},
                    { value: DebugSettings.Roughness, text: "Roughness"},
                    { value: DebugSettings.Metalness, text: "Metalness"},
                    { value: DebugSettings.Diffuse, text: "Diffuse"},
                    { value: DebugSettings.Specular, text: "Specular"},
                    { value: DebugSettings.ShadowOcclusion, text: "Shadow Occlusion"},
                    { value: DebugSettings.Emission, text: "Emission"},
                    { value: DebugSettings.AmbientOcclusion, text: "Ambient Occlusion"},
                    { value: DebugSettings.Normals, text: "Normals"},
                    { value: DebugSettings.Tangents, text: "Tangents"},
                    { value: DebugSettings.Binormals, text: "Binormals"},
                    { value: DebugSettings.F0, text: "F0"}
                ]
            }
        }
        CheckBox {
            //activare vizualizare wireframe
            Label{
                text: "Wireframe"
                font.pixelSize: 12
                font.family: "Arial"
                color: "white"
                anchors{
                    left: parent.left
                    verticalCenter: parent.verticalCenter
                    leftMargin: 15
                }
            }

            anchors{
                left: materialOverride.right
                verticalCenter: parent.verticalCenter
                leftMargin: 30
            }

            checked: env.debugSettings.wireframeEnabled
            onCheckedChanged: {
                env.debugSettings.wireframeEnabled = checked
            }
        }

    }

    //crearea butoanelor principale din partea stanga
    Rectangle {
        id: mainButtons

        anchors {
            bottom: parent.bottom
            left: parent.left
            top: topbar.bottom
        }

        width: 60
        height: parent.height

        color: "#1F1F1F"
        //color: "transparent"

        CustomButton {
            id: btn1

            width: 60
            height: 60
            isChecked: false

            backgroundPressedImage: "assets/images/brushPressed.svg"
            backgroundDefaultImage: "assets/images/brushDefault.svg"

            anchors.top: parent.top
            onClicked: {
                if(!isChecked){
                    btn2.isChecked = false;
                    btn3.isChecked = false;
                    btn7.isChecked = false;
                }
                isChecked =! isChecked;
            }
        }


        CustomButton {
            id: btn2

            width: 60
            height: 60
            isChecked: false


            backgroundPressedImage: "assets/images/2dShapesPressed.svg"
            backgroundDefaultImage: "assets/images/2dShapesDefault.svg"

            anchors.top: btn1.bottom
            //anchors.topMargin: 2
            onClicked: {
                if(!isChecked){
                    btn1.isChecked = false;
                    btn3.isChecked = false;
                    btn7.isChecked = false;
                }
                isChecked =! isChecked;
            }
        }

        CustomButton {
            id: btn3

            width: 60
            height: 60
            isChecked: false

            backgroundPressedImage: "assets/images/3dShapesPressed.svg"
            backgroundDefaultImage: "assets/images/3dShapesDefault.svg"

            anchors.top: btn2.bottom
            //anchors.topMargin: 2
            onClicked: {
                if(!isChecked){
                    btn1.isChecked = false;
                    btn2.isChecked = false;
                    btn7.isChecked = false;
                }
                isChecked =! isChecked;
            }
        }

        CustomButton {
            id: btn6

            width: 60
            height: 60
            isChecked: (fileDialog.visible) ? true : false

            backgroundPressedImage: "assets/images/UploadPressed.svg"
            backgroundDefaultImage: "assets/images/UploadDefault.svg"

            anchors.bottom: parent.bottom
            //anchors.topMargin: 2
            onClicked: {
                if(!isChecked){
                    btn1.isChecked = false;
                    btn2.isChecked = false;
                    btn3.isChecked = false;
                    btn7.isChecked = false;
                }
                //isChecked =! isChecked;
                fileDialog.open()
            }

            Connections {
                    target: fileDialog
                    onAccepted: {
                        // Verificăm dacă utilizatorul a ales un fișier sau a închis doar fereastra
                        if (fileDialog.file === "") {
                            btn6.isChecked = false;
                        }
                    }
                }
        }

        CustomButton {
            id: btn7

            width: 60
            height: 60
            isChecked: false

            backgroundPressedImage: "assets/images/SaveAsPressed.svg"
            backgroundDefaultImage: "assets/images/SaveAsDefault.svg"

            anchors.bottom: btn6.top
            //anchors.topMargin: 2
            onClicked: {
                if(!isChecked){
                    btn1.isChecked = false;
                    btn2.isChecked = false;
                    btn3.isChecked = false;
                }
                isChecked =! isChecked;
            }
        }

        //butonul de alegere de culoare
        ColorTool {
          id: colorTool
          width: 50
          height: 50
          anchors{
            bottom: btn7.top
            left: parent.left
            right:parent.right
          }

          anchors.leftMargin: 5
          anchors.rightMargin: 5
          anchors.bottomMargin: 20

          primary: "purple"
          secondary: "orange"

          //        onPrimaryClicked: console.log("ColorTool Primary Clicked", primary)
          //        onSecondaryClicked: console.log("ColorTool Secondary Clicked", secondary)
          onCurrentColorChanged: colorDialog.color = currentColor
          onPrimaryDoubleClicked: colorDialog.open()
          onSecondaryDoubleClicked: colorDialog.open()
        }
    }

    //bara de proprietati
    Rectangle {
        id: properties

        anchors {
            top: topbar.bottom
            right: parent.right
            bottom: parent.bottom
        }

        width: 270

        color: "#1F1F1F"

        Rectangle {
            id: propertiesBar

            anchors {
                bottom: topbar.bottom
                left: parent.left
                leftMargin: 3
            }


            width: 70
            height: 25
            radius: 8

            color: "#535353"

            Text{
                text: "Properties"
                font.pixelSize: 12
                font.family: "Arial"
                color: "white"
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
            }

        }

        Rectangle {
            anchors {
                bottom: propertiesBar.bottom
                left: parent.left
                leftMargin: 3
            }

            width: 70
            height: 5

            color: "#535353"
        }

        Rectangle{
            color: "#535353"
            anchors{
                top: propertiesBar.bottom
                bottom: properties.bottom
                left: propertiesBackground.left
                right: propertiesBackground.right
            }

        }

        ColumnLayout {
            id:propertiesBackground

            //Layout.maximumHeight: 300
            //height:300

            anchors {
                top: propertiesBar.bottom
                left: parent.left
                bottom: parent.bottom
                right: parent.right
                leftMargin: 3
                bottomMargin: 300
            }
            //Layout.fillHeight: false
            //color: "#535353"



            Rectangle{
                id:typeObj
                property string objName: "None"
                anchors {
                    top: parent.top
                    left: parent.left
                    right: parent.right
                    //leftMargin: 5
                    //topMargin:8
                }
                height: 34

                color: "#535353"
                border.color: "#606060"
                border.width: 2

                Text{
                    id:objN
                    text: objName
                    font.family: "Helvetica"
                    font.pixelSize: 14
                    font.bold: true
                    leftPadding: 10
                    topPadding: 8
                    color: "#C3C3C3"
                }
            }

            //translatie obiect
            Rectangle{
                id:translate

                height:20

                Text{
                    text: "Translate"
                    font.family: "Arial"
                    font.pixelSize: 13
                    leftPadding: 10
                    topPadding: 5
                    color: "white"
                }
            }

            RowLayout{
                Text{
                    text: "X: "
                    color: "white"
                    font.family: "Arial"
                    font.pixelSize: 14
                    leftPadding: 30
                    topPadding: 5
                }
                TextField{
                    id:coord_x
                    color:"white"
                    background: Rectangle {
                        radius: 2
                        implicitWidth: 70
                        implicitHeight: 24
                        border.color: "gray"
                        border.width: 1
                        color:"#333"
                    }


                    //text: lastclicked.lastclicked.posX
                    onAccepted: lastclicked.lastclicked.posX = text
                }
            }

            RowLayout{
                Text{
                    text: "Y: "
                    color: "white"
                    font.family: "Arial"
                    font.pixelSize: 14
                    leftPadding: 30
                    topPadding: 5
                }
                TextField{
                    id:coord_y
                    color:"white"
                    background: Rectangle {
                        radius: 2
                        implicitWidth: 70
                        implicitHeight: 24
                        border.color: "gray"
                        border.width: 1
                        color:"#333"
                    }
                    onAccepted: lastclicked.lastclicked.posY = text
                }
            }

            RowLayout{
                Text{
                    text: "Z: "
                    color: "white"
                    font.family: "Arial"
                    font.pixelSize: 14
                    leftPadding: 30
                    topPadding: 5
                }
                TextField{
                    id:coord_z
                    color:"white"
                    background: Rectangle {
                        radius: 2
                        implicitWidth: 70
                        implicitHeight: 24
                        border.color: "gray"
                        border.width: 1
                        color:"#333"
                    }
                    onAccepted: lastclicked.lastclicked.posZ = text
                }
            }

            //scalare obiect
            Rectangle{
                id: scale

                height:20

                Text{
                    text: "Scale"
                    font.family: "Arial"
                    font.pixelSize: 13
                    leftPadding: 10
                    topPadding: 25
                    bottomPadding: 5
                    color: "white"
                }
            }


            RowLayout{
                anchors.horizontalCenter: parent.horizontalCenter
                anchors{
                    top: scale.bottom
                    topMargin: 25
                }

                RoundButton {
                    id: incScale
                    onClicked: {
                        lastclicked.lastclicked.scalar += 0.1
                        scale_val.text = lastclicked.lastclicked.scalar.toFixed(2);
                    }
                    focusPolicy: Qt.NoFocus
                    text: "+"
                    font.pixelSize: 15
                    font.family: "Arial"

                }
                TextField{
                    id:scale_val
                    color:"white"
                    background: Rectangle {
                        radius: 2
                        implicitWidth: 70
                        implicitHeight: 24
                        border.color: "gray"
                        border.width: 1
                        color:"#333"
                    }


                    //text: lastclicked.lastclicked.scalar.toFixed(2)
                    onAccepted: lastclicked.lastclicked.scalar = text
                }
                RoundButton {
                    id: decScale
                    onClicked: {
                        lastclicked.lastclicked.scalar -= 0.1
                        scale_val.text = lastclicked.lastclicked.scalar.toFixed(2);
                    }
                    focusPolicy: Qt.NoFocus
                    text: "-"
                    font.pixelSize: 15
                    font.family: "Arial"
                }
            }

            //butoane de reflexie
            RowLayout{
                anchors.horizontalCenter: parent.horizontalCenter

                Button {
                    id: reflectX
                    onClicked: lastclicked.lastclicked.scale.x = -1 * lastclicked.lastclicked.scale.x
                    //focusPolicy: Qt.NoFocus

                    width: 15
                    height: 20
                    hoverEnabled: false
                    contentItem: Text{
                        text: "Reflect X"
                        font.pixelSize: 12
                        font.family: "Arial"
                        color: "white"
                    }
                    background: Rectangle{
                        color: "#333"
                        radius: 4
                        border.color: "gray"
                        border.width: 2

                        opacity:    if (buttonMouseAreaX.containsMouse) {
                                          return 0.5;
                                      } else {
                                          return 1.0
                                      }
                        MouseArea {
                            id:buttonMouseAreaX
                            anchors.fill: parent
                            hoverEnabled: true
                        }

                    }
                }

                Button {
                    id: reflectY
                    onClicked: lastclicked.lastclicked.scale.y = -1 * lastclicked.lastclicked.scale.y
                    //focusPolicy: Qt.NoFocus

                    width: 15
                    height: 20
                    hoverEnabled: false
                    contentItem: Text{
                        text: "Reflect Y"
                        font.pixelSize: 12
                        font.family: "Arial"
                        color: "white"

                    }
                    background: Rectangle{
                        color: "#333"
                        radius: 4
                        border.color: "gray"
                        border.width: 2

                        opacity:    if (buttonMouseAreaY.containsMouse) {
                                          return 0.5;
                                      } else {
                                          return 1.0
                                      }
                        MouseArea {
                            id:buttonMouseAreaY
                            anchors.fill: parent
                            hoverEnabled: true
                        }

                    }
                }

                Button {
                    id: reflectZ
                    onClicked: lastclicked.lastclicked.scale.z = -1 * lastclicked.lastclicked.scale.z
                    //focusPolicy: Qt.NoFocus

                    width: 15
                    height: 20
                    hoverEnabled: false
                    contentItem: Text{
                        text: "Reflect Z"
                        font.pixelSize: 12
                        font.family: "Arial"
                        color: "white"
                    }
                    background: Rectangle{
                        color: "#333"
                        radius: 4
                        border.color: "gray"
                        border.width: 2

                        opacity:    if (buttonMouseAreaZ.containsMouse) {
                                          return 0.5;
                                      } else {
                                          return 1.0
                                      }
                        MouseArea {
                            id:buttonMouseAreaZ
                            anchors.fill: parent
                            hoverEnabled: true
                        }

                    }
                }

            }


        }

        //butonul de delete
        Button {
            id: deleteObj
            onClicked: lastclicked.lastclicked.visible = false
            //focusPolicy: Qt.NoFocus

            anchors{
                right: parent.right
                bottom: parent.bottom
                rightMargin: 10
                bottomMargin: 10
            }
            width: 50
            height: 25

            hoverEnabled: false
            contentItem: Text{
                text: "Delete"
                font.pixelSize: 14
                font.family: "Arial"
                color: "black"
            }
            background: Rectangle{
                color: "white"
                radius: 4
                border.color: "#F1F1F1"
                border.width: 2
                width: 50
                height: 25

                opacity:    if (buttonMouseAreaDel.containsMouse) {
                                  return 0.5;
                              } else {
                                  return 1.0
                              }
                MouseArea {
                    id:buttonMouseAreaDel
                    anchors.fill: parent
                    hoverEnabled: true
                }

            }
        }
    }

    //fereastra de alegere a culorii
    ColorPickerDialog {
      id: colorDialog
      width: 450
      height: 700
      title: qsTr("Color Picker")
      onAccepted:
        if (colorTool.primaryFirstPlane) {
            colorTool.primary = color
            lastclicked.lastclicked.culoare = color
            lastclicked.lastclicked.culoare.a = color.a
            }
        else
            colorTool.secondary = color
    }

    //incarcam o imagine
    FileDialog {
        id: fileDialog
        nameFilters: ["glTF files (*.gltf *.glb)", "All files (*)"]
        onAccepted: importUrl = file
        Settings {
            id: fileDialogSettings
            category: "QtQuick3D.Examples.RuntimeLoader"
            property alias folder: fileDialog.folder
        }

    }


}

