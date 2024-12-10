#include <iostream>
#include <string>
#define  getFood(type) lay_do_an(type)
#define price(a,b,c) tong_so_tien(a,b,c)
using namespace std;

enum Foods{
    Appetizers=5,
    Main_course=2,
    Dessert=3
};
string getFood(Foods type){
    switch(type){  //type 2 kiểu
        case Appetizers: return "khai vi";
        case Main_course: return "Main_dish";
        case Dessert: return "Dessert";
        default: return " Outside food";
    }
}
// float price(Foods type,int quantity){
//     float total=0;
//     if (type == Appetizers){
//         total=quantity*10000*type;
//         return total;
//     }
//     else if(type==Main_course){
//         total=quantity*1000*type;
//         return total;
//     }
//     total=15000;
//     return total;
// }
float price(Foods type,int quantity,float tax)
{
    float total=0;
    if (type == Appetizers){
        total=quantity*10000*type;//2 kiểu =Appetizers =2
        return total*(1+tax);
    }
    total=1000;
    return total*type*(1+tax);
}

int main()
{   Foods type;
    type=Appetizers;
    Foods type_1=Main_course;
    cout<<tong_so_tien(type_1,1,0.2)<<endl;
    cout<<"Get_food:"<<lay_do_an(type_1);
    return 0;
}