/*
    oop is an objective oriented programming

    A class is a user-defined data type that we can use in our program, 
    and it works as an object constructor, or a "blueprint" for creating objects.
*/
#include<iostream>
using namespace std;

class MyClass {       
  public:             
    int rollNo;        
    string name;  
};

/*
In the above block:
    The keyword class is used to create a class called MyClass
    The public keyword is called an accesds specifieer.
    The data types int and string are called attributes.
*/

int main(){
    MyClass myObj;  //creating an object to the class.

    //accessing attributes and set values.
    myObj.rollNo = 20;             
    myObj.name = "Saketh Vishnu";

    //printing the class attributes.
    cout<<"My name is "<<myObj.name<<endl;
    cout<<"My Roll no is "<<myObj.rollNo;
}