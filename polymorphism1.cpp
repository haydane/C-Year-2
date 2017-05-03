#include <iostream.h>
class person
{
public:
	virtual void introduce()
	{
		cout << "Hi! from person :)" << endl;
	}
};
class ghost : public person
{
public:
	void introduce()
	{
		cout << "Hi! from ghost xD " << endl;
	}
};
class student : public ghost
{	
public:
	void introduce()
	{
		cout << "Hi! from student LOL " << endl;
	}
};
class CsStudent: public student
{
	void introduce()
	{
		cout << "Hello from CsStudent :D" << endl;
	}
};
	/*void output(person &p)
	{
		p.introduce();
	}*/
void main()
{
	person son;
	ghost st;
	CsStudent nt;
	person *p;
	p=&son; 
	p -> introduce();
	p=&st;
	p -> introduce();
	p=&nt;
	p -> introduce();
}