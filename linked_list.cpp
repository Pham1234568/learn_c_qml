#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* makeNode(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void printList(node*);

void addNodeWithSinglePointer(node *head, int x) {
    node* newNode = makeNode(x);
    newNode->next = head; // Gắn newNode trỏ tới head hiện tại
    head = newNode;       // Cập nhật head (nhưng chỉ trong phạm vi hàm này)
    printList(head);
}

void printList(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = makeNode(10); // Tạo danh sách ban đầu: 10 -> NULL
    cout << "Danh sách ban đầu: ";
    printList(head);

    addNodeWithSinglePointer(head, 20); // Thêm node với single pointer
    cout << "Danh sách sau khi gọi addNodeWithSinglePointer: ";
    printList(head); // Head không thay đổi

    return 0;
}
