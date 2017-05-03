#include <iostream.h>
class con
{
	public: int dec;
	public:
	con::con(int num)
	{
		cout << "\nconstructor: " << num;
		dec=num;
	}
	con::~con()
	{
		cout << "\ndestructor: " << dec;
	}
};
void main()
{
	con obj1(100);
	con obj2(200);
	cout << endl; 
}