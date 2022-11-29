#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 /* int a= 34;
    cout<<"the value of a was:"<<a<<endl;
    a= 45;
    cout<<"the value of a  is:"<<a<<endl;*/
    //Constants in C++
    //const int a=3;
     //cout<<"the value of a was:"<<a<<endl;
     //a= 45; //you will get an error bcz a is a constant
     //cout<<"the value of a  is:"<<a<<endl;

     //Manipulators in C++
// int a=6, b=9, c=4;
// cout<<"The value of  a is "<<a<<endl;
// cout<<"The value of  a is "<<b<<endl;
// cout<<"The value of  a is "<<c<<endl;

// cout<<"The value of  a is "<<setw(4)<<a<<endl;
// cout<<"The value of  a is "<<setw(4)<<b<<endl;
// cout<<"The value of  a is "<<setw(4)<<c<<endl;



// Operator Precedence
int a =3, b=4;
// int c = a*5+b;
int c = ((((a*5)+b)-45)+85);
cout<<c;
    return 0;
}  