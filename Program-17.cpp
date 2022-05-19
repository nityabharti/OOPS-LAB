//Write program to show binary operator
#include <iostream>
using namespace std;

class complex
{
    //declare data member or variables 
private:
    int real, imag;

public:
    // create a member function to take input  
    void getvalue()
    {
        cout << "\nEnter the value of real number:";
        cin >> real;
        cout << "\nEnter the value of imaginary number:";
        cin >> imag;
    }
    complex operator+(complex obj) // Operator overloading by binary operator(+)  
    {
        // create an object  
        complex temp;
        // assign values to object 
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return (temp);
    }
    complex operator-(complex obj) // Operator overloading by binary operator(-)
    {
        // create an object
        complex temp;
        // assign values to object 
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return (temp);
    }
    // display the result of addition and subtraction.
    void display()
    {
        cout << real << "+"
             << "(" << imag << ")"
             << "i"
             << "\n";
    }
};

int main()
{
    complex c1, c2, c3, c4; // here we created object of class complex i.e c1,c2,c3 and c4

    // accepting the values 
    c1.getvalue();
    c2.getvalue();

    // add the objects 
    c3 = c1 + c2;
    // subtract the objects 
    c4 = c1 - c2;

    cout << "\nResults of addition and subtarction :\n";
    c3.display(); // call display function to display the result of addition and subtarction.
    c4.display();

    return 0;
}