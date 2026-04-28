//write a C++ program to read roll no. , name, age and subject marks of a student and implement suitable exception handling methods to validate the input.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int roll, age, marks;
    string name;

    try
    {
        cout<<"Enter Roll Number: ";
        cin>>roll;

        if(roll <= 0)
            throw roll;

        cout<<"Enter Name: ";
        cin>>name;

        if(name.length() == 0)
            throw name;

        cout<<"Enter Age: ";
        cin>>age;

        if(age <= 18)   // Age must be greater than 18
            throw age;

        cout<<"Enter Subject Marks: ";
        cin>>marks;

        if(marks < 0 || marks > 100)
            throw marks;

        cout<<"\nStudent Details are valid";
        cout<<"\nRoll No: "<<roll;
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nMarks: "<<marks;
    }

    catch(int)
    {
        cout<<"\nInvalid numeric input detected";
        cout<<"\nCheck Roll Number / Age / Marks range";
    }

    catch(string)
    {
        cout<<"\nInvalid Name entered";
    }

    return 0;
}
