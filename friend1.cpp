#include <iostream.h>
#include <conio.h>
class sample
{
private:
	int x;
public:
	void getdata();
	friend void display(sample ob)
	{
		cout << "Enter number is : " << ob.x << endl;
	}
};
void sample::getdata()
{
	cout << "Enter a value for x : ";
	cin >> x;
}
void main()
{
	sample obj1;
	obj1.getdata();
	display(obj1);
}