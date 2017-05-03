#include <iostream.h>
#include "ioHeader.h"
void main()
{
	nene:
	clrscr();
	cout << "1. input" << endl;
	cout << "2. output" << endl;
	switch(getch())
	{
		case '1': input();
		case '2': output();
	} getch(); goto nene;
}