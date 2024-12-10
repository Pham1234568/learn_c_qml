#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    cout<<v.size()<<endl;
    cout<<v[v.size()-1]<<" last_element "<<v.back()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<"Phan tu "<<i<<":"<<v[i]<<endl;
    // }
    // for (int i:v){
    //     cout<<i<<endl;
    // }
    for (vector<int>::iterator it=v.begin();it!=v.end();++it)
    {
        cout<<*it;
    }
    int n;
    vector<int> v(n,0); //Khởi tạo số lượng phần tử và gán tất cả giá trị=0;
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    return 0;

}
