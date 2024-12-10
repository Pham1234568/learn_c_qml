#include<set>
#include<map>
#include<iostream>
#include<vector>

using namespace std;
// set.insert(value)
// set.size()
//set.count() trả về 0 và 1=set.find() trả về vị trí Tìm kiếm phần tử trong set
//set.erase(value)
//Order( lưu theo thứ tự từ bé đến lớn)
multiset<int> m;// Lưu các phần tử giống nhau, lưu theo thứ tự
int main(){
    set<int> t;
    t.insert({100,200,100,5,1,2,5});
    if(t.count(5)!=0)
    {
        cout<<"Find";
    }
    if (t.find(1)!=t.end())
    {   
        cout<<"Find"<<endl;
    }
    t.erase(t.find(1));
    for (auto& v : t) // auto kiểu dữ liệu cho tất cả
    {
        cout<<v<<",";
    }
    cout<<*t.begin()<<*t.rbegin();// in ra phần tử đầu;
    //cho mảng có n phần tử và số nguyên k, đối với mỗi dãy con liên tiếp có chiều dài là k
    
    
    return 0;

}