#include <iostream.h>
class hi
{
private:
	int num1,num2;
public:
	int id()
	{
		static int number;
		return ++number;
	}
	void input()
	{
		cout << "num1: ";
		cin >> num1;
		cout << "num2: ";
		cin >> num2;
	}
	void static header()
	{
		cout << "ID\tNum1\tNum2\n";
	}
	void output()
	{
		cout << id() << '\t' << num1 << '\t' << num2 << endl;
	}

};
void main()
{
	hi h[3];
	int i,n;
	cout << "input number of h:";
	cin >> n;
	for(i=0;i<n;i++)
		h[i].input();
	hi::header();
	for(i=0;i<n;i++)
		h[i].output();
}