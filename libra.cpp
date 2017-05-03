#include <iostream.h>
#include <string.h>
#include <conio.h>
class lib
{
	public:
		int id;
		char title[20],author[20];
		float price;
	public:
		void static header()
		{
			cout << "\nID\tTitle\tAut\tPrice\n";
		}
		void input()
		{
			cout << "\nID: ";
			cin >> id;
			cout << "Title: ";
			cin.seekg(0);
			cin.get(title,20);
			cout << "Author: ";
			cin.seekg(0);
			cin.get(author,20);
			cout << "Price: ";
			cin >> price;
		}
		void output()
		{
			cout << id << "\t" << title << "\t" << author << "\t" << price << endl;
		}
};
void sortPrice(lib ib[],int n)
{
	int i,j;
	lib ii;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(ib[i].price<ib[j].price)
			{
				ii=ib[i];
				ib[i]=ib[j];
				ib[j]=ii;
			}
}
void searchID(lib ib[],int n)
{
	int i,newID,k;
	cout << "\nSearch ID: ";
	cin >> newID;
	for(i=0;i<n;i++)
	if(newID==ib[i].id)
	{
		lib::header();
		ib[i].output();
	}
		cout << "Does not exist" << endl;
}
void searchTitle(lib ib[],int n)
{
	char newTitle[20];
	int i;
	cout << "\nSearch Title: ";
	cin.seekg(0);
	cin.get(newTitle,20);
	for(i=0;i<n;i++)
		if(strcmp(ib[i].title,newTitle)==0)
		{
			lib::header();
				ib[i].output();
		}
		cout << "Does not exist" << endl;
}
void totalPrice(lib ib[],int n)
{
	int i;
	float sum;
	for(i=0;i<n;i++)
	sum=sum+ib[i].price;
	cout << "\nTotal Price: " << sum; 
}	
void updateID(lib ib[],int n)
{
	int i,upID;
	cout << "\nUpdate ID: ";
	cin >> upID;
	for(i=0;i<n;i++)
		if(upID==ib[i].id)
		{
			cout << "\nNew ID: ";
			cin >> upID;
			ib[i].id=upID;
		}
}
void updateTitle(lib ib[],int n)
{
	int i;
	char newTitle[20];
	cout << "\nUpdate Title: ";
	cin.seekg(0);
	cin.get(newTitle,20);
	for(i=0;i<n;i++)
		if(strcmp(ib[i].title,newTitle)==0)
		{
			cout << "\nNew Title: ";
			cin.seekg(0);
			cin.get(newTitle,20);
			strcpy(ib[i].title,newTitle);
		}
}
void main()
{
	int i,n,k;
	lib *b = new lib[n];
	clrscr();
	nene:
	cout << "1. input" << endl;
	cout << "2. output" << endl;
	cout << "3. sort Price" << endl;
	cout << "4. total Price" << endl;
	cout << "5. Search" << endl;
	cout << "6. Update" << endl;
	switch(getch())
	{
		case '1':  // input
		{
			k=0;
			clrscr();
			cout << "input n: ";
			cin >> n;
			for(i=0;i<n;i++)
			{
				b[i].input();
			}
		} break;
		case '2': // output
		{
			clrscr();
			if(k!=0)
				cout << "file not found";
			else
			{
				lib::header();
				for(i=0;i<n;i++)
					b[i].output();
			}
		} break;
		case '3': // sort 
		{
			clrscr();
			if(k!=0)
			{
				cout << "file not found";
			}
			else
			{
				clrscr();
				lib::header();
				sortPrice(b,n);
					for(i=0;i<n;i++)
						b[i].output();
			}
		} break;
		case '4': // total price
		{
			clrscr();
			lib::header();
				for(i=0;i<n;i++)
					b[i].output();
			totalPrice(b,n);
		} break;
		case '5': // search
		{
			clrscr();
			cout << "a. Search by ID" << endl;
			cout << "b. Search by Title" << endl;
			switch(getch())
			{
				case 'a':  
				{
					if(k!=0)
					{
						clrscr();
						cout << "file not found" << endl;
					}
					else
						searchID(b,n);
				} break;
				case 'b':
				{
					if(k!=0)
					{
						clrscr();
						cout << "file not found" << endl;
					}
					else
						searchTitle(b,n);
				} break;
			}
		} break;
		case '6': // update
		{
			clrscr();
			cout << "a. Update by ID" << endl;
			cout << "b. Update by Title" << endl;
			switch(getch())
			{
				case 'a': 
				{
					if(k!=0)
					{
						clrscr();
						cout << "file not found" << endl;
					}
					else
					{
					lib::header();
					for(i=0;i<n;i++)
						b[i].output();
					updateID(b,n);
					lib::header();
					for(i=0;i<n;i++)
						b[i].output();	
					}
				} break;
				case 'b': 
				{
					if(k!=0)
					{
						clrscr();
						cout << "file not found" << endl;
					}
					else
					{
					lib::header();
					for(i=0;i<n;i++)
						b[i].output();
					updateTitle(b,n);
					lib::header();
					for(i=0;i<n;i++)
						b[i].output();
					}
				} break;
			}
		} break;
	}
	getch(); clrscr(); goto nene;
}