#include <iostream.h>
#include <string.h>
void main()
{
	int i,x;
	char name[20];
	cout << "Name: "; 
	cin.get(name,20);
	char *rev = new char[strlen(name)];
	strcpy(rev,name);
	x=strlen(rev);
	cout << "Rev: ";
	for(i=x;i>=0;i--)
		cout << rev[i];
}