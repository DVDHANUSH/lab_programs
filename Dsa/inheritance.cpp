//Inheritance
/*
The capability of a class to derive properties and characteristics from another class is called Inheritance.
Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
    it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

        1. derived class (child) - the class that inherits from another class
        2. base class (parent) - the class being inherited from

        we use : symbol to inherit the class.
*/

#include<iostream>
using namespace std;


//base class.
class Square{
    public:
        int x, sq;
        void getData(int number){
            x = number;
        }

        void calSquare(){
            sq = x*x;
        }

        void display(){
            cout<<"Square of "<<x<<" is "<<sq<<endl;
        }
};

//derived class.
class Cube:public Square{
    public:
        int cube;
        void calCube(){
            cube = x*x*x;
        }
        void displayCube(){
            cout<<"Cube of "<<x<<" is "<<cube<<endl;
        }

};

int main(){
    Cube obj;
    int no;
    cout<<"Enter a no to cal : ";
    cin>>no;
    obj.getData(no);
    obj.calSquare();
    obj.calCube();
    obj.display();
    obj.displayCube();
    return 0;
}