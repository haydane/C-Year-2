#include <iostream.h>
#include <string.h>
template <class t>
class cuboID
{
public:
	t x,y,z;
	cuboID(t l,t w, t h)
	{
		x=l;
		y=w;
		z=h;
	}
	t surface_area();
	t volume();
}; 

template <class t>
t cuboID <t>::surface_area()
{
	return 2*(x*y + y*z+ z*x);
}

template <class t>
t cuboID <t>::volume()
{
	return x*y*z;
}
void main()
{
	cuboID <int> c1(1,2,3);
	cuboID <double> c2(2.2,4.2,6.5);
	cout << "volume of c1 = " << c1.volume() << endl;
	cout << "volume of c2 = " << c2.volume() << endl;
	cout << "surface_area of c1 = " << c1.surface_area() << endl;
	cout << "surface_area of c2 = " << c2.surface_area() << endl;
}