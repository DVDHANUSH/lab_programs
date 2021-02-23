//Constructer:

/*
   A constructor in C++ is a special method that is automatically called 
   when an object of a class is created.
*/

#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollNo;
    Student(string x , int y){
        name = x;
        rollNo = y;
    }   
    public: void display(){
        cout<<"The student name is "<<name<<" with roll no "<<rollNo<<endl;
    }
};

int main(){

    //this is the object of student 1.
    Student student1("Saketh" ,21);
    //this is the  object of student 2.
    Student student2("Vishnu" , 23);
    student1.display();
    student2.display();
}