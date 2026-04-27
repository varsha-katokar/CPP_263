#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout<<"\na = "<<a<<"\nb = "<<b;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setdata(8, 6);
    c2.setdata(3, 2);

    c3 = c1 - c2;   // calls operator- function

    c3.showdata();

    return 0;
}
