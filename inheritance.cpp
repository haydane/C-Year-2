#include <iostream.h>
class B
{
protected:
	int m;
};
class d : protected B
{
public:
	int a,n;
	int setvalue()
	{
		return m=a;
	}
};
class D1 : private d
{
public:
	int b;
	int setvalue1()
	{
		return m=b;
	}
};
void main()
{
	d C;
	C.a=4;
	C.n=4;
	D1 r;
		r.b=6;
	int product= C.a*C.n;
	cout << "product of members of B and D= " << product << endl;
	cout << "Sum of squares of members of B & D= " << C.n*C.n + C.a*r.b<< endl;
}