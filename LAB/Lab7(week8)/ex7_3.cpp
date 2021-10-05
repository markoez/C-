#include <iostream>
#include <string>
using namespace std;
int main()
{
int i,j=100;
for(i=1;i<=j;i++){
cout <<i<<"\t";
    if(i%10 == 0 ){
        cout <<endl;
    }
}
return(0);
}