#include <iostream.h>

class threeD
{
	int x,y,z;
public:
	threeD()
	{
		x=y=z=0;
	}
	threeD(int i,int j,int k)
	{
		x=i;
		y=j;
		z=k;
	}
	threeD operator +(threeD op2);
	threeD operator =(threeD op2);
	threeD operator -(threeD op2);
	void show();
};

threeD threeD::operator -(threeD op2)
{
	threeD temp;
	temp.x=x-op2.x;
	temp.y=y-op2.y;
	temp.z=z-op2.z;
	return temp;
}

threeD threeD::operator +(threeD op2)
{
	threeD temp;
	temp.x=x+op2.x;
	temp.y=y+op2.y;
	temp.z=z+op2.z;
	return temp;
}

threeD threeD::operator =(threeD op2)
{
	threeD tmp;
	tmp.x=op2.x;
	tmp.y=op2.y;
	tmp.z=op2.z;
	return tmp;
}

void threeD::show()
{
	cout << x << ",";
	cout << y << ",";
	cout << z << endl;
}
void main()
{
	threeD a(1,2,3);
	threeD b(10,10,10);
	threeD c,d,e;
	cout << "Original value of a: ";
	a.show();
	cout << "Original value of b: ";
	b.show();
	c=a-b;
	d=a+b;
	e=a;
	cout << "a-b: ";
	c.show();
	cout << "a+b: ";
	d.show();
	cout << "e=a: ";
	e.show();
}