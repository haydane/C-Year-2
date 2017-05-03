#include <iostream.h>
#include <string.h>
class computer
{
private:
	int code;
	char model[20];
	float price;
public:
	void input();
	void output();
	void getprice();
	char *getmodel();
};
void computer::input()
{
	cout << "\nInput code: ";
	cin >> code;
	cout << "Input Model: ";
	cin.seekg(0);
	cin.get(model,20);
	cout << "Input Price: ";
	cin >> price;
}
void computer::output()
{
	cout << code << "\t" << model << "\t" << price << endl;
}
char *computer::getmodel()
{
	return model;
}
void sort(computer c[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(c[i].getmodel(),c[j].getmodel())>0)
			{
				computer t=c[i];
				c[i]= c[j];
				c[j]=t;
			}
}
void main()
{
	computer com[20]; int n,i;
	cout << "Input number of computer = ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		com[i].input();
	}
	system("cls");
	cout << "Code\tModel\tPrice\n";
	sort(com,n);
	for(i=0;i<n;i++)
	{
		com[i].output();
	}
}