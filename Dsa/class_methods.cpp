//Class Methods
/*
    There are 2 types of classd methods
        1. Inside class definition.
        2. outside class definition.
*/

#include<iostream>
using namespace std;

class MyClass{
    //In inside class method the functon is defined in the class itself.
    public:
        void myMethodInside(){
            cout<<"Inside class definition"<<endl;
        }
    
    //In outside class definition the function is declared in the class and the function is defined outside the class.
    public:
        void myMethodOutside();
};

void MyClass::myMethodOutside(){
    cout<<"Outside class method"<<endl;
}

int main(){
    MyClass myObj;
    myObj.myMethodInside();
    myObj.myMethodOutside();
}