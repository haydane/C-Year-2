#include <iostream.h>
void main()
{
	char name[20];
	char *p;
		p=&name;
		cin.seekg(0);
		cin.get(p,20);
		cout << p;
}