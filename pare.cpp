#include<iostream>
#include<vector>

using namespace std;
//v.first,v.second
int main(){
    pair<string,int>v=make_pair("FPT",1);//{FPT,1};
    cout<<v.first<<" "<<v.second;
    tuple<int,int,int> t{1,2,3};
    cout<<get<1>(t)<<endl;

    return 0;
}