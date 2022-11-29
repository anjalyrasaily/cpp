#include<iostream>
using namespace std;
//Destructors : to free dynamic memory space
//Never takes and argumenent nor does return any value 
int count=0;//Global variable 
class num {
    
    public:
    num(){
        count++;
        cout<<"This is time when destructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"This is time when my destructor is called for object number "<<count<<endl;
        count--;
    }

};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
