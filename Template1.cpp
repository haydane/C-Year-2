#include <iostream.h>
template <class T>
class num
{
public:
	T x,y;
	num(T a, T b)
	{
		x=a;
		y=b;
	}
	T sum()
	{
		return x+y;
	}
	/*T mul()
	{
		return x*y;
	}*/
	// void sum()
	// {
	// 	cout << x+y << endl;
	// }
	// void mul()
	// {
	// 	cout <<  x*y << endl;
	// }
	//void sum();
	//T mul();
};
/*template <class T>
void num <T>::sum()
{
	cout << x+y << endl;
}*/

void main()
{
	num <int> obj1(1,2);
	num <float> obj2(2.2,1.1);
	num <char> obj3('A','C');
	//obj1.sum();
	cout << obj3.sum();
	//obj2.mul();
	//obj3.sum();
}