#include <iostream.h>
class AreaClass
{
public:
	double height,width;
};
class Rectangle : public AreaClass
{
public:
	Rectangle(double h, double w)
	{
		height=h;
		width=w;
	}
	double area()
	{
		return height*width;
	}
};
class Isoceles : public AreaClass
{
public:
	Isoceles(double h, double w)
	{
		height=h;
		width=w;
	}
	double area()
	{
		return 0.5*height*width;
	}
};
class cylinder : public AreaClass 
{
public:
	cylinder(double h,double w)
	{
		height=h;
		width=w;
	}
	double area()
	{
		return (2*3.1416*(width/2)*(width/2))+(3.1416*width*height);
	}
};
void main()
{
	Rectangle rectangleObject(10.0,5.0);
	Isoceles triangleObject(4.0,6.0);
	cylinder cylinderObject(3.0,4.0);
	cout << "Rectangle: " << rectangleObject.area() << endl;
	cout << "Triangle: " << triangleObject.area() << endl;
	cout << "cylinder: " << cylinderObject.area() << endl;
}