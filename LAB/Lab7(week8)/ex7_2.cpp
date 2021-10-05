#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
int radious;
float pi=3.14,ans;
string text;
char type ;
cout<<"Enter the number of radious : ";
cin >>radious;
cout<<"1.Calculate the circumderence of circle"<<endl;
cout<<"2.Calculate the area of circle"<<endl;
cout<<"3.Calculate the volume of Circle"<<endl;
cout<<"Enter the choice : ";
cin >>type;
if(type == '1'){
    ans = 2*pi*radious;
    text = "Circum of circle is ";
}else if(type == '2'){
    ans = pi*pow(radious,2);
    text = "Area of circle is ";
}else if(type == '3'){
    ans = (4.0/3.0)*pi*pow(radious,3);
   text = "Volume of circle is ";
}else{
    text = "Error!!!";
}
cout <<text<<ans;
return(0);
}