#include <iostream.h>
#include <string.h>
#include <conio.h>
class info
{
public:
	char name[20],gender[7];
	int age;
	
public:
	info(char *n,int a, char *g)
	{
		strcpy(name,n);
		age=a;
		strcpy(gender,g);
	}
	info()
	{
		cout << "name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "age: ";
		cin >> age;
		cout << "gender: ";
		cin >> gender;
	}
	/*void input()
	{
		cout << "\nName: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Age: ";
		cin >> age;
		cout << "Gender: ";
		cin.seekg(0);
		cin.get(gender,7);
	}*/
	void static header()
	{
		cout << "\nName\tAge\tGender\n";
	}
	void output()
	{
		cout << name << '\t' << age << '\t' << gender << endl;
	}
};
void main()
{
	info in2("dane",19,"female");
	info in3("Hello",29,"Male");
	info in4("World",33,"Other");
	info::header();
	in2.output();
	in3.output();
	in4.output();
	info fo;



}