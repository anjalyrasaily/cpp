#include <iostream>
using namespace std;
int main()
{ /*Loops in C++
There are 3 types of loops in c++
1.For loop
2.While loop
3.Do while loop
*/

    // For Loop
    //  int i;
    //  cout<< i;
    //  i++;

    // Syntax For loop
    // For(initialization; condition ;increment)

    // {
    //     loop body(C++ code)
    // }

    // for (int i = 0; i < 40; i++)
    // {

    // cout<< i<<endl;

    // }

    // Example of infinite for loop
    //  for (int i = 0; 34 <= 40; i++)
    //  {

    // cout<< i<<endl;

    // }

    /*While loop*/
    // syntax:
    // while (/* condition */)
    //  {
    /* code */
    // }

    // printing 1 to 40 using while loop
    // int i;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite  while loop
    // int i;
    //  while(true)
    //  {

    // cout<< i<<endl;
    // i++

    //}

    /* Do-While loop*/
    // syntax:
    //  do
    //  {
    /* code */

    // }while (/* condition */);

    // printing 1 to 40 using while loop
    int i;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40);
    return 0;
}
