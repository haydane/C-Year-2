/*Array base class = amount of derived class*/
#include <iostream.h>
class base
{
public:
	float width,heigh;
	virtual void output() = 0;
	base()
	{
		width=12;
		heigh=10;
	}
};
class derived1 : public base
{
public:
	void output();
};
class derived2 : public base
{
public:
	void output();
};
class derived3 : public base
{
public: 
	void output();
};
void derived1::output()
{
	cout << "Retiangle: " << width*heigh;
}
void derived2::output()
{
	cout << "\nTriangle: " << (width*heigh)/2;
}
void derived3::output()
{
	cout << "\nSquare: " << (width*width);
}
void main()
{
	int i,n,j;
	base *p[3];
	derived1 obj1;
	derived2 obj2;
	derived3 obj3;
	p[0]=&obj1;
	p[1]=&obj2;
	p[2]=&obj3;

	cout << "width: " << p[0]->width << endl;
	cout << "heigh: " << p[1]->heigh << endl;
	p[0]->output();
	p[1]->output();
	p[2]->output();
}