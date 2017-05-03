#include <iostream.h>
class oop
{
	float x,y,z;
public:
	oop (){};
	oop(float a,float b, float c)
	{	
		x=a;
		y=b;
		z=c;
	}
	oop operator+(oop &p)
	{
		oop tmp;
		tmp.x=x+p.x;
		tmp.y=y+p.y;
		tmp.z=z+p.z;
		return tmp;
	}
	oop operator-(oop &p)
	{
		oop tmp;
		tmp.x=x-p.x;
		tmp.y=y-p.y;
		tmp.z=z-p.z;
		return tmp;
	}
	oop operator*(oop &p)
	{
		oop tmp;
		tmp.x=x*p.x;
		tmp.y=y*p.y;
		tmp.z=z*p.z;
		return tmp;
	}
	oop operator/(oop &p)
	{
		oop tmp;
		tmp.x=x/p.x;
		tmp.y=y/p.y;
		tmp.z=z/p.z;
		return tmp;
	}
	void display()
	{
		cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
	}
};
void main()
{
	oop obj1(1,2,3),obj2(1,2,3);
	oop obj3,obj4,obj5,obj6;
	obj3 = obj1 + obj2;
	obj4 = obj1 - obj2;
	obj5 = obj1 * obj2;
	obj6 = obj1 / obj2;
	obj3.display();
	obj4.display();
	obj5.display();
	obj6.display();
}