#include <iostream.h>
#include <conio.h>
	int n,i;
	int x=0,j;

void d()
{
	// if i < n answer is negative of n 
	// else answer is (i-(2n))+1
	cout << ">" << endl;
	cout << "i: ";
	cin >> i;
	cout << "i>: ";
	cin >> n;
	cout << "i--";
	for(j=i;j>n+1;j--)
		x=x+1;
	if(x>n)
		cout << "\nn+" << n-x;
	else if(x==n)
		cout << "\nn";
	else
		cout << "\nn" << n-x;
}
void c()
{
	// if i < n answer is negative of n 
	// else answer is (i-(2n))+2
	cout << ">=" << endl;
	cout << "i: ";
	cin >> i;
	cout << "i>=: ";
	cin >> n;
	cout << "i--";
	for(j=i+1;j>=n;j--)
		x=x+1;
	if(x>n)
		cout << "\nn" << x-n;
	else if(i==n)
		cout << "\nn";
	else
		cout << "\nn+" << x-n;	
}
void b()
{
	// if i > n answer is negative of n
	// answer is i-1 then change sign
	cout << "<" << endl;
	cout << "i: ";
	cin >> i;
	cout << "i<=: ";
	cin >> n;
	cout << "i++";
	for(j=i;j<n+1;j++)
		x=x+1;
	if(x>n)
		cout << "\nn+" << x-n;
	else if(x==n)
		cout << "\nn";
	else
		cout << "\nn" << x-n;
}
void a()
	{
		// if i > n answer is negative of n
		// else answer is i-2 then change sign
	cout << "<=" << endl;
	cout << "i: ";
	cin >> i;
	cout << "i<=: ";
	cin >> n;
	cout << "i++";
	for(j=i;j<=n+1;j++)
		x=x+1;
	if(x>n)
		cout << "\nn+" << x-n;
	else if(x==n)
		cout << "\nn";
	else
		cout << "\nn" << x-n;
	}

void main()
{
	nene:
	cout << "\n1. >" << endl;
	cout << "2. >=" << endl;
	cout << "3. <=" << endl;
	cout << "4. < "<< endl;
	switch(getch())
	{
		case '1':clrscr(); d(); break;
		case '2':clrscr(); c(); break;
		case '3':clrscr(); a(); break;
		case '4':clrscr(); b(); break;
	}
	 getch(); clrscr(); goto nene;
}
