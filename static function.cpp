#include <iostream.h>
#include <conio.h>
class Employee
{
protected:
	int id;
	char name[20];
	float salary,tax;
public:
	void input()
	{
		cout << "ID: ";
		cin >> id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Salary: ";
		cin >> salary;
		cout << "Tax: ";
		cin >> tax;
	}
	float static TaxSalary(Employee ee)
	{
		return ee.tax*ee.salary;
	}
	void output()
	{
		cout << id << "\t" << name << "\t" << salary << "$" << "\t";
	}
	void static header()
	{
		cout << "ID\tName\tSalary\tTax\n";
	}
};
void main()
{
	int i,n;
	cout << "input number of employee: ";
	cin >> n;
	Employee *ee = new Employee[n];
	for(i=0;i<n;i++)
	ee[i].input();
	Employee::header();
	for(i=0;i<n;i++)
	{
		ee[i].output();
		cout << Employee::TaxSalary(ee[i]) << "$" << endl;
	}
}