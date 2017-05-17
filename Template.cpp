/*Tempale is a stardard for doing different tasks*/
#include <iostream.h> 
#include <string.h> // template definition of swap();
template <class T> // values passed on by reference
void swap(T x, T y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
	cout<< x << "\t" << y << endl;
}
void main()
{
	int n1=10,n2=20;
	char ch1='B',ch2='A';
	double n3=11.11,n4=22.22;
	char *s1 = "Hello",*s2 = "World";
	swap(n1,n2);
	swap(n3,n4);
	swap(ch1,ch2);
	swap(s1,s2);
}