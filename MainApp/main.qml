import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import Paci.Brain 1.0
import QtQuick.Dialogs 1.2

PWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("啪词 - 字幕序列工具箱")

    windowRound: 5
    windowColor: "grey"

    message: UIBrain.statusMessage

    Component.onCompleted: {
        UIBrain.statusMessage = qsTr("欢迎使用啪词，啪啪更健康～")
    }

    OpenFileDialog {
        id: openFileDialog
        onAccepted: UIBrain.statusMessage = fileUrl
    }

    PMessagePopup {
        id: dd
        message: UIBrain.statusMessage
    }

    PButton {
        anchors.centerIn: parent
        width: 200
        height: 100
        text: "GOGOGOGO"
        ToolTip.visible: hovered
        ToolTip.delay: 1000
        ToolTip.text: "This is a tooltip."
        onClicked: {
        }
    }
}
