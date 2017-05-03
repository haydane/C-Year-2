#include <iostream.h>
template <class t>
class number
{
public:
	t x,y;
	number(t a, t b)
	{
		x=a;
		y=b;
	}
	t max();
	t min();
};

template <class t>
t number <t>::max()
{
	if(x>y)
		return x;
	else 
		return y;
}

template <class t>
t number <t>::min()
{
	if(x<y)
		return x;
	else 
		return y;
}

void main()
{
	number <int> n1(1,2);
	number <double> n2(3.4,1.2);
	//number <char> n3(A,B);
	cout << "max: " << n1.max() << endl;
	cout << "min: " << n1.min() << endl;
	cout << "max: " << n2.max() << endl;
	cout << "min: " << n2.min() << endl;
	//cout << "max: " << n3.max() << endl;
	//cout << "min: " << n3.min() << endl;
}
