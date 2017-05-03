#include <iostream.h>
#include <string.h>
class book
{
private:
	char title[20];
	float price;
public:
	book(){strcpy(title,"");price=0.0;}
	book(char *t,float p)
	{
		strcpy(title,t);
		price=p;
	}
	void input();
	void output();
	int operator ==(float);
	int operator > (book &);
	friend int operator <= (book &b, float);
};
int book::operator ==(float m)
{
	return (price=m);
}
int book::operator > (book &b)
{
	return (strcmp(title,b.title)>0);
}
int operator <= (book &b,float m)
{
	return (b.price <=m);
}
void book::input()
{
	cout << "Title: ";
	cin.seekg(0);
	cin.get(title,20);
	cout << "Price: ";
	cin >> price;
}
void book::output()
{
	cout << title << "\t" << price << endl;
}
void search(book b[],int n,float p)
{
	int k=0;
	for(int i=0;i<n;i++)
		if(b[i]==p)
		{
			k++;
			b[i].output();
		}
		if(k==0)
			cout << "Search not found" << endl;
}
void show(book b[],int n,float m)
{
	for(int i=0;i<n;i++)
		if(b[i]<=m)
			b[i]=output();
}
void main()
{
	int n,i;
	book b[20];
	cout << "input number of book: ";
	cin >> n;
	cout << "input data of books: "; << endl;
	for(int i=0;i<n;i++)
	{
		cout << "book: " <<(i+1) << ":";
		b[i].input();
	}
	for(i=0;i<n;i++)
		b[i].output();
	search(b,n,24.4);
	show(b,n,99.0);
}