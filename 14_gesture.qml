import QtQuick 2
Flickable{
    id:flick
    width: 400;height: 400
    contentWidth: 10000
    contentHeight: 10000
    PinchArea{
        anchors.fill: parent
        pinch.target: image
        pinch.maximumScale: 1.0
        pinch.minimumScale: 0.1
        pinch.dragAxis: Pinch.XAndYAxis
    }

    Image{
        id:image
        width: parent.contentWidth
        height: parent.contentHeight
        source: "rocket.png"
    }
}
