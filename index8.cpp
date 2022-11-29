#include <iostream>
using namespace std;
int main()

{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // selection control structure: if-else-if-else ladder
    /*if ((age<18) && (age>0))
  {
      cout<<"You cannot come to my house"<<endl;
  }
  else if(age==18){
      cout<<"You can come to my house"<<endl ;
  }
  else if(age<1){
      cout<<"You can go to school"<<endl ;
  }
  else{
      cout<<"you stay at your home"<<endl;
  }*/
    // Selecton control structure:switch case

    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:

        cout << "you are 22" << endl;
        break;
    case 33:

        cout << "you are 33" << endl;
        break;

    default:
        cout << "No special cases";
        break;
    }

    return 0;
}