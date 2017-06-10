#include <iostream.h>
#include <fstream.h>
class base
{
public:
	char name[20];
	int age;
public:
	friend ostream &operator << (ostream &out,base &se);
	friend istream &operator >> (istream &in,base &se);
};
ofstream &operator << (ofstream &out,base &se)
{
	out << se.name << endl;
	out << se.age << endl;
	return out;
}
istream &operator >> (istream &in,base &se)
{
	cout << "name: ";
	in.seekg(0);
	in.get(se.name,20);
	cout << "age: ";
	in >> se.age;
	return in;
}
void main()
{
	base se[20];
	ifstream in;
	in.open("base.bin",ios::binary);
	if(in.fail())
		cout << "cannot open file";
	for(int i=0;i<2;i++)
	{
		in.read((char*)&se,2*sizeof(base));
		cout << se[i];
	}
}