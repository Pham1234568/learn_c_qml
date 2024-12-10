import QtQuick 2  // Nhập mô-đun QtQuick phiên bản 2

Rectangle {
    width: 500  // Đặt chiều rộng của hình chữ nhật là 500
    height: 500  // Đặt chiều cao của hình chữ nhật là 500

    Text {
        anchors.centerIn: parent  // Đặt văn bản ở giữa hình chữ nhật
        text: "press and hold"  // Nội dung văn bản là "press and hold"
        font.pixelSize: 48  // Đặt kích thước phông chữ là 48 pixel

        property bool press: true  // Khai báo thuộc tính `press` kiểu boolean, mặc định là `true`

        color: press ? "green" : "black"
        // Nếu `press` là `true`, màu văn bản sẽ là màu xanh lá (green), nếu `false`, sẽ là màu đen (black)

        MouseArea {
            anchors.fill: parent  // MouseArea sẽ bao phủ toàn bộ vùng của Text
            onPressAndHold: parent.press = !parent.press
            // Khi nhấn giữ, đổi trạng thái thuộc tính `press` của `Text` (sử dụng `parent` để tham chiếu)
        }
    }
}
