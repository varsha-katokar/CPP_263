//write a C++ program to pass object as an function argument and add two objects (make the member function non inline)
#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void getTime(){
        cout<<"\nEnter hours:"; cin>>hour;
        cout<<"\nEnter minutes:"; cin>>minute;
        cout<<"\nEnter seconds:"; cin>>second;
    }

    void printTime(){
        cout<<"\nhour:"<<hour;
        cout<<"\tminute:"<<minute;
        cout<<"\tsecond:"<<second;
    }

    void addTime(Time x, Time y);   // declaration only (non-inline)
};

// Non-inline member function definition outside class

void Time::addTime(Time x, Time y)
{
    hour = x.hour + y.hour;
    minute = x.minute + y.minute;
    second = x.second + y.second;
}

int main()
{
    Time t1, t2, t3;

    cout<<"Enter first time:";
    t1.getTime();

    cout<<"\nEnter second time:";
    t2.getTime();

    t3.addTime(t1, t2);   // passing objects as arguments

    cout<<"\nAdded Time:";
    t3.printTime();

    return 0;
}
