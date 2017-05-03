#include <iostream.h>
void main()
{
	int i=0,n=0;
	int num,x;
	int re[10];
	cout << "num: ";
	cin >> num;
	do
	{
		x=num%10;
		re[i]=x;
		num=num/10;
	  i++;
	  n++;
	}while(num!=0);
	cout <<  "Reverse Number is : ";
	for(i=0;i<n;i++)
		cout << re[i];
}