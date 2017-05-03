#include <iostream.h>
#include <string.h>
#include <conio.h>
	char password='Dane';
	int i=0,n=0;
	char ch,tmp[20];
void main()
{
	nene:
		cout << "password: ";
	do
	{
		ch=getch();
		cout << '*';
		tmp[i++]=ch;
		n++;
	}while(ch!=13);
	if(ch==password)
	{
		cout << "\nRight\n"; 
		cout << "\nyour password is : ";
		for(i=0;i<n;i++)
			cout << tmp[i];
	}
	else 
	{
		cout << "\nsorry Try again!\n\n";
	}   goto nene; 
} 