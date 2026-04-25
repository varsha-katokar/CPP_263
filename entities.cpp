//class is a user defined function in OOPS (blueprint or template used to create objects)
//data and functions are known as methods in OOPS(variables)

#include<iostream>
using namespace std;

class Student
{
 public:
     int id;
     string name;

     void display()
     {
         cout<<"ID:"<<id<<endl;
         cout<<"Name:"<<name<<endl;
     }
};

int main()
{
    Student s1,s2;   //Creating objects
    s1.id = 1;
    s1.name = "Varsha\n";
    cout<<"Student 1"<<endl;
    s1.display();

    s2.id=2;
    s2.name="abcd";
    cout<<"Student 2"<<endl;
    s2.display();

    return 0;
}
