#include <iostream.h>
#include <conio.h>
void main()
{
	int i;
	gotoxy(15,2);
	for(i=0;i<20;i++)
		cout << char(205);
	gotoxy(15,2);
	cout << char(201);
	gotoxy(20,6);
	cout<< "Hello World";
	for(i=3;i<10;i++)
	{
		gotoxy(15,i);
		cout << char(186);
	}
	gotoxy(35,2);
	cout << char(187);
	for(i=3;i<10;i++)
	{
		gotoxy(35,i);
		cout << char(186);
	}
	gotoxy(15,10);
	cout << char(200);
	for(i=16;i<35;i++)
	{
		gotoxy(i,10);
		cout << char(205);
	}
	gotoxy(35,10);
	cout << char(188);

}