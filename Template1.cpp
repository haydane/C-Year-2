#include <iostream.h>
template <class max>
void m(max &x, max &y)
{
	if(x>y)
		cout << "max: " << x << endl;
	else 
		cout << "max: " << y << endl;
}
void main()
{
	int n1=1,n2=2;
	float n3=1.2,n4=2.2;
	char *ch1 = "Ne",*ch2 = "Ne2";
	m(n1,n2);
	m(ch1,ch2);
	m(n3,n4);
}