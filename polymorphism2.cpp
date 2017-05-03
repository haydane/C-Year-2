#include <iostream.h>
class first
{
	protected:
		float x;
	public:
		first(float a=0):x(a){}
		void output()
		{
			cout << "x: " << x << endl;
		}
		float sum()
		{
			return x+x;
		}
		float doubleSum()
		{
			return 2*sum();
		}
};
class second: public first
{
	private: 
		float y;
	public: 
		second(float a=0,float b=0):first(a),y(b){}
		void output()
		{
			first::output();
			cout << "y: " << y << endl;
		}
		float sum() 
		{
			return y+y+y;
		}
};
void main()
{
	second obj(3.0,4.0);
	cout << "sum: " << obj.sum() << endl;
	cout << "double sum: " << obj.doubleSum() << endl;
	obj.output();
	first *p = new second(5,6);
	cout << "sum: " << (*p).sum() << endl;
	cout << "double sum: " << p-> doubleSum() << endl;
	p->output();
}