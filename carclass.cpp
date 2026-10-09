#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int power;
    int price;
};
int main(){
    Car c1;
    c1.name="bmw";
    c1.color="black";
    c1.power=120;
    c1.price=240000000;
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<c1.power<<endl;
     cout<<c1.price<<endl;

}