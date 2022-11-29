#include<iostream>
using namespace std;
//Function prototype
//Type function_name(arguments);
// int sum(int a,int b);---->> Acceptable
// int sum(int a,b);------->>Not Acceptable
int sum(int ,int);//----->>Acceptable

int main() {
    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
  //num1 and num2 are actual parameters
cout<<"The sum is "<<sum(num1,num2);

    return 0;
}
int sum(int a,int b)
//Formal parameters  a and b are taking vaue from actual parameters num1 and num2//
{
    int c= a+b;
    return c;
}
