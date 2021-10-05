#include <iostream>
#include <string>
using namespace std;
int main()
{
char num;
cout << "\ntype a some thing !! : ";
cin >> num;
cout << endl;
if (num >= '0' && num <= '9') cout << num << " is numeric.";
else cout << num << " isn't numeric.";
return(0);
}