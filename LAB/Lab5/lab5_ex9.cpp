#include <iostream>
#include <string>
using namespace std;
int main()
{
int n1;
cout << "\nEnter a your score : ";
cin >> n1;
cout << endl;
if (n1 >= 80){
cout << " Your Grade is A.";
            }
else if (n1 >= 70){
    cout << " Your Grade is B.";
            }
else if (n1 >= 60){
    cout << " Your Grade is C.";
            }
else if (n1 >= 50){
    cout << " Your Grade is D.";
            }
else {
    cout << " Your Grade is F.";
}
return(0);
}