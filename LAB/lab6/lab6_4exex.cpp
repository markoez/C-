#include <iostream>
using namespace std;
int main()
{   
  int min,max,count,sum=0 ;
  char op;
cout << "Sai lek rag : ";
cin >> min;
cout << "Sai lek soodtai : ";
cin >> max;
cout << "buak or lob : ";
cin >> op;
cout << "tee la tao rai : ";
cin >> count;

while (min<=max)
{   
    if(op == '+'){
        sum = sum+count ;
    }else if(op == '-'){
        sum = sum-count ;
    }
    else{
        cout <<"Error";
    }
    min+=count;    
}

    cout << "Sum ="<< sum ;


    return 0;
}