#include <iostream>
#include <string>
using namespace std;
int main()
{
int salary,hour,sum_salary;
char late,ot;
cout <<"Enter salary : ";
cin >>salary;
do{
cout <<"Late (Y/N) : ";
cin >>late;
switch (late)
{
case 'Y' : 
    break;
case 'N' : salary= salary+1000;
    break;
}
}while(late != 'Y'&& late != 'N');

do{
cout <<"Over Time Hour (Y/N) : ";
cin >>ot;
switch (ot)
{
case 'Y' : cout << "Enter OT Hour : ";
           cin >>hour;
           salary = salary+(hour*200);
    break;
case 'N' : 
    break;
}
}while(ot != 'Y' && ot != 'N');
cout <<"Salary : "<<salary;
return(0);
}