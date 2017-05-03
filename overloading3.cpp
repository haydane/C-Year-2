#include <iostream.h>
class vector
{
private:
	int x,y,z;
public:
	void setValues (int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	vector operator+(vector p)
	{
		x=x+p.x;
		y=y+p.y;
		z=z+p.z;
		return *this;
	}
	vector operator-(vector p)
	{
		x=x-p.x;
		y=y-p.y;
		z=z-p.z;
		return *this;
	}
	void display()
	{
		cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
	}
};
void main()
{
	vector v1,v2,v3,v4;
	v1.setValues(1,1,1);
	v2.setValues(2,2,2);
	//v3.setValues(4,4,6);
	v3 = v1 + v2;
	v4 = v1 + v2;
	cout << "components of v1 are: ";
	v3.display();
	cout << "components of v3 are: ";
	v4.display();
	/*cout << "components of v2 are: ";
	v2.display();*/
} 