#include<iostream>
using namespace std;

//BASE CLASS
class Base
{
private:
    int x;
protected:
    int y;
public:
    int z;

    void setValues()
    {
        x = 10;
        y = 20;
        z = 30;
    }

    void showBase()
    {
        cout<<"Inside Base Class"<<endl;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};


//1. PUBLIC INHERITANCE
class PublicDerived : public Base
{
public:
    void display()
    {
        // x ❌ not accessible
        cout<<"\nPublic Inheritance"<<endl;
        cout<<"y = "<<y<<endl;   // protected → accessible
        cout<<"z = "<<z<<endl;   // public → accessible
    }
};


//2. PRIVATE INHERITANCE
class PrivateDerived : private Base
{
public:
    void show()
    {
        setValues();  // allowed

        cout<<"\nPrivate Inheritance"<<endl;
        // x ❌ not accessible
        cout<<"y = "<<y<<endl;   // becomes private
        cout<<"z = "<<z<<endl;   // becomes private
    }
};


//3. PROTECTED INHERITANCE
class ProtectedDerived : protected Base
{
public:
    void print()
    {
        setValues();

        cout<<"\nProtected Inheritance"<<endl;
        // x ❌ not accessible
        cout<<"y = "<<y<<endl;   // remains protected
        cout<<"z = "<<z<<endl;   // becomes protected
    }
};


int main()
{
    PublicDerived p;
    p.setValues();
    p.display();

    PrivateDerived pr;
    pr.show();

    ProtectedDerived pt;
    pt.print();

    return 0;
}
