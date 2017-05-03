#include <iostream.h>
class info
{
	char name[20];
	int age;
public:
	void input()
	{
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Age: ";
		cin >> age;
	}
	friend void output(info &f)
	{
		cout << f.name << "\t" << f.age << endl;
	}
	friend void header()
	{
		cout << "\nName\tAge\n";
	}
};
void main()
{
	info fo[2];
	for(int i=0;i<2;i++)
		fo[i].input();
	header();
	for(int i=0;i<2;i++)
		output(fo[i]);
}