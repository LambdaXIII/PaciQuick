import QtQuick 2.9
import QtQuick.Window 2.2
import Paci.UI 1.0

PWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("啪词 - 字幕序列工具箱")

    windowRound: 5
    windowColor: "grey"

    message: UIBrain.statusMessage

    MouseArea {
        anchors.fill: parent
        onPressed: UIBrain.statusMessage = "Pressed"
        onExited: UIBrain.statusMessage = ""
    }
}
