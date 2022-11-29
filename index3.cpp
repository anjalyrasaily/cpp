#include<iostream>

using namespace std;

int glo= 6;
void sum(){
    int a;
    cout<< glo; 
}
int main()
{ 
     int glo=9;
     glo=44;
    // int a= 15;
    // int b= 34;
    // float pi= 3.14;
    // char c='A';
    int a=14,b=12;
    // bool is_true=true;
    bool is_true=false;
    sum();
    cout<<glo<< is_true;
    // cout <<"this is happiness,\n here the value of a is  "<<a<<"\n The value of b is "<<b; 
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c  is: "<<c;
    return 0;
}