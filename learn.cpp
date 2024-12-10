#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
 vector<vector<int>> a= {
        {1, 2, 3, 4, 4},
        {5, 6, 7, 8, 5},
        {9, 10, 11, 12, 9}
    };
    cout<<a.size()<<endl;
    // Khởi tạo vector chứa các set<int>
    vector<set<int>> myset(a.size()); // Mỗi hàng trong a sẽ tương ứng với một set

    // Thêm từng phần tử của các vector vào set tương ứng
    int j = 0;
    for (const auto &i : a) {
        set<int>b(i.begin(),i.end());
        for(const auto &i:b){
            cout<<
        }
        
    }

    // In các set (tương ứng với các hàng)
    cout << "Các hàng duy nhất (không trùng lặp phần tử) trong ma trận:" << endl;
    for (const auto &row : myset) {
        for (const auto &element : row) {
            cout << element << " "; // In các phần tử trong set
        }
        cout << endl;
    }

    return 0;
}
