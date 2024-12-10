import QtQuick 2  // Nhập thư viện QtQuick phiên bản 2.15

    Rectangle {
        width: 500  // Đặt chiều rộng của Rectangle là 500
        height: 500  // Đặt chiều cao của Rectangle là 500
        color: "Blue"  // Đặt màu của Rectangle là màu xanh
        x: 100  // Đặt vị trí theo trục X của Rectangle là 100

        Text {
            anchors.centerIn: parent  // Đặt Text ở giữa Rectangle (cha của nó)
            text: "Press"  // Văn bản hiển thị là "Press"
            font.pixelSize: 48  // Đặt kích thước chữ là 48px
            color: mousearea.pressed ? "green" : "black"  // Nếu MouseArea được nhấn, màu chữ sẽ là xanh, nếu không là đen
        }

        MouseArea {
            id: mousearea  // Đặt ID cho MouseArea là "mousearea"
            anchors.fill: parent  // MouseArea sẽ phủ đầy Rectangle
            onClicked: {
                // Thực hiện hành động khi MouseArea được nhấn (có thể thêm mã xử lý tại đây nếu cần)
            }
            acceptedButtons: Qt.RightButton//Chỉ ấn được chuột Phải
        }
    }

