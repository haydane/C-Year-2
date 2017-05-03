#include <iostream.h>
#include <conio.h>
#include <dos.h>
void main()
{	
	int static i;
	char ch;
	string tmp,name;
	a:
	gotoxy(30,10);
	cout << "Username: ";
	cin >> name;
	gotoxy(30,11);
	cout << "password: "; 
	while((ch=getch())!=13)
	{
	cout << '*';
	tmp+=ch;
	}
	if(name=="Dane"&&tmp=="toor")
	{
		cout << "\n\n\t\t\t----Congratulation----";
		// cout << "\n\nYour password is: " << tmp;
		tmp="";
		clrscr();
		gotoxy(30,12);
		cout << "loading...\n";
		for(i=0;i<3;i++)
		{
			gotoxy(30,13);
			cout << (char)176;
			sleep(2);
		}
		for(i=0;i<3;i++)
		{
			gotoxy(30+i,13);
			cout << (char)176;
			sleep(1);
		}
		for(i=0;i<25;i++)
		{
			gotoxy(30+i,13);
			cout << (char)176;
		}


	}
	else
	{
		cout << "\n\n\t\t\t\tTry Again"; 	
		tmp="";
	}  getch(); clrscr();  goto a;
}