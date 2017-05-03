#include <iostream>
using namespace std;
int fac(int n)
{
	if(n==0)
		return 1;
	else 
	{
	 return n*fac(n-1); 
	}
}
void main()
{
	int n;
	int sum=0;
	cout << "input n: ";
	cin >> n;
	while(n>=1)
	{
	sum= sum + fac(n);
	n--;
	}
	cout << endl << "Result: " << sum;
}