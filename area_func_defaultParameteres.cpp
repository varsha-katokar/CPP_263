//Write a c++ program to calculate area with default length as 5 and breadth as 4 area has to be calculated based on the inputs provided or not provided from the user using functions what further improvements can be done
//15. What further improvements can be done?

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    // Constructor with default values
    Rectangle(float l = 5, float b = 4)
    {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    float area()
    {
        return length * breadth;
    }

    // Function to display values
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
    }
};

int main()
{
    int choice;
    float l, b;

    cout << "Enter 1 to give input or 0 to use default values: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;

        Rectangle r(l, b);   // user values
        r.display();
        cout << "Area = " << r.area();
    }
    else
    {
        Rectangle r;   // default values (5,4)
        r.display();
        cout << "Area = " << r.area();
    }

    return 0;
}
