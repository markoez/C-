#include <iostream>
#include <string>
using namespace std;
int main()
{
int score,p_score,m_score,f_score,i=0,num_std;
char grade ;
bool check;
check=false;
cout<<"Enter Project score : ";
cin >>p_score;
cout<<"Enter Midterm score : ";
cin >>m_score;
cout<<"Enter Final score : ";
cin >>f_score;
score =p_score+m_score+f_score;
if(p_score>20){
    cout<<"Project Score Error !!!"<<endl;
    score = 0;
    check = true;
}
if(m_score>30){
    cout<<"Midterm Score Error !!!"<<endl;
    score = 0;
    check = true;
}
if(f_score>50){
    cout<<"Final Score Error !!!"<<endl;
    score = 0;
    check = true;
}
if(score>=80){
    grade = 'A';
}else if(score>=70){
    grade = 'B';
}else if(score>=60){
    grade = 'C';
}else if(score>=50){
    grade = 'D';
}else{
     grade = 'F';
}
if(check == false){
    cout <<"Total Score : "<<score<<endl;
    cout <<"Grade : "<<grade<<endl;
}
else if(check == true){
    cout <<"Total Score : 0"<<endl;
    cout <<"Grade : "<<endl;
}
return(0);
}