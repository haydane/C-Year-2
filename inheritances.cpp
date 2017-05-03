#include <iostream.h>
class info
{
public:
	char name[20];
	int age;
public:
	void inputInfo()
	{
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Age: ";
		cin >> age;
	}
};
class score : public info
{
public:
	int math,java;
public:
	void inputScore()
	{
	cout << "Math: "; 
	cin >> math;
	cout << "Java: ";
	cin >> java;
	}
};
class payment : public score
{
public:
	float Semester1Pay;
public:
	int static id()
	{
		int num;
		return ++num;
	}
	void inputPayment()
	{
		cout << "Semester1Pay: ";
		cin >> Semester1Pay;
	}
	void static header()
	{
		cout << "\n\nID\tName\tAge\tMath\tJava\tSemester1Pay\n";
	}
	void output()
	{
		cout << payment::id() << "\t" << name << "\t" << age << "\t" <<  math << "\t" << java << "\t" << Semester1Pay << "$" << endl;
	}
};
void main()
{
	int i,n;
	cout << "input n: ";
	cin >> n;
	payment *p = new payment[n];
		for(i=0;i<n;i++)
		{
			p[i].inputInfo();
			p[i].inputScore();
			p[i].inputPayment();
		}
			payment::header();
		for(i=0;i<n;i++)
			p[i].output();
}