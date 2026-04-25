//Write a C++ program to create a class rectangle with data members length and width.Create an object and calculate the area of rectangle using member function

#include<iostream>
using namespace std;

class rectangle
{
public:
    float length;
    float width;

    void area()
    {
        float a;
        a=length*width;
        cout<<"Area of rectangle:"<<a<<endl;
    }
};

int main()
{
    rectangle r1;
    r1.length=25;
    r1.width=10;
    r1.area();

    return 0;
}

