/*Abstract class is class which exists per virtual function 
-no definition, can't make object 
-role as base class*/
#include <iostream.h>
class base
{
private: 
	int x;
	float y;
public:
	virtual void getdata() = 0; // per virtual function ,,, always =0 (abstract obj)
	virtual void display() = 0;
};
class derived1: public base 
{
private:
	int id;
	char name[20];
public:
	void getdata();
	void display();
};
class derived2: public base 
{
private:
	float height;
	float width;
public:
	void getdata();
	void display();
};
void derived1::getdata()
{
	cout << "Enter id of a student: "; 
	cin >> id;
	cout << "Enter name of student: ";
	cin.seekg(0);
	cin.get(name,15);
}
void derived1::display()
{
	cout << id << "\t" << name << "\t";
}
void derived2::getdata()
{
	cout << "Enter height of a student: ";
	cin >> height;
	cout << "Enter width of a student: ";
	cin >> width;
}
void derived2::display()
{
	cout << height << "\t" << width << "\t" << endl;
}
void main()
{
	/*base *ptr[3];
	derived1 obj1;
	derived2 obj2;
	ptr[0] = &obj1;
	ptr[1] = &obj2;
	ptr[0] -> getdata();
	ptr[1] -> getdata();
	ptr[0] -> display();
	ptr[1] -> display();*/
	base *ptr[2];
	derived1 obj1[10];
	derived2 obj2[10];
	int n;
	cout << "Enter n: ";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		ptr[0]=&obj1[i];
		ptr[1]=&obj2[i];
		for(int j=0;j<2;j++)
			ptr[j]->getdata();
	} 
	for(int i=0;i<n;i++)
	{
		ptr[0]=&obj1[i];
		ptr[1]=&obj2[i];
		for(int j=0;j<2;j++)
			ptr[j]->display();
	}
}  