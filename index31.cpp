#include<iostream>
using namespace std;
//constructor overloading
class complex{
int a,b;
public:
//Default constructor
complex()
{
    a=0;
    b=0;
}
//Parametrized constructor
complex(int x,int y)
{
    a=x;
    b=y;
}
//Parametrized constructor
complex(int x)
{
    a=x;
    b=0;
}
void printData(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}

};

int main() {
    complex c1(4,5);
    c1.printData();

   complex c2(5);
    c2.printData();

 complex c3;
    c3.printData(); 


    return 0;
}