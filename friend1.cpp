#include <iostream.h>
#include <conio.h>
class data
{
	int age;
	char name[20];
public:
	friend void output(data &ta);
	friend void input(data &ta);
	friend void sort(data ta[],int n);
};
void input(data &ta)
{
	cout << "name: ";
	cin.seekg(0);
	cin.get(ta.name,20);
	cout << "age: ";
	cin >> ta.age;
}
void output(data &ta)
{
	cout << ta.name << "\t" << ta.age << endl;
}
void sort(data ta[],int n)
{
	int i,j;
	data tmp;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(ta[i].age<ta[j].age)
			{
				tmp=ta[i];
				ta[i]=ta[j];
				ta[j]=tmp;
			}

}
void main()
{
	int i,n;
	cout << "input n: ";
	cin >> n;
	data *a = new data[n];
	for(i=0;i<n;i++)
		input(a[i]);
	sort(a,n);
	for(i=0;i<n;i++)
		output(a[i]);
}