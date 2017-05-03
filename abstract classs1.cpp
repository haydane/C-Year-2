#include <iostream.h>
class base
{
protected:
	int id;
	char name[20];
	float width,heigh;
public:
	virtual void input() = 0;
	virtual void output() = 0;
};
class stuData : public base
{
public:
	void input();
	void output();
};
class stuType : public base
{
public:
	void input();
	void output();
};
void stuData::input()
{
	cout << "ID: ";
	cin >> id;
	cout << "Name: ";
	cin.seekg(0);
	cin.get(name,20);
}
void stuData::output()
{
	cout << id << "\t" << name << "\t";
}
void stuType::input()
{
	cout << "Width: ";
	cin >> width;
	cout << "heigh: ";
	cin >> heigh;
}
void stuType::output()
{
	cout << width << "\t" << heigh << endl;
}
void main()
{
	base *p[10];
	stuData obj1[10];
	stuType obj2[20];
	int i,j,n;
	cout << "input n: ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		p[0]=&obj1[i];
		p[1]=&obj2[i];
		for(j=0;j<2;j++)
			p[j]->input();
	}
	cout << "\nID\tName\tWidth\tHeigh\n";
	for(i=0;i<n;i++)
	{
		p[0]=&obj1[i];
		p[1]=&obj2[i];
		for(j=0;j<2;j++)
			p[j]->output();
	}
}