#include <iostream.h>
#include <conio.h>
#include "Dane.h"
class Dane
{
	int id,age;
	float fl;
	char name[20];
public:
	void inputS()
	{
		id=input(id,"ID");
		input(name,"Name");
		age=input(age,"Age");	
		fl=input(fl,"float");
	}
	void output()
	{
		cout << id << '\t' << name << '\t' << age << '\t' << fl << endl;
	}
	void static header()
	{
		cout << "ID\tName\tAge\tFloat\n";
	}
};
void main()
{
	int n,i;
	n=input(n,"input n");
	Dane *obj = new Dane[n];
	for(i=0;i<n;i++)
		obj[i].inputS();
	clrscr();
	Dane::header();
	for(i=0;i<n;i++)
		obj[i].output();
}