#include <iostream.h>
#include <string.h>
class student
{
	public: 
		int id,age;
		float sc,java,cpp,vba;
		char name[20];
	public:
		void info();
		char *getName();
		void output();
		void static header()
		{
			cout << "ID\tName\tAge\tJava\tCPP\tVBA\tScore\n";
		}
};
void student::info()
{
	cout << "ID: ";
	cin >> id;
	cout << "Name: ";
	cin.seekg(0);
	cin.get(name,20);
	cout << "Age: ";
	cin >> age;
	cout << "Java: ";
	cin >> java;
	cout << "CPP: ";
	cin >> cpp;
	cout << "VBA: ";
	cin >> vba;
	sc= java+cpp+vba;
}
char *student::getName()
{
	return name;
}

void student::output()
{
	cout << id << '\t' << name << '\t' << age << '\t' << java << '\t' << cpp << '\t' << vba << '\t' << sc << endl;
}
void sort(student st[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(st[i].getName(),st[j].getName())>0)
			{
				student d=st[i];
				st[i]=st[j];
				st[j]=d;
			}
}	
void main()
{
	student stu[10];
	int i,n;
	cout << "input n:";
	cin >> n;
	for(i=0;i<n;i++)
	{
		stu[i].info();mN
	}
	student::header();
	sort(stu,n);
	for(i=0;i<n;i++)
		stu[i].output();


}