#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Fname[15],Lname[15];
    int Cl[15],Hw[15],Qz[15],Mid[15],Fnl[15],sumS[15],i,choose;
    char grade[15],send;

    void menu();
    void inputName();
    void inputScore();
    void showGradeAll();
    
    
    do{
    cout<<"Choose your process"<<endl;
    menu();
    cin>>choose;

    switch (choose)
    {
    case 1:
        inputName();
        cout<<"This is "<<Fname[0];
        break;
    case 2:
        inputScore();
        break;
    case 3:
        showGradeAll();
        break;
    default:
        break;
    }

    }while(choose !=0);

return(0);
}


void menu(){
    cout<<"1. Input Name"<<endl;
    cout<<"2. Input Score"<<endl;
    cout<<"3. Show Grade"<<endl;
    cout<<"0. EXit Program"<<endl;
}

void inputName(string &Fname,string &Lname;){
int i;
for(i=0;i<3;i++){
        cout <<"Enter your First Name : " ;
        cin >>Fname[i];
        cout <<"Enter your Last Name : " ;
        cin >>Lname[i];

        
}

}

void inputScore(){
    
}

void showGradeAll(){

}