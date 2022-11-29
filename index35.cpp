#include<iostream>
using namespace std;
//Inheritance syntax and visibility mode
//base class



class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

//Derived class
/*class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
{
    class members/methods/etc

}
Note::
1.Default visibility mode is private
2.Public visibility mode : Public members of base class became Public members of derived class
3.Private visibility mode : Public members of base class became Private members of derived class
4.Private members of base class cannot be inherited

*/


//Creating a programmer class  derived from Employee  Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}


























