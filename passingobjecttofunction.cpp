#include <iostream>
#include<string>
using namespace std;
class Student{//user defined data type
    public:
    string name ;
    int roll;
    float cgpa;
    Student( string n,int r,float c){
        name =n;
        roll=r;
        cgpa=c;
    }
    void print(){
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;

    }
};
int main(){
Student x ("vipin",132,8.2);
x.print();

return 0;
}

