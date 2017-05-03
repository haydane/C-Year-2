#include <iostream.h>
#include <string.h>
void main()
{
	int x,i;
	char *name,*pass,*box;
	cout << "name: ";
	cin.seekg(0);
	cin.get(*name);
	cout << "pass: ";
	cin.seekg(0);
	cin.get(*pass);
	x = strlen(name);
	//box = new char[x];
	for(i=0;i<x;i++)
		box[i]= name[i]+pass[i];
}