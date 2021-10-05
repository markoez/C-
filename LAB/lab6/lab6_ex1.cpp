#include <iostream>
using namespace std;
int main()
{   
    int i,n,sum=0;
    cout << "Enter number 1 : ";
    cin >> i;
    cout << "Enter number 2 : ";
    cin >> n ;
    
    if(i>n){
        cout << "Number 1 more than Number 2 !!";
        return(0);
    }
    for(i; i<=n; i++){   
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7)) {
                
                sum = sum + (i*i) ;  
       
        }else{}
    }
    cout << endl ;
    cout << "sum = " << sum;
    return 0;
}