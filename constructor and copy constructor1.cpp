#include <iostream.h>
class number
{
	int copy1,copy2;
	public:
		number(int n1, int n2 )
		{
			copy1=n1;
			copy2=n2;
		}
		number()
		{
			copy1=10;
			copy2=20;

		}
		number(number &send)
		{
			copy1=send.copy1;
			copy2=send.copy2;
		}
		void output()
		{
			cout << "num1: " << copy1 << endl;
			cout << "num2: " << copy2 << endl;
		}
};
void main()
{
	number obj1(1,2);
	obj1.output();
	number obj2;
	obj2.output();
	number obj3(obj1);
	obj3.output();
    number obj4(obj2);
    obj4.output();
}