#include <iostream>
#include <string>
using namespace std;
int main()
{
int mom_give=0,income=1,day=0,kanhom=1,balance=0;
cout <<"How much money has Dee got? ";
cin >>mom_give;
balance=mom_give;
while(kanhom<=balance)
{
    balance = (balance+income)-kanhom;
    day++;
    kanhom++;
}
cout <<"Dee can do this for "<<day<<" days.";
cout <<"Then he still has "<<balance<<" Baht.";


return(0);
}