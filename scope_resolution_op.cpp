//Write a C++ program to demonstrate scope resolution operator

#include<iostream>
using namespace std;
int m=10; //global declaration of variable m

int main()
{
    int m=20;       //variable m is declared as local variable
    {
        int k=m;
        int m=3;
        cout<<"We are in inner block\n";

        cout<<"k="<<k<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
    }
        cout<<"We are in outer block\n";
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
        return 0;
}

