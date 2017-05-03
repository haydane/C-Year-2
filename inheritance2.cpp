#include <iostream.h>
class BaseClass
{
	protected:
	int i,j;
	public:
	void set(int a, int b)
	{
		i=a;
		j=b;
	}
	void show()
	{
		cout << i << " " << j << endl;
	}
};
class DerivedClass1 : public BaseClass
{
	int k;
public:
	void setk()
	{
		k=i*j;
	}
	void showk()
	{
		cout << k << endl;
	}
};
class DerivedClass2 : public DerivedClass1
{
	int m;
public:
	void setm()
	{
		m=i-j;
	}
	void showm()
	{
		cout << m << endl;
	}
};
int main()
{
	DerivedClass1 object1;
	DerivedClass2 object2;
	object1.set(2,3);
	object1.show();
	object1.setk();
	object1.showk();
	
	object2.set(3,4);
	object2.show();
	object2.setk();
	object2.setm();
	object2.showk();
	object2.showm();
	return 0;
}