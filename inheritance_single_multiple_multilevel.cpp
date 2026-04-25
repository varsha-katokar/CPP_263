//write a c++ program to demonstrate single , multiple and multi level inheritance

#include<iostream>
using namespace std;

//Single Inheritance
class A
{
public:
    void showA()
    {
        cout<<"This is class A"<<endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout<<"This is class B (Derived from A)"<<endl;
    }
};


//Multilevel Inheritance
class C : public B
{
public:
    void showC()
    {
        cout<<"This is class C (Derived from B)"<<endl;
    }
};


//Multiple Inheritance
class X
{
public:
    void showX()
    {
        cout<<"This is class X"<<endl;
    }
};

class Y
{
public:
    void showY()
    {
        cout<<"This is class Y"<<endl;
    }
};

class Z : public X, public Y
{
public:
    void showZ()
    {
        cout<<"This is class Z (Derived from X and Y)"<<endl;
    }
};

int main()
{
    cout<<"Single Inheritance:"<<endl;
    B obj1;
    obj1.showA();
    obj1.showB();

    cout<<"\nMultilevel Inheritance:"<<endl;
    C obj2;
    obj2.showA();
    obj2.showB();
    obj2.showC();

    cout<<"\nMultiple Inheritance:"<<endl;
    Z obj3;
    obj3.showX();
    obj3.showY();
    obj3.showZ();

    return 0;
}
