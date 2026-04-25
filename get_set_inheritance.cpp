//Accessing private variable using get/set in inheritance
#include<iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    void setData(int a)
    {
        x=a;
    }

    int getData()
    {
        return x;
    }
};

class Derived : public Base
{
public:
    void display()
    {
       cout<<"Value = "<<getData()<<endl; //accessing private data via getter
    }
};

int main()
{
    Derived d;

    d.setData(50);   // using setter
    d.display();

    return 0;
}
