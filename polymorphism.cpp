#include <iostream.h>
Polymorphism is a group of object that execute on methods use only object to access any methods
OOP has 3 parts
1. Ecapsulation
2. Overloading
3. Polymorphism
virtual is a function uses as overwrite function for only BASE CLASS

------------------------------------------------------
class B
{
public:
	void display()
	{
		cout << "Are you going to learn C++" << endl;
	}
};

class D: public B
{
 public:
	void display()
	{
		cout << "I'm also learning C++" << endl;
	}
};

int main()
{
	B b; //b is an object of base class B  
	D d; //d is a object of base class D
	B *bptr; //pointer to class B
	bptr = &b; //pointer initialization of pointer to class B
	bptr -> display();  // function called by poin1ter
	bptr = &d; // the pointer is assigned address of d
	bptr -> display();
	return 0;
}
------------------------------------------------------------
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
---------------------------------------------------
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
	public:
		void display()
		{
			cout << "Two " << endl;
		}
};
class cc : public bb
{
	public:
		void display()
		{
			cout << "Three " << endl;
		}
};
class dd : public cc
{
	public:
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
-----------------------------------------------------

#include <iostream.h>
#include <string.h>
class iid
{
protected:
	int id,age;
	char name[20];
public:
	virtual void input()
	{
		cout << "ID: ";
		cin >> id;
	}
	virtual void output()
	{
		cout << id << "\t";
	}
};
class sname: public iid
{
public:
	void input()
	{
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
	}
	void output()
	{
		cout << name << "\t";
	}
};
class age : public sname
{
public:
	void input()
	{
		cout << "Age: ";
		cin >> age;
	}
	void output()
	{
		cout << age << "\t";
	}
};
void main()
{
	iid *ptr[3];
	iid obj0;
	sname obj1;
	age obj2;
	ptr[0]=&obj0;
	ptr[1]=&obj1;
	ptr[2]=&obj2;
	for(int i=0;i<3;i++)
		ptr[i]->input();
	cout << "ID\tName\tAge\n";
	for(int i=0;i<3;i++)
		ptr[i]->output();
}

----------------------------------------------------

