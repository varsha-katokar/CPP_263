//A friend class is a class that is given special permission to access the private and protected members of another class

#include<iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    Base()
    {
        x=5;
    }

    friend class Derived;
};

class Derived
{
public:
    void display(Base b)
    {
        cout<<"Value = "<<b.x<<endl;
    }
};

int main()
{
    Base b;
    Derived d;
    d.display(b);

    return 0;
}
