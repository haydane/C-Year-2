#include <iostream.h>
class object
{
public:
	virtual void read()=0;
	virtual void print()=0;
	virtual double area()=0;
};
class rectangle: public object
{
private:
	double length,width;
public:
	rectangle(double=2,double=1);
	virtual void read()=0;
	virtual void print()=0;
	virtual void area()=0;
};
class circle: public object
{
	double raduis;
public:
	circle(double=1);
	virtual void read()=0;
	virtual void print()=0;
	virtual void area()=0;
};
rectangle::rectangle(double l,double w)
{
	length=l;
	width=w;
}
double rectangle::area()
{
	return length*width;
}
void rectangle::read()
{
	cout << "input length: ";
	cin >> length;
	cout << "input width: ";
	cin >> width;
}
void rectangle::print()
{
	cout << "rectangle: " << "\t" << length << "\t" << width << area() << endl;
}
circle::circle(double r)
{
	raduis=r;
}
void circle::read()
{
	cout << "raduis: "; 
	cin >> raduis;
}
void circle::print()
{
	cout << "circle: " << raduis << "\t" << area() << endl;
}
double circle::area()
{
	return 3.14*raduis*raduis;
}
void main()
{
	object *a[8]=
	{
		new rectangle(14.5,5.5),new circle(15.55),
		new circle(23.45),new rectangle(9.5,4.45),
		new circle(15.0),new rectangle(13.4,5.5),
		new circle(33.25), new circle(25.25)
	};
	for(int k=0;k<8;k++)
		a[k]->print();
}