#include<iostream>
using namespace std;
//constructors with default arguments
class simple{
    int data1;
    int data2;
    int data3;
    

    public:
    simple(int a,int b,int c=9){
        data1=a;
        data2=b;
        data3=c;
    }
    void printData(){

        cout<<"The value of data is "<<data1<<" and "<<data2<<" and "<<data3<<endl;
    }
    
};
int main() {
    simple c1(1, 3);
    c1.printData();
    return 0;
}