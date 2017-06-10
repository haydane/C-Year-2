#include <iostream.h>
class aa 
{
	public:
		virtual void display()
		{
			cout << "one " << endl;
		}
};
class bb : public aa
{
	protected:
		void display()
		{
			cout << "Two " << endl;
		}
};
class cc : public bb
{
	protected:
		void display()
		{
			cout << "Three " << endl;
		}
};
class dd : public cc
{
	protected:
		void display()
		{
			cout << "Four " << endl;
		}
};
void main()
{
	aa *ptr[4];
	aa ob1;
	bb ob2;
	cc ob3;
	dd ob4;
	ptr[0]=&ob1;
	ptr[1]=&ob2;
	ptr[2]=&ob3;
	ptr[3]=&ob4;
	for(int i=0;i<4;i++)
		ptr[i]->display();
}