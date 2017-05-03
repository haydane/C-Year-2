#include <iostream.h>
#include <string.h>
#include <conio.h>
class student
{
public:
	int id,age;
	char name[20],sex;
public:
	static void heading()
	{
		cout << "\nID\tName\tSex\tAge\n";
		cout << "-------------------------------\n";
	}
	student()
	{
		id=1;
		strcpy(name,"Dane");
		sex='F';
		age=19;
	}
	void input();
	void output();
};
void search(student s[],int &n)
{
	int i,k=0;
	char name[20];
	cout << "\nEnter name to search: ";
	cin.seekg(0);
	cin.get(name,20);
	student::heading();
	for(i=0;i<n;i++)
		if(strcmp(s[i].name,name)==0)
		{
			k=1;
			s[i].output();
		}
		if(k==0)
			cout << "file not found";
}
void del(student s[],int &n)
{
	int i,j;
	char name[20];
	cout << "\nEnter name to delete: ";
	cin.seekg(0);
	cin.get(name,20);
	for(i=0;i<n;i++)
		if(strcmp(s[i].name,name)==0)
		{
			for(j=i;j<n;j++)
				s[j]=s[j+1];
			n--;
			i--;
		}
}
void student::input()
{
	cout << "ID: ";
	cin >> id;
	cout << "Name: ";
	cin.seekg(0);
	cin.get(name,20);
	cout << "Age: ";
	cin >> age;
	cout << "Sex: ";
	cin >> sex;
}
void student::output()
{
	cout << id << "\t" << name << "\t" << age << "\t" << sex << "\t" << endl;
}
void main()
{
	student stu[20];
	int i,n;
	char ch;
	do
	{
	clrscr();
	nene:
		cout << "1. Input" << endl;
		cout << "2. Output" << endl;
		cout << "3. Delete" << endl;
		cout << "4. Search" << endl;
		cout << "5. Esc to Exit" << endl;  
			ch=getch();
				switch(ch)
				{
					case '1': 
					cout << "Enter n: ";
					cin >> n;
					for(i=0;i<n;i++)
						stu[i].input();
						clrscr(); break;
					case '2':
					try
					{
					student::heading();
					for(i=0;i<n;i++)
						stu[i].output(); 
					}
					catch(int e)
					{
						cout << "no data" << e << endl;
					}
				     break; 
					case '3': 
					del(stu,n); break;
					case '4': search(stu,n); break;
				    }
	}while(getch()!=27);  exit (0); goto nene; 
} 