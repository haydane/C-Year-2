#include <iostream.h>
class con
{
private:
	string *name;
	int *age;
public:
	con(string n,int a)
	{
		name = new string;
		age = new int;
		*name = n;
		*age = a;
	}
	~con()
	{
		delete name;
		delete age;
		cout << "\nall memories are released...";
	}
	void dis()
	{
		cout << "My name is " << *name << " And I am " << *age << " years old" << endl; 
	}
};
void main()
{
	con obj1("Dane",19);
	obj1.dis();
}