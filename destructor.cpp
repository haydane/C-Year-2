#include <iostream.h>
class myclass
{
public: 
	int who;
	myclass::myclass(int id)
{
	cout << "initializing: " << id << endl;
	who=id;
}// constructor
	myclass::~myclass()
{
	cout << "destructing: " << who  << endl;
} // destructor
};

void main()
{
	myclass obj1(4);
	myclass obj2(3);
}