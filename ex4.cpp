#include <iostream.h>
#include <string.h>
class student
{
public:
	char name[20];
	int id;
	float avg;
public:
	char *getName()
	{
		return name;
	}
	float getAvg()
	{
		return avg;
	}
	int getID()
	{
		return id;
	}
	void input()
	{
		cout << "\nID: ";
		cin >> id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Average: ";
		cin >> avg;	
	}
	void static header()
	{
		cout << "\nID\tName\tAvg\n";
	}
	void output()
	{
		cout << id << "\t" << name << "\t" << avg << endl;
	}
};
void sort(student st[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(st[i].getName(),st[j].getName())>0)
			{
				student tmp;
				tmp = st[j];
				st[j] = st[i];
				st[i] = tmp;
			}
		}
	}
}
void main()
{
	student stu[10];
	int i,n;
	cout << "Input number of student: ";
	cin >> n;
	for(i=0;i<n;i++)
	stu[i].input();
	student::header();
	sort(stu,n);
	for(i=0;i<n;i++)
		stu[i].output();
	cout << "\n";
	cout << "Max average is : \n";
	student::header();
	for(i=0;i<n;i++)
	{
		if(stu[i].getAvg()<stu[i+1].getAvg())
		{
			stu[i+1].output();
			stu[i+1].getAvg();
		}
	}
}