#include<iostream>
using namespace std;
int main(){
    int kilo,price ;
    cout <<"your kilo : ";
    cin >> kilo;
if(kilo>=0){
    price =40;
}
if(kilo>=2){
    if(kilo<=10){
        price += (kilo-1)*5;
    }else{
        price +=45;
    }
}
if(kilo>=11){
    if(kilo<=15){
        price += (kilo-10)*4;
    }else{
        price +=20;
    }
}
if(kilo>=16){
    if(kilo<=15){
        price += (kilo-15)*3;
    }else{
        price +=15;
    }
}
if(kilo>=21){
        price += (kilo-20)*2;

}
    cout <<"price : "<<price;
}