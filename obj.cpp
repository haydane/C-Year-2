#include <iostream.h>
class human
{
public:
	int id;
	string name;
public:
	void body()
	{
		cout << "" << name;
	}
	void head()
	{
		cout << "id: ";
		cin >> id;
	}
};
void main()
{
	human *man = new human;
	man->name="Dane\n";
	man->body();
	human *mm = new human[3];
	for(int i=0;i<3;i++)
		mm[i].head();

}