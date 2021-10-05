#include <iostream>
#include <string>
using namespace std;
int main()
{
int sum, X = 0, A = 5, B = 2, C = 11, D = 4, E = 3, F = 7;
sum = X += C - (A*F) / E % (D - C) * A + B;
cout << "sum : "<<sum;

return(0);
}