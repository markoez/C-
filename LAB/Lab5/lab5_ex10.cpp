#include <iostream>
#include <string>
using namespace std;
int main()
{
int salary,ict;
cout << "\nEnter a your income : ";
cin >> salary;
cout << endl;
if (salary <= 100000){
    ict = salary*0.05;
            }
else if (salary <= 500000){
    ict = salary*0.1;
            }
else if (salary <= 1000000){
    ict = salary*0.2;
            }
else if (salary <= 4000000){
    ict = salary*0.3;
            }
else {
     ict = salary*0.37;
}
cout << "income = " << salary <<endl ;
cout << "income tax = " << ict ;


return(0);
}