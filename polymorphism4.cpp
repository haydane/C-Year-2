#include <iostream.h>
#include <string.h>
class iid
{
protected:
	int id,age;
	char name[20];
public:
	virtual void input()
	{
		cout << "ID: ";
		cin >> id;
	}
	virtual void output()
	{
		cout << id << "\t";
	}
};
class sname: public iid
{
public:
	void input()
	{
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
	}
	void output()
	{
		cout << name << "\t";
	}
};
class age : public sname
{
public:
	void input()
	{
		cout << "Age: ";
		cin >> age;
	}
	void output()
	{
		cout << age << "\t";
	}
};
void main()
{
	iid *ptr[3];
	iid obj0;
	sname obj1;
	age obj2;
	ptr[0]=&obj0;
	ptr[1]=&obj1;
	ptr[2]=&obj2;
	for(int i=0;i<3;i++)
		ptr[i]->input();
	cout << "ID\tName\tAge\n";
	for(int i=0;i<3;i++)
		ptr[i]->output();
}