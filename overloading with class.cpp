#include <iostream.h>
class printData
{
public:
	void print(int i)
	{
		cout << "print i : " << i << endl;
	}
	void print(double f)
	{
		cout << "print float f: " << f << endl;
	}
	void print(char *c)
	{
		cout << "print char c: " << c << endl;
	}
};
void main()
{
	printData pd;
	pd.print(123);
	pd.print(24.565);
	pd.print("Hello World");

}