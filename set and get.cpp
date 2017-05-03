#include <iostream.h>
#include <string.h>
class student
{
public:
	char name[20],gender[7];
	int age;
public:
	void setInfo(char *n,char *g,int a)
	{
		strcpy(name,n);
		strcpy(gender,g);
		age=a;
	}
	void setName(char *n)
	{
		strcpy(name,n);
	}
	void setGender(char *g)
	{
		strcpy(gender,g);
	}
	void setAge(int a)
	{
		age=a;
	}
	char  *getName()
	{
		return name;
	}
	char *getGender()
	{
		return gender;
	}
	int getAge()
	{
		return age;
	}
	void in()
	{
    cout << "name: ";
	cin.seekg(0);
	cin.get(name,20);
	cout << "gender: ";
	cin.seekg(0);
	cin.get(gender,7);
	cout << "age: ";
	cin >> age;
	setInfo(name,gender,age);
	}
	void out()
	{
		cout<<getName() <<"\t"<<getGender()<<"\t"<<getAge()<<endl;
	}
	void header()
	{
		cout << "\nName\tGender\tAge" << endl;
	}
}; 
void main()
{	
	student stu;
	stu.in();
	stu.header();
	stu.out();
}