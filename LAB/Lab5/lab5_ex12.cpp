#include <iostream>
#include <string>
using namespace std;
int main()
{
cout << "Please enter a numberic ";

int number;

cin >> number;

if(number > 0){
    cout << "Number is positive";
}else if(number < 0){
    cout << "Number is negative";
}else{
    cout << "Number is zero";
}
return(0);
}