#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <fstream.h>
class employee
{
private:
	int id,age;
	char name[20];
	float rate,hour;
public:
	employee()
	{
		id=0;
		strcpy(name,"Dane");
		age=20;
		rate=0.0;
		hour=0.0;
	}
	employee(int i,char *n,int a,float r,float h);
	friend ostream &operator << (ostream& out,employee &emp);
	friend istream &operator >> (istream& in,employee &emp);
	float income();
};
employee::employee(int i,char *n,int a,float r,float h)
{
	id=i;
	strcpy(name,n);
	age=a;
	rate=r;
	hour=h;
}
ostream &operator <<(ostream &out,employee &emp)
{
	out << "ID: " << emp.id << endl;
	out << "Name: " << emp.name << endl;
	out << "Age: " << emp.age << endl;
	out << "Rate: " << emp.rate << endl;
	out << "Hours: " << emp.hour << endl;
	out << "Income: " << emp.income() << endl;
	return out;
}
istream &operator >>(istream &in,employee &emp)
{
	cout << "input ID: "; 
	in >> emp.id;
	in.clear();
	in.seekg(0,ios::end);
	cout << "input Name: ";
	in.get(emp.name,20);
	cout << "input Age: ";
	in >> emp.age;
	cout << "input Rate: ";
	in >> emp.rate;
	cout << "input hours: ";
	in >> emp.hour;
	return in;
}
float employee::income()
{
	return (rate*hour);
}
void main()
{
	clrscr();
	employee e[20];
	int n;
	cout << "input n: ";
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> e[i];
	for(int i=0;i<n;i++)
		cout << e[i];
}