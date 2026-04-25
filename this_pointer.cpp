//Add two Time objects using this pointer (non-inline member function)
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

    void addTime(Time x, Time y);
};

void Time::addTime(Time x, Time y)
{
    this->hour = x.hour + y.hour;
    this->minute = x.minute + y.minute;
    this->second = x.second + y.second;
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
