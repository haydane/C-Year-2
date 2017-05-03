#include <iostream>
using namespace std;
int factorial(int);
void main()
{
	int n;
	cout << "n: ";
	cin >> n;
	cout << "factorial of " << n << "=" << factorial(n);
}
int factorial(int a)
{
	if(a>1)
		return a*factorial(a-1);
	else return (1);
}