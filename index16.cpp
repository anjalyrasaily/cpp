#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    //Dont use below lines with inline
    //static int c=0;//This executes only one time
   // c=c+1;//Next time this fuction is run,the valuue of c will retained
  //  return a*b+c;
  return a*b;
}
float moneyReceived(int currentMoney,float factor=1.04)
{
return currentMoney*factor;
}
//int strlen(const char *p){

// }
int main()
{
    int a, b;
   // cout << "Enter the value of a and b";
   // cin >> a >> b;
   // cout << "The product of a and b is " << product(a, b) << endl;
   int money=100000;
cout<<"If you have "<<money<<" Rs in your bankaccount ,you will receive" <<moneyReceived(money)<<"Rs after 1 yr"<<endl;
cout<<"For VIP:If you have "<<money<<" Rs in your bankaccount ,you will receive" <<moneyReceived(money,1.1)<<"Rs after 1 yr" ;

    return 0;
}