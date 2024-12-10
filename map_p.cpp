#include<map>
#include <iostream>
using namespace std;
//map.count() map hỗ trợ tìm kiếm key
//map.erase()

multimap<int,int>mp; //nhiều key có cùng giá trị
int main(){
    map<int,int>mp;
    mp[100]=200;//mp.insert({100,200})
    for(pair x: mp) //for( auto& p:mp)
    {
        cout<<x.first<<x.second<<endl;
    }
    for(map<int,int>::iterator i=mp.begin(); i!=mp.end();i++)
    {
        cout<<(*i).first<<(*i).second<<endl;// truy xuat tới i trước
    }
    if(mp.count(100)!=0) //mp.find(100)!=mp.end()--
    {
        cout<<"Find";
    }
    
    
    return 0;
}