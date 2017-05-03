#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <fstream.h>
int i,n;
char sort[20];
void file();
class student
{
public:
	char name[20];
	int age;
public: 
	void setName(char *n)
	{
	strcpy(name,n);
	}
	void setAge(int a)
	{
	age=a;
	}
	char *getName()
	{
	return name;
	}
	int getAge()
	{
	return age;
	}
}; 
void main()
{
	student st;
	char name[20];
	int age;
	nene:
	clrscr();
	student stu[10];
	cout << "1. insert" << endl;
	cout << "2. output" << endl;
	switch(getch())
	{
		case '1':
		clrscr();
		do
		{
	for(i=n;i>=0;i--)
	stu[i+1]=stu[i]; 
	cout << "name: ";
	cin.seekg(0);
	cin.get(name,20);
	stu[0].setName(name);
	cout << "age: ";
	cin >> age; 
	stu[0].setAge(age);
	n++;
	i++;
	cout << "\nEnter to continue...!\n" << endl;	
	}while(getch()==13); break;

		case '2': 
		clrscr();
			for(i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
		if(strcmp(stu[i].getName(),stu[j].getName())>0)
		{
			strcpy(sort,stu[i].getName());
			strcpy(stu[i].getName(),stu[j].getName());
			strcpy(stu[j].getName(),sort);
		}
		cout << "Name\tAge" << endl;
		for(i=0;i<n;i++)
		{
			cout << stu[i].getName() << "\t" << stu[i].getAge() << endl;
		} getch(); break;

	} goto nene; getch();
}

