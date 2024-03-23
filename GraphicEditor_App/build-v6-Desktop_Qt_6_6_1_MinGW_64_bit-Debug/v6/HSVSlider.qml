// Importarea modulelor QtQuick, QtQuick.Controls și QtQuick.Layouts
import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

// Importarea modulului v6 (presupunând că este definit în altă parte)
import v6

// Definirea unui obiect de tip Item
Item {
  id: root

  // Proprietatea 'color' este o aliasare pentru 'internal.color'
  property alias color: internal.color

  // Semnal emis când editarea este finalizată
  signal editFinished

  // Dimensiuni implicite pentru Item bazate pe coloana Layout-ului
  implicitWidth: col.implicitWidth
  implicitHeight: col.implicitHeight

  // ColorSampler_p este o componentă (presupunând că este definită în altă parte)
  ColorSampler_p {
    id: internal
    readonly property real defaultHeight: 32 // Înălțimea implicită
  }

  // Linie neagră sub panoul de culoare pentru separare
  Rectangle {
    anchors.right: parent.right
    width: parent.width - (hueSlider.leftPadding + hueSlider.spacing)
    height: col.implicitHeight - 1
    color: "black"
  }

  // Coloana principală pentru aranjarea componentelor
  ColumnLayout {
    id: col
    anchors.fill: parent
    spacing: 1

    // Componentă ColorSlider pentru ajustarea nuanței (Hue)
    ColorSlider {
      id: hueSlider
      Layout.fillWidth: true
      Layout.preferredHeight: internal.defaultHeight
      text: "H:"  // Eticheta pentru componenta de nuanță
      value: internal.color.hsvHue  // Valoarea inițială bazată pe nuanța curentă
      // Fundalul pentru a afișa gradientul de culoare pentru nuanță
      sliderBackground: Rectangle {
        gradient: Gradient {
          orientation: Gradient.Horizontal
          // Definirea treptelor de culoare în funcție de poziția nuanței în spectru
          GradientStop {
            position: 0.0
            color: "red"
          }
          GradientStop {
            position: (60.0 / 360)
            color: "yellow"
          }
          GradientStop {
            position: (120.0 / 360)
            color: "green"
          }
          GradientStop {
            position: (180.0 / 360)
            color: "cyan"
          }
          GradientStop {
            position: (240.0 / 360)
            color: "blue"
          }
          GradientStop {
            position: (300.0 / 360)
            color: "magenta"
          }
          GradientStop {
            position: 1.0
            color: "red"
          }
        }
      }
      onEditFinished: root.editFinished()  // Semnalizarea că editarea a fost finalizată
      onValueChanged: internal.setHue(value)  // Actualizarea valorii nuanței în componenta internă
      KeyNavigation.down: saturationSlider  // Navigarea către următorul ColorSlider
    }

    // Componentă ColorSlider pentru ajustarea saturației (Saturation)
    ColorSlider {
      id: saturationSlider
      Layout.fillWidth: true
      Layout.preferredHeight: internal.defaultHeight
      text: "S:"  // Eticheta pentru componenta de saturație
      value: internal.color.hsvSaturation  // Valoarea inițială bazată pe saturația curentă
      // Fundalul pentru a afișa gradientul de culoare pentru saturație
      sliderBackground: Rectangle {
        gradient: Gradient {
          orientation: Gradient.Horizontal
          // Definirea treptelor de culoare în funcție de poziția nuanței și valorii
          GradientStop {
            position: 0.0
            color: Qt.hsva(internal.color.hsvHue, 0, internal.color.hsvValue)
          }
          GradientStop {
            position: 1.0
            color: internal.color
          }
        }
      }
      onEditFinished: root.editFinished()  // Semnalizarea că editarea a fost finalizată
      onValueChanged: internal.setSaturation(value)  // Actualizarea valorii saturației în componenta internă
      KeyNavigation.down: blueSlider  // Navigarea către următorul ColorSlider
    }

    // Componentă ColorSlider pentru ajustarea valorii (Value)
    ColorSlider {
      id: blueSlider
      Layout.fillWidth: true
      Layout.preferredHeight: internal.defaultHeight
      text: "V:"  // Eticheta pentru componenta de valoare
      value: internal.color.hsvValue  // Valoarea inițială bazată pe valoarea curentă
      // Fundalul pentru a afișa gradientul de culoare pentru valoare
      sliderBackground: Rectangle {
        gradient: Gradient {
          orientation: Gradient.Horizontal
          // Definirea treptelor de culoare în funcție de poziția nuanței și saturației
          GradientStop {
            position: 0.0
            color: Qt.hsva(internal.color.hsvHue, internal.color.hsvSaturation, 0)
          }
          GradientStop {
            position: 1.0
            color: internal.color
          }
        }
      }
      onEditFinished: root.editFinished()  // Semnalizarea că editarea a fost finalizată
      onValueChanged: internal.setValue(value)  // Actual
      KeyNavigation.down: alphaSlider
    }

    ColorSlider {
      id: alphaSlider
      Layout.fillWidth: true
      Layout.preferredHeight: internal.defaultHeight
      text: "A:"
      value: internal.color.a
      sliderBackground: Item {
        Image {
          anchors.fill: parent
          fillMode: Image.Tile
          horizontalAlignment: Image.AlignLeft
          verticalAlignment: Image.AlignTop
          source: "assets/alphaBackground.png"
        }

        Rectangle {
          anchors.fill: parent
          gradient: Gradient {
            orientation: Gradient.Horizontal
            GradientStop {
              position: 0.0
              color: Qt.hsva(internal.color.hsvHue, internal.color.hsvSaturation, internal.color.hsvValue, 0)
            }
            GradientStop {
              position: 1
              color: internal.color
            }
          }
        }
      }
      onEditFinished: root.editFinished()
      onValueChanged: internal.setAlpha(value)
      KeyNavigation.down: hueSlider
    }

    Item {
      Layout.fillHeight: implicitHeight > 0 ? false : true
    }
  }
}
