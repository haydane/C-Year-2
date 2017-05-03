#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include "ioItem.h"
void main()
{	
	x:
	int static i;
	int y=0;
	char ch;
	string tmp,name;
	login:
	clrscr();
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
			gotoxy(30+i,13);
			cout << (char)176;
			sleep(1);
		}
		for(i=0;i<20;i++)
		{
			gotoxy(30+i,13);
			cout << (char)176;
		}
		for(i=0;i<2;i++)
		{
			gotoxy(30+i,13);
			cout << (char)176;
			sleep(1);
		}
	 	label:
		clrscr();
		gotoxy(30,5);
	printf("1. input data\n");
	gotoxy(30,6);
	printf("2. output data\n");
	gotoxy(30,7);
	printf("3. Delete data\n");
	gotoxy(30,8);
	printf("4. Update data\n");
	gotoxy(30,9);
	printf("5. Esc to logout\n");
	switch(getch())
	{
		case '1': input(); break;
		case '2': output(); break;
		case '3': del(); break;
		case '4': update(); break;
		case '5': goto login; break;
	}
	 getch(); goto label;
	} 
	else
	{
		cout << "\n\n\t\t\t\tTry Again"; getch();	
		tmp="";
		goto x;
	}  clrscr(); 
}