#include<iostream>
using namespace std;
//copy constructor
class Number{
int a;
public:
Number()
{
     a=0;
     }
Number(int num){
    a=num;
}
//when no copy constructor is found, compiler supplies its own copy constructor 
 Number(Number &obj){
     cout<<"Copy constructor called!! "<<endl;
     a=obj.a;
}
void display(){
    cout<<"The number for this object is "<<a<<endl; 
}


};








int main() {
    Number x,y,z(34),z2;
    x.display();
    y.display();
    z.display();
    z.display();
    //z1 should be exactly like z and x and y

    Number z1(z);//copy constructor invoked
    z1.display();
    z2=x;//copy constructor not called
    z2.display();
    Number z3=y;//contructor is invoked  
    z3.display();                                                                                                                         
    return 0;
}