#include <iostream>
using namespace std;
int main()
{   
int min,max,count,sum=0 ;

cout << "Sai lek rag : ";
cin >> min;
cout << "Sai lek soodtai : ";
cin >> max;
cout << "buak tee la tao rai : ";
cin >> count;

while (min<=max)
{   
    sum = sum +min ;
    min+=count;    
}
    cout << "Sum = "<< sum ;
    return 0;
}