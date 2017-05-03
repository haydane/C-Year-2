#include <iostream.h>
#include <conio.h>
void sort();
void output();
void input();
void score();
int j,id,age,pnum,i,n,cpp;
char name[20],sex[7];
class data
{											
	protected: 
		int id,age,pnum,cpp;
		char name[20],sex[7];
	public: 
		void setData(int i,char *n, int a, char *s, int p, int c)
		{
			id=i;
			strcpy(name,n);
			age=a;
			strcpy(sex,s);
			pnum=p;
			cpp=c;
		}
		void setID(int i)
		{
			id=i;
		}
		void setName(char *n)
		{
			strcpy(name,n);
		}
		void setAge(int a)
		{
			age=a;
		}
		void setSex(char *s)
		{
			strcpy(sex,s);
		}
		void setPnum(int p)
		{
			pnum=p;
		}
		void setCpp(int c)
		{
			cpp=c;
		}
		int getID()
		{
			return id;
		}
		int getAge()
		{
			return age;
		}
		int getPnum()
		{
			return pnum;
		}
		char *getName()
		{
			return name;
		}
		char *getSex()
		{
			return sex;
		}	
		int getCpp()
		{
			return cpp;
		}	
};
data d[100],tmp;
void main()
{
	nene:
	system("cls");
	cout << "1. input" << endl;
	cout << "2. output" << endl;
	cout << "3. input score" << endl;
	switch(getch())
	{
		case '1': sort(); input(); break;
		case '2': output(); break;
		case '3': score(); break;
	} goto nene;
}
void input()
{
	system("cls");
	do
	{
		cout << "ID: ";
		cin >> id;
		cout << "Name: ";
		cin.seekg(0);
		cin.get(name,20);
		cout << "Age: ";
		cin >> age;
		cout << "Sex: ";
		cin >> sex;
		cout << "P-Num: ";
		cin >> pnum;
		cout << "<<enter>> to continue\n\n";
		d[i].setData(id,name,age,sex,pnum,cpp);
		i++;		
		n++;
	} while(getch()==13); 
}

void output()
{
	system("cls");
	cout << "ID\tName\tAge\tSex\tP-Num\tScore\n";
	for(i=0;i<n;i++)
		cout << d[i].getID() << "\t" << d[i].getName() << "\t" << d[i].getAge() << "\t" << d[i].getSex() << "\t" << d[i].getPnum() << "\t" << d[i].getCpp()  << "\n";
getch();
}
void sort()
{ 
		for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(d[j-1].getID()>d[j].getID())
			{
				tmp=d[j-1];
				d[j-1]=d[j];
				d[j]=tmp;
			}
		}
}
void score()
{
	clrscr();
	int id1;
	int cpp;
	cout << "ID: ";
	cin >> id1;
	for(i=0;i<n;i++)
	if(id1==d[i].getID())
	{
		cout << "CPP: ";
		cin >> cpp;
		d[i].setCpp(cpp);
	}
}
