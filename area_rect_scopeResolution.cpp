//Write a C++ program to create a class rectangle with data members length and width.Create an object and calculate the area of rectangle using member function

#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setData(float l, float w);
    void area();
};

void Rectangle::setData(float l, float w)
{
    length=l;
    width=w;
}

void Rectangle::area()
{
    float a;
    a=length*width;
    cout<<"Area of Rectangle: "<<a<<endl;
}

int main()
{
    Rectangle r1;

    float l, w;

    cout<<"Enter length: ";
    cin>>l;

    cout<<"Enter width: ";
    cin>>w;

    r1.setData(l,w);   // setting private data
    r1.area();

    return 0;
}
