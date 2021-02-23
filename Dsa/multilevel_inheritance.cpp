//Multilevel inheritance.
// A class can also be derived from one class, which is already derived from another class.

#include<iostream>
using namespace std;
//base class
class Me{
    public:
        void me(){
            cout<<"I am the Grand Father of the grand child and father of child"<<endl;
        } 
};

//derived class
class Child: public Me{
    public:
        void child(){
            cout<<"I am the child of Me and grand child is my child"<<endl;
        }
};

//derived class
class GrandChild: public Child{
    public:
        void grandChild(){
            cout<<"I am grand child of me and child of child"<<endl;
        }
};

int main(){
    GrandChild obj;
    obj.me();
    return 0;
}