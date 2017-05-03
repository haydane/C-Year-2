#include <iostream.h>
#include <string.h>
class info
{
	private: char name[20];
			 int age;
	public : info() // constructor without parameter
			{ 
				strcpy(name,"Dane");
				age = 19;
			}
			 info(char *n,int a)  // constructor with parameter
			 {
			 	strcpy(name,n);
			 	age=a;
			 }
			 void header()
			 {
			 	cout << "\nName\tAge\n";
			 }

			 void output()
			{
				cout << name << "\t" << age << endl;
			}
class score		// nest class
{
public:
	float math,java;
public:
	score()
	{
		math=100;
		java=99;
	}
	score(int math,int java)
	{
		this->math=math;
		this->java=java;
	}
	void output1()
	{
		cout << math << "\t" << java << endl;
	}
	void header1()
	{
		cout << "\nMath\tJava\n";
	}
};

};
void main()
{
	info in; 
	in.header();
	in.output();
	info in1("nene",19);
	in1.output();
	info::score sc; // connect class 1 to class 2
	sc.header1();
	sc.output1();
	info::score sc1(10,33);
	sc1.output1();
}