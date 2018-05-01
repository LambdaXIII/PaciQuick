import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import Paci.UI 1.0

PWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("啪词 - 字幕序列工具箱")

    windowRound: 5
    windowColor: "grey"

    message: UIBrain.statusMessage

    PButton {
        anchors.centerIn: parent
        width: 200
        height: 100
        text: "GOGOGOGO"
        ToolTip.visible: hovered
        ToolTip.text: "This is a tooltip."
    }
}
