#include <iostream.h>
#include <conio.h>
#include <fstream.h>
void input();
void output();
char name[100];
char user[512];
string readbuffer;

void main()
{
	nene:
	cout << "1.input" << endl;
	cout << "2.output" << endl;
	switch(getch())
	{
		case '1': clrscr(); input(); break;
		case '2': clrscr(); output(); break;
	} getch(); clrscr(); goto nene;
}

void input()
{
	ofstream outfile;
	outfile.open("afile.txt",'a');
	cout << "name: ";
	cin.get(name,20);
	cin.getline(user,512);
	outfile << user;
	outfile.close();
}

void output()
{
	ifstream infile;
	infile.open("afile.txt",'r');
	cout << "reading from file\n";
	infile.close();
}