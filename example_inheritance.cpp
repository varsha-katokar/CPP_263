#include<iostream>
using namespace std;

/*
==============================
 SINGLE INHERITANCE
Animal → Dog
==============================
*/

class Animal   // Base class
{
public:
    void eat()
    {
        cout<<"Animal eats"<<endl;
    }
};

class Dog : public Animal   // Derived class
{
public:
    void bark()
    {
        cout<<"Dog barks"<<endl;
    }
};

/*
==============================
 MULTILEVEL INHERITANCE
Animal → Dog → Puppy
==============================
*/

class Puppy : public Dog   // Derived from Dog
{
public:
    void weep()
    {
        cout<<"Puppy weeps"<<endl;
    }
};

/*
==============================
 MULTIPLE INHERITANCE
Teacher + Student → TeachingAssistant
==============================
*/

class Teacher   // Base class
{
public:
    void teach()
    {
        cout<<"Teacher teaches"<<endl;
    }
};

class Student   // Base class
{
public:
    void study()
    {
        cout<<"Student studies"<<endl;
    }
};

class TeachingAssistant : public Teacher, public Student
// Derived class from Teacher and Student
{
public:
    void assist()
    {
        cout<<"Teaching assistant helps"<<endl;
    }
};


/*
==============================
 MAIN FUNCTION
==============================
*/

int main()
{

    cout<<"Single Inheritance Example"<<endl;

    Dog d;
    d.eat();   // inherited from Animal
    d.bark();


    cout<<"\nMultilevel Inheritance Example"<<endl;

    Puppy p;
    p.eat();   // inherited from Animal
    p.bark();  // inherited from Dog
    p.weep();


    cout<<"\nMultiple Inheritance Example"<<endl;

    TeachingAssistant ta;
    ta.teach();   // inherited from Teacher
    ta.study();   // inherited from Student
    ta.assist();


    return 0;
}
