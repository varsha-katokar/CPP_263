//Accessing private variable using : class variable is protected
#include<iostream>
using namespace std;

class Base
{
protected:
    int x;
};

class Derived : public Base
{
public:
    void setData()
    {
        x=2;
    }

    void display()
    {
        cout<<"Value of x: "<<x<<endl;
    }
};

int main()
{
    Derived d1;

    d1.setData();
    d1.display();

    return 0;
}
