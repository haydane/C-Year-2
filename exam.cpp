#include <iostream.h>
#include <string.h>
#include <conio.h>
class student
{
	int id,age;
	char name[20];
public:
	student()
	{
		id=1;
		strcpy(name,"lol");
		age=20;
	}
	friend void input(student &st)
	{
		cout << "ID: ";
		cin >> st.id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(st.name,20);
		cout << "Age: ";
		cin >> st.age;
	}
	friend void output(student &st)
	{
		cout << st.id << "\t" << st.name << "\t" << st.age << endl;
	}
	void static header()
	{
		cout << "ID\tName\tAge\n";
	}

};
void main()
{
	int n,i;
	student st;
	cout << "Using Constructor, means give value while running program\n";
	student::header();
	output(st);
	cout << "\nEnter to start dynamic array" << endl;
	getch();
	clrscr();
	cout << "input n: ";
	cin >> n;
	student *s = new student [n];
	for(i=0;i<n;i++)
		input(s[i]);
	student::header();
	for(i=0;i<n;i++)
		output(s[i]);
}