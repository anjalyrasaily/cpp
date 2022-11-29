#include<iostream>
using namespace std;

//   typedef struct employee
//  {
//     /* data */
//     int Id; 4
//     char fav; 2
//     float salary; 4
//  }em;
 
// int main() {

// em.Id=1 ;
// em.fav= 'c';
// em.salary= 120000000;
// cout<<"The value is "<<em.Id<<endl;
// cout<<"The value is "<<em.fav<<endl;
// cout<<"The value  is "<<em.salary<<endl;

 union employee
 {
    /* data */
    int rice;//4
    char car;//1
    float pounds;//4
 };
 int main()
 {
// union employee m1;
// m1.rice= 34;
// m1.car= 'm';
// cout<<m1.rice;


enum meal{breakfast,lunch,dinner};
meal m1 =breakfast;
cout<<m1;

cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;
    return 0;
}