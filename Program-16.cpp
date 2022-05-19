// Write program to show unary operator
#include <iostream>
using namespace std;

class Complex
{
    // declare data member or variables
    int x, y, z;

public:
    Complex(int x1, int y1)
    { // paramterized constructor
        x = x1;
        y = y1;
    }

    void operator++()
    { // operater overloading function
        x = ++x;
        y = ++y;
    }

    void operator--()
    { // operater overloading function
        x = --x;
        y = --y;
    }
    // display the result of addition
    void display()
    {
        cout << x << " + " << y << "i" << endl;
    }
};

int main()
{
    Complex obj(50, 30); // here we created object of class Complex

    ++obj;

    cout << "Increment Complex Number\n";
    obj.display(); // call display function to display the result of increment.

    --obj;

    cout << "\nDecrement Complex Number\n";
    obj.display(); // call display function to display the result of decrement.

    return 0;
}