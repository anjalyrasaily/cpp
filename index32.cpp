#include<iostream>
using namespace std;
//Dynamic initialization of obejects using constructor
class BankDeposit{
    int principle;
    int years;
    float rate;
    float returnValue;
    public:
    BankDeposit(){} 
BankDeposit(int p,int y,float r);//r can be a value like 0.04
BankDeposit(int p,int y,int r);// r can be valu like 14
void show();
};
BankDeposit::BankDeposit(int p,int y,float r)
{
    principle=p;
    years=y;
    rate=r;
    returnValue = principle;
    for (int  i = 0; i < y; i++)
    {
        returnValue *=(1+r);
    }
    
}
BankDeposit::BankDeposit(int p,int y,int r)
{
    principle=p;
    years=y;
    rate=float(r)/100;
    returnValue = principle;
    for (int  i = 0; i < y; i++)
    {
        returnValue *=(1+rate);
    }
    
}

 void BankDeposit::show()
{
    cout<<endl<<"principle amout was "<<principle<<" return value "<<years<<" years is "<<returnValue<<endl;
}




int main() {
    
BankDeposit bd1,bd2,bd3;
int p,y;
float r;
int R;
bd3.show();

cout<<"Enter a value of P,Yand r"<<endl;
cin>>p>>y>>r;
bd1=BankDeposit(p,y,r);
cout<<"Enter a value of P,Yand R"<<endl;
cin>>p>>y>>R;
bd1=BankDeposit(p,y,R);
bd1.show();
    return 0;
}

