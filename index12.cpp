#include <iostream>
using namespace std;

int main()
{
  // Array Example:
  int marks[] = {23, 45, 67, 88};
  int mathmarks[4];
  mathmarks[0] = 78;
  mathmarks[1] = 45;
  mathmarks[2] = 77;
  mathmarks[3] = 88;
  cout << "This are math marks" << endl;
  cout << mathmarks[0] << endl;
  cout << mathmarks[1] << endl;
  cout << mathmarks[2] << endl;
  cout << mathmarks[3] << endl;

  // You ca change the value of an array
  marks[2] = 22;
  cout << "These are marks" << endl;
  cout << marks[0] << endl;
  cout << marks[1] << endl;
  cout << marks[2] << endl;
  cout << marks[3] << endl;

  // For loop*****
  //  for (int i = 0; i < 4; i++)
  //  {
  //      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
  //  }

  // while loop****
  /* int i=0;
   while (i<4)
   {
     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
     i++;
   }*/

  // Do while****
  /* int i=0;
    do
    {
         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
      i++;
    } while (i<4);*/

  // Pointers and Array
  int *p = marks;
cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(++p);


  // cout << "The value of *p is " << *p << endl;
  // cout << "The value of *(p+1) is " << *(p + 1) << endl;
  // cout << "The value of *(p+2) is " << *(p + 2) << endl;
  // cout << "The value of *(p+3)is " << *(p + 3) << endl;

  return 0;
}