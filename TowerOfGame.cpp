#include <iostream.h>
#include <math.h>
int Tower(int);
void main()
{
	int n;
	cout << "input n: ";
	cin >> n;
	cout << "tower = " << Tower(n);
}
int Tower(int n)
{
	if(n==1)
		return 1;
		else 
		return Tower(n-1)*2 + 1;
}