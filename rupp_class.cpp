#include <iostream.h>
#include <conio.h>
class sample
{
	int data1,data2;
public:
	sample()
	{
		data1=20; data2=30;
	}
	sample(int one,int two)
	{
			data1=one;
			data2=two;
	}
	sample(sample &other)
	{
		data1=other.data1;
		data2=other.data2;
	}
	void output()
	{
		cout << "data1: " << data1 << endl;
		cout << "data2: " << data2 << endl;
	}
};
void main()
{
	sample b1;
	sample b2(22,33);
	sample b3(b1);
	sample b4=b3;
	sample b5 = sample(5,12);
	cout << "inititalization of b1: ";
	b1.output();
	cout << "\ninitialzation of b2: ";
	b2.output();
	cout << "\ninitialization of b3: ";
	b3.output();
	cout << "\ninitialization of b4: ";
	b4.output();
	cout << "\ninitialization of b5: ";
	b5.output();
	cout << "\ninitialization of noname object: ";
	sample(55,555).output();
}