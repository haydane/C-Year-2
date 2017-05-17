#include <iostream.h>
class test 
{
protected:
	int x;
public:
	test(int a=0):x(a){}
	test(test &t):x(t.x){}
	void in()
	{
		cout << "input x: "; cin >> x;
	}
	void out()
	{
		cout << "x: "  << x << endl;
	}
	test operator +(test &t)
	{
		return test(x + t.x);
	}
	test operator +(int a)
	{
		return test(x + a);
	}
	friend test operator +(int a,test &t)
	{
		return test(a + t.x);
	}
};
void main()
{
	test a(10);
	test b(200);
	test c;
	a.out();
	b.out();
	c.out();

	c=a+b;
	a=a+20;
	b=15+b;
	a.out();
	b.out();
	c.out();
	c=a+b+55;
	a=12+b+c;
	b=a+50+c;
	a.out();
}