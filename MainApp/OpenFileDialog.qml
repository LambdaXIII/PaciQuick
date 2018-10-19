import QtQuick 2.0
import QtQuick.Dialogs 1.2

FileDialog {
    title: qsTr("打开文件")
    //    modality: Qt.ApplicationModal
    nameFilters: [qsTr("啪词项目文件(*.paci)"), qsTr("所有文件(*)")]
    selectExisting: true
    selectFolder: false
    selectMultiple: false
}
