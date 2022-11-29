#include<iostream>
using namespace std;
//Another example of Parameterized constructor

class Point{
int x,y;
public:
Point(int a,int b){
    x= a;
    y= b; 
}
void displayPoint(){
    cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
}
};
int main() {
    Point p(1,1);
    p.displayPoint();

    Point q(4,7);
    q.displayPoint();


    return 0;
}