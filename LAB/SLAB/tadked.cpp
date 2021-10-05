#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Fname[15],Lname[15];
    int Class[15],Hw[15],Qz[15],Mid[15],Fnl[15],sumS[15],i;
    char grade[15];


    for(i=0;i<15;i++){
        cout <<"Enter your First Name : " ;
        cin >>Fname[i];
        cout <<"Enter your Last Name : " ;
        cin >>Lname[i];
        do{
            cout << "Class score : ";cin >>Class[i];
        }
        while(!(Class[i]>=0 && Class[i]<=5));

        do{
            cout << "Homework score : ";cin >>Hw[i];
        }
        while(!(Hw[i]>=0 && Hw[i]<=15));

        do{
            cout << "Quiz score : ";cin >>Qz[i];;
        }
        while(!(Qz[i]>=0 && Qz[i]<=10));

        do{
            cout << "Midterm score : ";cin >>Mid[i];
        }
        while(!(Mid[i]>=0 && Mid[i]<=30));

        do{
            cout << "Final term score : ";cin >>Fnl[i];
        }
        while(!(Fnl[i]>=0 && Fnl[i]<=30));

        sumS[i] =Class[i]+Hw[i]+Qz[i]+Mid[i]+Fnl[i];

        if(sumS[i]>=80){
        grade[i] = 'A';
        }else if(sumS[i]>=70){
        grade[i] = 'B';
        }else if(sumS[i]>=60){
        grade[i] = 'C';
        }else if(sumS[i]>=50){
        grade[i] = 'D';
        }else {
        grade[i] = 'F';
        }

        cout << "Sum Score : "<<sumS[i]<<endl;
        cout <<"Grade : "<<grade[i]<<endl;
        cout <<"-----------------------"<<endl;

    }
return(0);
}