#include <iostream.h>
double fibonaccy(int);
void main()
{
  int n;
  cout << "input n: ";
  cin >> n;
  cout << "Number of fibonaccy: " << fibonaccy(n);
}
double fibonaccy(int n)
{
	int sum;
	if(n==1||n==2)
		return (1);
	else sum=fibonaccy(n-1)+fibonaccy(n-2);
			return sum;
}