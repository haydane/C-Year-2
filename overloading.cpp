#include <iostream.h>
int area(int side)
{
	return side*side;
}
int area(int l, int b)
{
	return l*b;
}
void main()
{
	int (*p1)(int);
	int (*p2)(int,int);
	p1=area;
	p2=area;
	cout << "Address of area(int) = " << (unsigned int)p1 << endl;
	cout << "Address of area(int,int) = " << (unsigned int)p2 << endl;
	cout << "Invoking area(int) via p1 = " << p1(20) << endl;
	cout << "Invoking area(int,int) via p2 = " << p2(10,20) << endl;

}