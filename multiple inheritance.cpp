#include <iostream.h>
#include <conio.h>
class Parent1
{
protected:
	int a;
};
class Parent2
{
protected:
	int b;
};
class Son : protected Parent1, protected Parent2
{
public:
	Son(int aa,int bb)
	{
		a=aa;
		b=bb;
	}
	void output()
	{
		cout << a+b;
	}
};
void main()
{
	Son obj1(2,3);
	obj1.output();
}