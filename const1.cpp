#include <iostream.h>
class num
{
	protected:
		int aa,bb;
	public:
		num(int a,int b):aa(a),bb(b){}
		void dis()
		{
			cout << aa << '\t' << bb << endl;
		}
};
void main()
{
	num m(1,2);
	m.dis();
}