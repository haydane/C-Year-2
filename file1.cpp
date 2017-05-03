#include <iostream.h>
#include <fstream.h>
class per{
private:
	char name[80];
	short age;
public:
	void input()
	{
		cout << "Name: ";	
		cin >> name;
		cout << "Age: ";	
		cin >> age;
	}
/*	void output()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}*/
};
void main()
{
	per er[20];
	for(int i=0;i<3;i++)
		er[i].input();
	ofstream outfile("son.DAT",ios::binary);
	outfile.write((char*)(&er),3*sizeof(per));
	outfile.close();
}