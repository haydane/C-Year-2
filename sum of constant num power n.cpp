#include <iostream.h>
int sum(int a,int n)
{
	if(a>=1)
		return pow(a,n)+sum(a-1,n);
	else return 0;
}
void main()
{
	int a,n;
	cout << "a: ";
	cin >> a;
	cout << "n: ";
	cin >> n;
	cout << sum(a,n);
}