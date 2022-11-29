#include <iostream>
using namespace std;
// objects array

class Employee
{

    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {

        cout << "The id of this employee is" << id << endl;
    }
};

int main()
{
    // Employee pig,cat,dog,bird;
    // pig.setId();
    // pig.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    } 

    return 0;
}