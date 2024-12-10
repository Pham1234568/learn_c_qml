#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include<set>
using namespace std;

int main() {
    int target = 10; // Mục tiêu tổng
    vector<int> a = {5, 4, 3, 6, 5, 1, 9}; // Dữ liệu đầu vào
    map<int, int> mymap; // Khai báo map
    for (int i : a) {
        // Kiểm tra nếu đã tìm thấy complement của số
        if (mymap.find(target - i) != mymap.end()) {
            cout << "Found pair: (" << i << ", " << target - i << ")" << endl;
            mymap[i]=target-i;
        } else {
            // Nếu không tìm thấy, lưu số này vào map
            mymap[i] = 0;
        }
    }
    tuple<int, string, double> person = make_tuple(25, "Alice", 70.5);
    set<int> once;
    for (int i:a)
    {
        once.insert(i);
    }
    for (int i:once)
    {
        cout<<i;
    }

    cout << "Age: " << get<0>(person) << endl;
    cout << "Name: " << get<1>(person) << endl;
    cout << "Weight: " << get<2>(person) << endl;
    // In nội dung của map sau khi lặp
    cout << "\nContents of map:\n";
    for (const auto &pair : mymap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
