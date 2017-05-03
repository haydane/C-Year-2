#include <iostream.h>
#include <string.h>
#include <fstream.h>
class info
{
private:
	char name[20],gender[7];
	int age;
public:
	friend istream &operator >> (istream &in,info &i);
	friend ostream &operator << (ostream &out,info &i);
	friend void header()
	{
		cout << "Name\tGender\tAge\n";
	}
};

istream &operator >> (istream &in,info &i)
{
	cout << "Name: ";
	in.seekg(0);
	in.get(i.name,20);
	cout << "Gender: ";
	in.seekg(0);
	in.get(i.gender,7);
	cout << "Age: ";
	in >> i.age;
	return in;
}
ostream &operator << (ostream &out,info &i)
{
	out << i.name << "\t" << i.gender << "\t" << i.age << endl;
	return out;
}

void main()
{
	int i,n;
	cout << "input n: ";
	cin >> n;
	info *fo = new info[n];
	for(i=0;i<n;i++)
		cin >> fo[i];
	clrscr();
	header();
	for(i=0;i<n;i++)
		cout << fo[i];
}