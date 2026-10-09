#include<iostream>
using namespace std;
class Student{//user defined data type
    public:
    string name ;
    int roll;
    float cgpa;
    Student(){//default constructor

    }
    Student( string n,int r,float c){// parametriseconstructer
        //jab ek se jyade constructer function banate hai to use constructer overloading kahta hai
name=n;
roll=r;
cgpa=c;
    }
};
int main(){
Student x("vipin",132,8.2);
cout<<x.name<<" "<<x.roll<<" "<<x.cgpa<<endl;//objector variable
//x.name="vipin";
//x.cgpa=8.18;
//x.roll=132;
Student y;
y.name="wagisha";
y.roll=133;
y.cgpa=8.45;
cout<<y.name<<endl;
cout<<y.cgpa<<endl;
cout<<y.roll<<endl;

cout<<x.name<<endl;
cout<<x.cgpa<<endl;
cout<<x.roll<<endl;
return 0;


}