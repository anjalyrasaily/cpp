#include <iostream>
using namespace std;
// Parameterized Conatructor and default constructor

class complex
{
    int a, b;

public:
    complex(int,int); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x,int y)//------>>This is Parameterized constructor  as it takes two parameters
{
    a = x;
    b = y;

}
int main()
{
    //Implicit Call
complex a(3,4);
a.printNumber();




//Explicit call
complex b= complex(5,6);
b.printNumber();
    return 0;
}