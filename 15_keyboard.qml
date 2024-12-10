import QtQuick 2.15

Rectangle {
    width: 500  // Chiều rộng của Rectangle
    height: 500  // Chiều cao của Rectangle
    color: "lightgray"  // Màu nền mặc định

    focus: true  // Đặt focus để Rectangle nhận được sự kiện bàn phím

    // Văn bản hiển thị thông tin phím nhấn
    Text {
        id: keyText
        anchors.centerIn: parent
        text: "Press a key"  // Văn bản mặc định
        font.pixelSize: 32
        color: currentTextColor  // Liên kết với biến màu chữ động
    }

    // Biến màu chữ động
    property color currentTextColor: "black"  // Màu chữ mặc định là đen

    // Sử dụng Keys để bắt sự kiện bàn phím
    Keys.onPressed: function(event) {
        handleKeyPress(event)  // Gọi hàm xử lý phím với sự kiện event
    }

    // Định nghĩa hàm xử lý sự kiện phím
    function handleKeyPress(event) {
        keyText.text = "Key Pressed: " + event.key;  // Hiển thị mã phím trong Text

        // Đổi màu Rectangle và màu chữ dựa trên phím nhấn
        if (event.key === Qt.Key_Up) {
            color = "green";  // Mũi tên lên: màu nền xanh lá cây
            currentTextColor = "white";  // Màu chữ trắng
        } else if (event.key === Qt.Key_Down) {
            color = "red";  // Mũi tên xuống: màu nền đỏ
            currentTextColor = "yellow";  // Màu chữ vàng
        } else if (event.key === Qt.Key_Escape) {
            Qt.quit();  // Thoát ứng dụng nếu nhấn Esc
        } else {
            color = "lightgray";  // Màu nền mặc định
            currentTextColor = "black";  // Màu chữ mặc định
        }

        event.accept();  // Chấp nhận sự kiện để ngăn chặn lan truyền
    }

    // Văn bản hướng dẫn ở dưới cùng
    Text {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        text: "Use Up/Down to change color, Esc to quit"
        font.pixelSize: 16
        color: "darkblue"
    }
}
