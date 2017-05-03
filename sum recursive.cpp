#include <iostream.h>
int sum(int n)
{
	int s;
	if(n>=1)
		return n + sum(n-1);
	else 
		return 0;
}
void main()
{
	int n;
	cout << "input n: ";
	cin >> n;
	cout << sum(n);
}