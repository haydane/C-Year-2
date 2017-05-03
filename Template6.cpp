#include <iostream.h>
template <class t>
class base
{
private:
	t x,y;
public:
	//template <class t>
	void input()
	{
		cin >> x;
		cin >> y;
	}
};
void main()
{
	base<int> obj1;
	obj1.input();
}