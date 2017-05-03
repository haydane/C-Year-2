#include <iostream.h>
void factorial(int);
void main()
{
	int n;
 	cout << "input n Factorial: ";
 	cin >> n;
 	factorial(n);
}
void factorial(int m)
{
	int sum=0,f=1,i;
	for(i=1;i<=m;i++)
	{
		f=f*i;
		sum=sum+f;
	}
	cout << "sum of n factorial is : " << sum;
}

/*int factorial(int n)
{
	int i,sum=0;
	if(n<=1)
		return 1;
	else
	{
		for(i=1;i<=n;i++)
 		sum=sum+(n*factorial(n-2*i));
 	}	
		return sum;
}
*/