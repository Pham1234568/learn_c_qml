import QtQuick 2

Rectangle{
    border.color: "green"
    color: "white"
    clip:true
    smooth:true
    TextInput{
        anchors.fill:parent
        anchors.margins: 2
        text:"Enter text"
        color:forcus?"gray":"black"
        font.pixelSize: parent.height-4
    }
}
