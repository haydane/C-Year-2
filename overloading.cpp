#include <iostream.h>
class Vector
{
	int x,y,z;
public:
	Vector(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}
	Vector(){}; // Empty or Default Constructor
	Vector operator+ (Vector s)
	{
		x = x + s.x;
		y = y + s.y;
		z = z + s.z;
		return Vector (x,y,z);
	}
	void Dis()
	{
		cout << "x component = " << x << endl;
		cout << "y component = " << y << endl;
		cout << "z component = " << z << endl;
	}
};

void main()
{
	Vector obj1(2,4,6);
	Vector obj2(3,5,8);
	Vector obj3;
	obj3 = obj1 + obj2;
	obj3.Dis();
}