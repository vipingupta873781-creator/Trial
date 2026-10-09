#include<iostream>
using namespace std;
class Pokemon{
    public:
    string name;
    string type;
    int hp;
Pokemon(string n,string t,int h){
    name=n;
    type=t;
    hp=h;
}
void print(){
    cout<<name<<" "<<type<<" "<<hp<<endl;
}
};
int main(){
    Pokemon p1("pikachu","electric",70);
Pokemon p2("charizard","Fire",120);
    Pokemon p3("Mewtwo","psychic",200);
    p3.print();
    p1.print();
    p2.print();
}