#include <iostream>
#include <string>
using namespace std;
    // OOPs - Classes and Objects
    //  C++ --->initially called --->C with classes by stroustroup
    //  Class --> extension of structure
    // structure had limitations:
    // ---> members are public
    //   --->No methods
    // classes ---> Structures + more
    // classes ---> can have methods and properties
    // classes ---> can make few members as private & few as public
    //  structure in C++ are typedef
    // you can declare objects along with the class declaration like this

    /*class employee{
        class defn
        }harry,rohan,lucky;*/

    // harry.salary=8 makes no sense if salary is private

    // Nesting of member fuctions
class binary
{
private:
    string s; 
    void chk_bin(void);

public:
    void read(void);
   
    void ones_complement(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i)='1';
        }
   else 
        {
            s.at(i)='0';
        }
    }
}
void binary::display(void)
{

    cout<<"Displaying the binary number"<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);

    }
    cout<<endl;
}

int main()
{


    binary b;
    b.read();
    //b.chk_bin();
    b.ones_complement();
    b.display();

    return 0;
}