//Write a C++ program using the concept of this pointer
//RAII something if taken C++ for interview this ques may be asked
#include<iostream>
using namespace std;

class sample
{
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a;   // assign parameter a to data member a
        this->b = b;   // assign parameter b to data member b
    }

    void output()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    sample ob1;

    int a = 5, b = 8;

    ob1.input(a, b);   //semicolon added here
    ob1.output();

    return 0;
}
