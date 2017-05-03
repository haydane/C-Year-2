#include <fstream.h>
#include <iostream.h>
class per
{
public:
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
	void output()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
void main()
{
	per r;
	r.input();
	ofstream outfile("Dane.dat");
	outfile.write((char*)(&r),sizeof(r));
}