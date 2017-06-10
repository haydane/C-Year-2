#include <iostream.h>
class first
{
protected:
	int x;
public:
	first(int xx=0):x(xx){}
	void output()
	{
		cout << "x: " << x << endl;
	}
	int value()
	{
		return x*x;
	}
	int halfValue()
	{
		return value()/2;
	}
};
class second : public first
{
	int y;
public:
	second(int xx=0,int yy=0):first(xx),y(yy){}
	void output()
	{
		first::output();
		cout << "y: " << y << endl;
	}
	int value()
	{
		return y*y*y;
	}
};
void main()
{
	first *obj1 = new second(5,3);
	cout << "value: " << obj1->value() << endl;
	cout << "halfValue: " << obj1->halfValue() << endl;
	obj1->output();
	second obj2(3,4);
	cout << "Value: " << obj2.value() << endl;
	cout << "halfValue: " << obj2.halfValue() << endl;
	obj2.output();
}