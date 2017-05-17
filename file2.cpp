#include <iostream.h>
#include <fstream.h>
class per{
private:
	char name[80];
	short age;
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
	per er[20];
	ifstream infile("son.DAT",ios::binary);
	infile.read((char*)(&er),3*sizeof(per));
	for(int i=0;i<3;i++)
		er[i].output();
	infile.close();
}