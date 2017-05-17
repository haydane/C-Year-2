#include <iostream.h>
#include <conio.h>
#include <string.h>
class person
{
protected:
	int id;
	char name[20],sex;
};
class acadamic
{
protected:
	char university[40];
	int year;
};
class student : protected person, protected acadamic
{
private:
	int average;
public:
	/*student(int i, char *n, char s, char *u, int y)
	{
		id=i;
		strcpy(name,n);
		strcpy(sex,s);
		strcpy(university,u);
		year=y;
	}*/
	void input()
	{
		cout << "ID: "; 
		cin >> id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Sex: ";
		cin >> sex;
		cout << "University: ";
		cin.seekg(0);
		cin.get(university,40);
		cout << "Year: ";
		cin >> year;
		cout << "average: ";
		cin >> average;
	}
	void static header()
	{
		cout << "\nID\tName\tSex\tUni\tYear\tAvg\n";
	}
	void output()
	{
		cout << id << "\t" << name << "\t" << sex << "\t" << university << "\t";
		cout << year << "\t" << average << "\n";
	}
};
void main()
{
	int i,n;
	cout << "input number of studnet: ";
	cin >> n;
	student *obj1 = new student[n];
	for(i=0;i<n;i++)
	obj1[i].input();
	getch();
	clrscr();
	student::header();
	for(i=0;i<n;i++)
	obj1[i].output();
}