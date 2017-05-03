#include <iostream.h>
class info
{
protected:
	int id;
	char name[20];
};
class student : protected info
{
protected:
	float kh,eng,math;
public:
	int static id()
	{
		int num;
		return ++num;
	}
	float avg()
	{
		return (kh+math+eng)/3.0;
	}
	
};
class grade : private student
{
public:
		void input()
	{
		cout <<"\nName: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Khmer: ";
		cin >> kh;
		cout << "Math: ";
		cin >> math;
		cout << "English: ";
		cin >> eng;
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
		cout << id() << "\t" << name << "\t" << kh << "\t" << math << "\t" << eng << "\t" << avg() << "\t" << gra() << endl;
	}
	void static header()
	{
		cout << "ID\tName\tKH\tMath\tEng\tAvg\tGrade\n";
	}
};
void main()
{
	int n;
	cout << "input n: ";
	cin >> n;
	grade *g = new grade[n];
	system("cls");
	for(int i=0;i<n;i++)
		g[i].input();
	cout << "\n";
	grade::header();
	for(int i=0;i<n;i++)
		g[i].output();
}