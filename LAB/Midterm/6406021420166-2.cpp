#include <iostream>
using namespace std;
int main()
{   
int book,toy,model,stationery;
int book_sum,toy_sum,model_sum,stationery_sum,sum_sale;
double payment;

cout <<"Input number of Book: ";
cin>>book;
cout <<"Input number of Toy: ";
cin>>toy;
cout <<"Input number of Model: ";
cin>>model;
cout <<"Input number of Stationery: ";
cin>>stationery;

book_sum = book*120;
toy_sum = toy*80;
model_sum = model*50;
stationery_sum =stationery*15;
sum_sale = book_sum+toy_sum+model_sum+stationery_sum;

if(sum_sale == 0){
    payment = 1000*0.5;
}else if(sum_sale <=4999){
    payment = 1000*0.9;
}else if(sum_sale <=9999){
    payment = 1000;
}else if(sum_sale <=99999){
    payment = 1000+(sum_sale*0.05);
}else if(sum_sale >=100000){
    payment = 1000+(sum_sale*0.1);
}else{
    cout <<"Error";
    return(0);
}
cout <<"Payment = "<<payment;
    return 0;
}