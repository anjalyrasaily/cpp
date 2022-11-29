#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;


public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {

        cout << "the id of employee is" << id << "and this is employee number" << count << endl;
    }
    static void getCount(void){
        //cout<<id //throws error
        cout<<"The value of Count is"<<count<<endl;
    }
};
// count is the static data member of class Employee
int Employee ::count ; // Default value is Zero

int main()
{
    Employee anjaly, pig, cat;
    // anjaly.id=1
    // anjaly.count=1 -->cannot do this as id and count are private
    anjaly.setData();
    anjaly.getData();
    Employee:: getCount();

    pig.setData();
    pig.getData();
    Employee:: getCount();

    cat.setData();
    cat.getData();
    Employee:: getCount();
    return 0;
}