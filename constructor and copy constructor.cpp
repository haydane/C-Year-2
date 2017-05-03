#include <iostream.h>
class con
{
public: int b;
	public:
		con(int a)
		{
			cout << "a: " << a;
			b=a;
		}
	con(con &a) // function "copy constructor"
	{
		b=a.b; 	
		cout << "b: " << b;
	}
};
void main()
{
	con obj1(10);
	con obj2(obj1);

}