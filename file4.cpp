#include <iostream.h>
#include <fstream.h>
#include <string.h>
class Employee
{
private:
	int id,age;
	char name[20];
	float rate,hours;
public:
	Employee()
	{
		id=0;
		strcpy(name,"Dane");
		age=20;
		rate=0.0;
		hours=0.0;
	}
	Employee(int i,char *n,int a,float r,float h);
	friend ostream &operator << (ostream& out, Employee &emp);
	friend istream &operator >> (istream& in, Employee &emp);
	float income();
};

Employee::Employee(int i,char *n,int a,float r,float h)
{
	id = i;
	strcpy(name,n);
	age = a;
	rate = r;
	hours = h;
}
ostream &operator << (ostream& out, Employee &emp)
{
	out  << "ID: " << emp.id << endl;
	out << "Name: " << emp.name << endl;
	out << "Age: " << emp.age << endl;
	out << "Rate: " << emp.rate << endl;
	out << "Hours: " << emp.hours << endl;
	out << "RH: " << emp.income() << endl;
	return out;
}
istream &operator >> (istream& in, Employee &emp)
{
	cout << "ID: ";
	in >> emp.id;
	cout << "Name: ";
	in.clear();
	in.seekg(0,ios::end);
	in.get(emp.name,20);
	cout << "Age: ";
	in >> emp.age;
	cout << "Rate: ";
	in >> emp.rate;
	cout << "Hours: ";
	in >> emp.hours;
	return in;
}
float Employee::income()
{
	return (rate*hours);
}
void main()
{
	system("cls");
	Employee e[20];
	int n,i;
	cout << "Enter n: ";
	cin >> n;
	for(i=0;i<n;i++)
		cin >> e[i];
	ofstream out("emp.dat",ios::binary);
	if(out.fail())
	{
		cout << "Error can not open file\n";
		return;
	}
	out.write((char*)&e,n*sizeof(Employee));
	out.close();
	ifstream in("emp.dat",ios::binary);
	if(in.fail())
	{
		cout << "Error cannot open file\n";
		return;
	}
	in.read((char*)(&e),n*sizeof(Employee));
	for(i=0;i<n;i++)
	{
		cout << e[i];
	}
	in.close();
}