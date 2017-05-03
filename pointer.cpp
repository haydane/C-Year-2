#include <iostream.h>
void main()
{
	int *p;
	int a[2]={10,20};
	p=&a;
	cout << "p= " << *(p+1);
}