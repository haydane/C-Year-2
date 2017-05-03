#include <iostream.h>
class employee
{
protected:
	char name[20],sex;
	int id;
	float salary,tax1;
public:
	void input()
	{
		cout << "\nID: ";
		cin >> id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Sex[F,M]: ";
		cin.seekg(0);
		cin.get(sex);
		cout << "Salary: "; 
		cin >> salary;
	}
	void static header()
	{
		cout << "\nID\tName\tSex\tSalary\tTax\n";
	}
	float tax()
	{
		if(salary<=250)
			return salary*0.03;
		else if(salary<=500)
			return salary*0.05;
		else if(salary<=1000)
			return salary*0.07;
		else 
			return salary*0.12;
	}
	void output()
	{
		cout << id << '\t' << name << '\t' << sex << '\t' << salary << '$' << '\t';
		cout << tax() << '$' << endl;
	}
};
void main()
{
	int i,n;
	cout << "Input number of employee: ";
	cin >> n;
	employee *emp = new employee[n];
	/*employee *emp = new employee[n];*/
	for(i=0;i<n;i++)
		emp[i].input();
	employee::header();
	for(i=0;i<n;i++)
		emp[i].output();
}