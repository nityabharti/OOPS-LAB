#include <iostream>
using namespace std;

class Areaofrectangle
{

private:
    int length, width;

public:
    Areaofrectangle() { cout << "\n default constructor"<<endl; }; // default constructor

    Areaofrectangle(int len, int wdt)
    { // Demonstration of parameterized constructor
        cout << "\n  Parameterized constructor with two arguments" << endl;
        length = len;
        width = wdt;
    }

    Areaofrectangle(Areaofrectangle &obj)
    { // Demonstration of copy constructor
        cout << "\n  Copy constructor " << endl;
        length = obj.length;
        width = obj.width;
    }

    Areaofrectangle(int len)
    { // Demonstration of constructor overloading
        cout << "\n  Constructor Overloading ( Parameterized constructor with one argument.)" << endl;
        length = len;
        width = len;
    }

    double calculateArea()
    {
        return length * width;
    }

    void display()
    {
        cout << "   The Area of Wall is : " << calculateArea() << endl;
    }
};
int main()
{
    
    Areaofrectangle Wall0;
    Areaofrectangle Wall01(8, 7);
    Wall01.display();

    Areaofrectangle Wall02(Wall01);
    Wall02.display();

    Areaofrectangle Wall03(9);
    Wall03.display();

    return 0;
}