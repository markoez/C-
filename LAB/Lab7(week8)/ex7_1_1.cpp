#include <iostream>
#include <string>
using namespace std;
int main()
{
int score;
char grade ;
cout<<"Enter the number of your score : ";
cin >>score;

if(score>=80){
    grade = 'A';
}else if(score>=70){
    grade = 'B';
}else if(score>=60){
    grade = 'C';
}else if(score>=50){
    grade = 'D';
}else {
     grade = 'F';
}
cout <<grade;
return(0);
}