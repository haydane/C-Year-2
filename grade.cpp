#include <iostream.h>
void avg(int,int,int);
void gr(char);
void main()
{

	int m,k,e;
	cout << "math: ";
	cin >> m;
	cout << "Khmer: ";
	cin >> k;
	cout << "english: ";
	cin >> e;
	avg(m,k,e);
	gr(avg(m,k,e));
}
void avg(int a,int b,int c)
{
 	 float av=(a+b+c)/3.0;
 	 cout << "average: " << av;
}
void gr(char a)
{
	if(a==100)
		cout << "A+";
	else if(a<=80&&a>=99)
		cout << "B";
	else if(a<=50&&a>=79)
		cout << "C";
	else if(a<=49)
		cout << "F";
}