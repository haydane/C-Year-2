#include <iostream.h>
int re1,re2,n,am100=0,am50=0,am20=0,am10=0,am5=0,am1=0;
void main()
{
	cout << "input Money: ";
	cin >> n;
	if(n>=100)
	{
		re1=n/100;
		n=n%100;
	}
	else if(n>=50)
	{
		re2=n/50;
		n=n%50;
	}
	else if(n>=20&&n<50)
	{
		n=n%20;
		am20++;
	}
	else if(n>=10&&n<20)
	{
		n=n%10;
		am10++;
	}
	else if(n>=5&&n<10)
	{
		n=n%5;
		am5++;
	}
	else if(n>=1&&n<5)
	{
		n=n%1;
		am1++;
	}
	cout << "100$=" << re1 << endl;
	cout << "50$=" << re2 << endl;
	cout << "20$=" << am20 << endl;
	cout << "10$=" << am10 << endl;
	cout << "5$=" << am5 << endl;
	cout << "1$=" << am1 << endl;
}