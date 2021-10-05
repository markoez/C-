#include <iostream>
using namespace std;
int main(){

int fish_cal ,tomato_cal ,fish_cap ,tomato_cap, can=0;
cout << "Enter your canned fish recipe" << endl;
cout << "Enter fish use" << endl;
cin >> fish_cal;
cout << "Enter tomato use" << endl;
cin >> tomato_cal;
cout << "Enter your number of fish " << endl;
cin >> fish_cap;
cout << "Enter your number of tomato" << endl;
cin >> tomato_cap;

while (fish_cal<=fish_cap && tomato_cal<=tomato_cap)
{
   fish_cap -=fish_cal;
   tomato_cap -= tomato_cal;
   can ++;  
}
    cout << "Number of canned fish : "<<can <<endl;
    cout << "Fish balance : "<<fish_cap <<endl; 
    cout << "Tomato balance : "<<tomato_cap <<endl;
return(0);
}