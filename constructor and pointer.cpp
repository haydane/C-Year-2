#include <iostream.h>
class human
{
	string *name;
	int *age;
public:
	human(string iname,int iage)
	{
		name = new string;
		age = new int;
		*name = iname;
		*age = iage;
	}
	void dis()
	{
		cout << "My name is " << *name << " And " << *age << " years old!\n";
	}
	~human()
	{
		delete name;
		delete age;
		cout << "Memory was released! " << endl;
	}
};
void main()
{
	human *obj1 = new human("Dane",19);
	obj1->dis();
	delete obj1;
}