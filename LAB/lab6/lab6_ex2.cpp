#include <iostream>
using namespace std;
int main()
{
int number;
cout << "Enter the number of student : ";
cin >> number;
float Sum = 0;
int score;
bool check;
for (int n = 1 ; n <= number ; n++) {
        do{
        cout << "Enter score student " << n << " : ";
        cin >> score;

        if (score < 0 || score > 5 ) {
        check = true;
        }
        else{ 
            check = false;
            Sum = Sum + score;
            }
        }while ( check == true);
}       
        Sum = Sum/number ;
cout << "\nAverage of score studen " << number<< " person";
cout << " is = " << Sum << endl;
return(0);
} 