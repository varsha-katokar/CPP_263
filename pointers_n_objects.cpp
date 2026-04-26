#include<iostream>
using namespace std;

class ABC
{
public:
    int a = 50;
};

int main()
{
    ABC ob1;
    ABC *ptr;

    ptr = &ob1;   // correct pointer assignment

    cout<<ob1.a<<endl;
    cout<<ptr->a; // accessing member using pointer

    return 0;
}
