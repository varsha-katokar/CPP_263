#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void display()
    {
        cout<<"Brand:"<<brand<<endl;
        cout<<"Speed:"<<speed<<endl;
    }
};

int main()
{
    Car c1,c2;   //Creating objects

    c1.brand = "Abc";
    c1.speed = 60;
    cout<<"Car 1"<<endl;
    c1.display();

    c2.brand = "Def";
    c2.speed = 80;
    cout<<"Car 2"<<endl;
    c2.display();

    return 0;
}
