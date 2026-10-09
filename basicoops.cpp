#include<iostream>
using namespace std;
class Student{
    public:
    string name ;
    int roll;
    float cgpa;
void print(){
    cout<<name<<" "<<cgpa<<" "<<roll<<endl;
}
};
    
int main(){
    Student x1;
x1.name="vipin";
x1.cgpa=8.18;
x1.roll=132;
x1.print();

}