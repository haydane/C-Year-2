#include <iostream.h>
#include <string.h>
#include <conio.h>
class fri
{
	char name[20];
	int age;
public:
	friend void sort(fri f[],int n);
	friend void search(fri f[],int n);
	friend void header()
	{
		cout << "\nName\tAge\n";
	}
	friend void input(fri &f)
	{
		cout << "Name: ";
		cin.seekg(0);
		cin.get(f.name,20);
		cout << "Age: ";
		cin >> f.age;
	}
	friend void display(fri &f)
	{
		cout << f.name << '\t' << f.age << endl;

	}
};
	void sort(fri f[], int n)
	{
		int i,j;
		fri tmp;
		for(i=0;i<n;i++)
			for(j=i;j<n;j++)
				if(strcmp(f[i].name,f[j].name)>0)
				{	
					tmp=f[i];
					f[i]=f[j];
					f[j]=tmp;
				}
	}
	void search(fri f[],int n)
	{
		int i;
		string newname;
		cout << "search name: ";
		cin.seekg(0);
		cin >> newname;
		for(i=0;i<n;i++)
			if(f[i].name==newname)
			{
				header();
				cout << f[i].name << "\t" << f[i].age;
			}
	}
void main()
{
	int i,n;
	fri fr[5];
	cout << "input n: ";
	cin >> n;
	for(i=0;i<n;i++)
		input(fr[i]);
	sort(fr,n);
	header();
	for(i=0;i<n;i++)
		display(fr[i]);
	cout << endl;
	search(fr,n);
}