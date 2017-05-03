#include <iostream.h>
#include <string.h>
class head
{
private:
	int n0,n1,n2;
public:
	/*head(int in0,int in1,int in2)
	{
		n0=in0;
		n1=in1;
		n2=in2;
	}*/
	head():n0(0),n1(0),n2(0){}
	void val(int in0,int in1,int in2)
	{
		n0=in0;
		n1=in1;
		n2=in2;
	}
	void dis()
	{
		cout << "\nn0 : " << n0 << "\tn1: " << n1 << "\tn2: " << n2 << endl;
	}
	head operator+(head p)
	{
		n0 = n0 + p.n0;
		n1 = n1 + p.n1;
		n2 = n2 + p.n2;
		return *this;
	}
	head operator-(head p)
	{
		n0 = n0 - p.n0;
		n1 = n1 - p.n1;
		n2 = n2 - p.n2;
		return *this;
	}
	head operator*(head p)
	{
		head tmp;
		tmp.n0 = n0 * p.n0;
		tmp.n1 = n1 * p.n1;
		tmp.n2 = n2 * p.n2;
		return tmp;
	}
};
void main()
{
	/*head obj0(5,5,5),obj1(1,1,1);
	head obj2 = obj0 - obj1;
	obj2.dis();*/
	head obj0;
	obj0.val(5,5,5);
	head obj1;
	obj1.val(2,2,2);
	head obj2 = obj0 + obj1;
	obj2.dis();
	head obj3;
	obj3 = obj0 * obj1;
	obj3.dis();
}