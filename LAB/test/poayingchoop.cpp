#include <iostream>
#include <string>
using namespace std;
int main()
{
int round_max,round_win,score1=0,score2=0,score_draw=0,round_start=1;
char player1,player2;
do{
cout << "Please enter maximum round to play : ";
cin >> round_max ;
round_win =round_max*0.7;

}while(round_max>20 || round_max==0);

cout <<"Enter your choice ( 1 = paper , 2 = hammer , 3 = scissors )"<<endl;
while(round_start <= round_max &&!(score1>round_win||score2>round_win)){

    cout<<"round "<<round_start<<"\t P1 : "<<score1<<" Vs P2 : "<<score2<<endl;
    cout<<"Player1 :";
    cin>>player1;
    cout<<"Player2 :";
    cin>>player2;
    round_start++;

    if((player1 == '1' && player2 == '2')||(player1 == '2' && player2 == '3')||(player1 == '3' && player2 == '1')){
            score1++;
    }else if((player1 == '1' && player2 == '3')||(player1 == '2' && player2 == '1')||(player1 == '3' && player2 == '2')){
            score2++;
    }else if(player1 == player2){
            score_draw++;
    }else{
        cout <<"Error";
        return(0);
    }
}
cout <<"In "<<round_max<<" round"<<endl;
if(score1>score2){
    cout <<"Player 1 WIN!!"<<endl;
    cout <<"Score Player1 : "<<score1<<"  Score Player2 : "<<score2<<"  Draw : "<<score_draw;
    

}else if(score2>score1){
    cout <<"Player 2 WIN!!"<<endl;
    cout <<"Score Player2 : "<<score2<<"  Score Player1 : "<<score1<<"  Draw : "<<score_draw;
}else {
    cout <<"DRAW!!"<<endl;
    cout <<"Score Player2 : "<<score2<<"  Score Player1 : "<<score1<<"  Draw : "<<score_draw;
}



return(0);
}