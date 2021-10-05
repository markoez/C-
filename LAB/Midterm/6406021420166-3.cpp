#include <iostream>
using namespace std;
int main()
{   
int day,month,year,sum_day;
do{
cout <<"Please enter day month and year : ";
cin>>day;
cin>>month;
cin>>year;
}while(!(day >=1 && day<=30 && month>=1 && month <=12 && year >=2513 && year<=2599));

sum_day =((day-1)*1)+((month-1)*30)+((year-2513)*360);

cout<<"The diference is about "<<sum_day<<" days.";
    return 0;
}