#include <iostream.h>
template <class t1>
class num
{
public:
	int x,y;
	num(int a,int b)
	{
		x=a;
		y=b;
	}
	t1 max();
};
template <class t1>
t1 num <t1>::max()
{
	if(x>y)
		return x;
	else
		return y;
}
void main()
{
	num <int> obj1(2,1);
	cout << "Max: " << obj1.max();
}