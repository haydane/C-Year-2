#include <stdio.h>
int fibonaccy(int);
void main()
{
  int n;
  cout << "input n: ";
  cin >> n;
  cout << "Number of fibonaccy: " << fibonaccy(n);
}
int fibonaccy(int n)
{
	int sum=0;
	if(n==1||n==2)
		return 1;
	else sum=sum+fibonaccy(n-1)+fibonaccy(n-2);
			return sum;
}