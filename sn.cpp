#include <iostream.h>
int sn(int);
void main()
{
	int n;
	cout << "input n: ";
	cin >> n;
	cout << "sn = " << sn(n);
}
int sn(int n)
{
	if(n==1)
	return 1;
	else 
	return sn(n-1)+n;
}