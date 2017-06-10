#include <iostream.h>
class Rect 
{
	int x,y;
public:
	friend int Area(Rect &a);//non member class but can access variable from class
	Rect(int l,int w)
	{
		x=l,y=w;
	}
	void output()
	{
		cout << x << "\t" << y << endl;
	}
};
int Area(Rect &a) // definition of friend function
{
	return a.x*a.y;
}
int main()
{
	Rect R1(5,6),R2(3,4); // declaration of
	R1.output();
	R2.output();
	cout << Area(R1) << endl;
	cout << Area(R2) << endl;
	return (0); 
}
