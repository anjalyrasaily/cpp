#include<iostream>
using namespace std;
//Protected acess Modifier
class Base{
    protected:
int a;
private:
int b;
};
/*
For protected member:
                        Public derivation          Private derivation          Protected derivation  
1.private members         Not inherited             Not inherited                 Not inherited
2.protected members        Protected                 Private                          Protected
3.public members            public                  Private                          Protected




*/



//class Derived:: protected Base{

//};

int main(){
  //  Base b;
 //   Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
