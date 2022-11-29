#include <iostream>
using namespace std;
// Constructors

class complex
{
    int a, b;

public:
    /*
   // Creating a Constructor//
    Constructor is special type member function with  the same name as of class.
    It is used to initialize the objects of its class
    It is automatically invokedn whenevr an object is created

    */
    complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)//------>>This is default constructor  as it accepts  no parameter
{
    a = 10;
    b = 0;
    //cout<<"helloo world";
}

int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
//Characteristics of Constructor
/*
1.It should be declare in public section of class
2.They are automatically invoked whenever the object is created
3.They cannot return values and donot have return types
4.It can have default arguments
5.we cannot refer to ther address





*/