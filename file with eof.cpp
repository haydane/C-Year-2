#include <fstream.h>
#include <iostream.h>
class per
{
public:
	char name[80];
	int age;
public:
	static void header()
	{
		cout << "\nName\tAge\n";
	}
	void output()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
void main()
{
	per er;
	ifstream infile("Person.DAT",ios::binary);
	while(1)
	{
		infile.read((char*)(&er),sizeof(per));
		if(infile.eof()) break;
		er.output();
	}
	infile.close();
}