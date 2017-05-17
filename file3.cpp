#include <iostream.h>
#include <fstream.h>
class per
{
public:
	char name[80];
	short age;
public:
	static void header()
	{
		cout << "\nName\tAge\n";
		cout << "==============\n";
	}
	void output(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
void main()
{
	per er;
	ifstream infile("son.DAT",ios::binary|ios::in|ios::ate);
	long n = infile.tellg()/sizeof(per);
	per::header();
	for(int i=n-1;i>=0;i--)
	{
		infile.seekg((i)*sizeof(per),ios::beg);
		infile.read((char*)(&er),sizeof(per));
		er.output();
	}
	infile.close();
}