#include <iostream.h>
#include <fstream.h>
#include <conio.h>
class grade
{
public:
	char name[20];
	float kh,eng,math;
	char data1[100];
	ofstream outfile;
public:
	int static id()
	{
		int num=0;
		return num=num+1;
	}
	void input()
	{
	
	outfile.open("afile.txt",'a');
		cout <<"\nName: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Khmer: ";
		cin >> kh;
		cout << "Math: ";
		cin >> math;
		cout << "English: ";
		cin >> eng;
		cin.getline(data1,100);
		outfile << id() << "\t";
		outfile << name << "\t";
		outfile << kh << "\t";
		outfile << math << "\t";
		outfile << eng << "\t";
		outfile << avg() << "\t";
		outfile << gra() << "\n";
		outfile.close();
	}
	void static header()
	{
		cout << "ID\tName\tKh\tMath\tEng\tAverage\tGrade\n";
	}
	float avg()
	{
		return (kh+math+eng)/3.0;
	}
	char gra()
	{
	if(avg()<=49)
		return 'F';
	else if(avg()<=60)
		return 'E';
	else if(avg()<=70)
		return 'D';
	else if(avg()<=80)
		return 'C';
	else if(avg()<=90)
		return 'B';
	else return 'A';
	}
void output()
	{
		ifstream infile;
		infile.open("afile.txt");
		clrscr();
		//cout << id() << "\t" << name << "\t" << kh << "\t" << math << "\t" << eng << "\t" << avg() << "\t" << gra() << endl;
		infile >> id();
		cout << id() << '\t';
		infile >> name;
		cout << name << "\t";
		infile >> kh;
		cout << kh << "\t";
		infile >> math;
		cout << math << "\t";
		infile >> eng;
		cout << eng << "\t";
		/*infile >> avg();
		cout << agv() << "\t";
		infile >> gra();
		cout << gra() << "\n";*/
		infile.close();
	}
};
void main()
{
	nene:
	int n,i;
	system("cls");
	cout << "1. input" << endl;
	cout << "2. output" << endl;
	grade *g = new grade[n];
	switch(getch())
	{	
		case '1':
			cout << "input n: ";
			cin >> n;
			system("cls");
			for(i=0;i<n;i++)
				g[i].input(); 
					break;
		case '2': 
			grade::header();
			for(i=0;i<n;i++)
			g[i].output(); break;
	} getch(); goto nene;
}