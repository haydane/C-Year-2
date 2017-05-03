#include <iostream.h>
#include <string.h>
class op
{
	float inmark;
	float exmark;
public:
	op()
	{
		inmark=0;
		exmark=0;
	}
	op(float in,float ex)
	{
		inmark=in;
		exmark=ex;
	}
	void dis()
	{
		cout << inmark << '\t' << exmark << endl;
	}
	op operator+(op o)
	{
		op tmp;
		tmp.inmark = inmark + o.inmark;
		tmp.exmark = exmark + o.exmark;
		return tmp;
	}
	op operator*(op o)
	{
		op tmp;
		tmp.inmark = inmark * o.inmark;
		tmp.exmark = exmark * o.exmark;
		return tmp;
	}
	op operator/(op o)
	{
		op tmp;
		tmp.inmark = inmark / o.inmark;
		tmp.exmark = exmark / o.exmark;
		return tmp;
	}
};
void main()
{
	op o1(1,2),o2(3,4);
	o1.dis();
	o2.dis();
	op o3 = o1 + o2;
	o3.dis();
	op o4 = o1 * o2;
	o4.dis();
	op o5 = o1 / o2;
	o5.dis();
}
