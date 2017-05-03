#include <iostream.h>
#include <conio.h>
int i;
int j;
class Data
{
public:
	Data()
	{ 
		cout << "Text" << ++i << " constructed!\n";
	}
	~Data()
	{
		cout << "\nText" << ++j << " Destroyed!";
	}
};
void main()
{
	Data *p;
	int n;
	cout << "input n: ";
	cin >> n;
	clrscr(); 
	p = new Data[n];
	delete[] p;
}