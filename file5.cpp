#include <iostream.h>
#include <string.h>
#include <fstream.h>
class Employee
{
public:
	int id,age;
	char name[20];
	float rate,hours;
public:
	Employee()
	{
		id = 0;
		strcpy(name,"Dane");
		age = 19;
		rate = 9.9;
		hours = 500;
	}
	Employee(int i,char *n,int a,float r,float h);
	friend ostream& operator << (ostream& out, Employee &emp);
	friend istream& operator >> (ostream& in,Employee &emp);
	float income();
};
float Employee::income()
{
	return rate*hours;
}
Employee::Employee(int i,char *n,int a,float r,float h)
{
	id = i;
	strcpy(name,n);
	age = a;
	rate = r;
	hours = h;
}
ostream &operator << (ostream& out,Employee &emp)
{
	out << "ID: ";
	out << emp.id << endl;
	out << "Name: ";
	out << emp.name << endl;
	out << "Age: ";
	out << emp.age << endl;
	out << "Rate: ";
	out << emp.rate << endl;
	out << "Hours: ";
	out << emp.hours << endl;
	out << "Income: ";
	out << emp.income() << endl;
	return out;
}
istream &operator >> (istream& in, Employee &emp)
{
	cout << "ID: ";
	in >> emp.id;
	cout << "Name: ";
	in.seekg(0);
	in >> emp.name;
	cout << "Age: ";
	in >> emp.age;
	cout << "Rate: ";
	in >> emp.rate;
	cout << "Hours: ";
	in >> emp.hours; 
	return in;
}
void main()
{
	Employee em[20];
	int n,i;
	cout << "input n: ";
	cin >> n;
	for(i=0;i<n;i++)
		cin >> em[i];
	ofstream out("employee.dat",ios::binary);
	if(out.fail())
	{
		cout << "error cannot open file\n";
		return;
	}
	system("cls");
	out.write((char*)(&em),n*sizeof(Employee));
	out.close();
	ifstream in("employee.dat",ios::binary);
	if(in.fail())
	{
		cout << "error cannot open file\n";
		return;
	}
	in.read((char*)(&em),n*sizeof(Employee));
	for(i=0;i<n;i++)
		cout << em[i];
}