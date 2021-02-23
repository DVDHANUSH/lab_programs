//Constructer_overloading:
/*
    When the two constructers having the same no of 
    arguments then it is based on the type of data 
    appropriate constructer will be fired.
*/

#include<iostream>
using namespace std;

class DataType{
    public:
        int int_type;
        float float_type;
        string string_type;
    public:
        DataType(int x , float y, string z){
            int_type = x;
            float_type = y;
            string_type = z;
        }
    public:
        DataType(string x , int y , float z){
            string_type = x;
            int_type = y;
            float_type = z;
        }    
    public:
        DataType(float x , string y , int z){
            float_type = x;
            string_type = y;
            int_type = z;
        }
    public:
        void display(){
            cout<<"Integer value  :"<<int_type<<endl;
            cout<<"Float value    :"<<float_type<<endl;
            cout<<"String value   :"<<string_type<<endl;    
        }
};

int main(){

    //obj for constructer1
    DataType data1(20 , 20.23 , "String1");
    //obj for constructer2
    DataType data2(50.56 , "String2" , 30);
    //obj for constructer3
    DataType data3("String3" , 57 , 60.90);

    data1.display();
    cout<<endl;
    data2.display();
    cout<<endl;
    data3.display();
    return 0;
}