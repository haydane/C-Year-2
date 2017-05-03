#include <iostream.h>
#include <conio.h>
#include <string.h>
class stu
{
	private: char name[20];
			 int age;
	public:  
			stu(char *n,int a) // with parameter 
				{
					strcpy(name,n);
					age=a;
				}
			  stu()
			{
				strcpy(name,"Dane1");
				age=18;

			}
				void output()
				{
					cout << name<< "\t" << age << endl;
				}
};
void main()
{
	cout << "Name\tAge" << endl;
	stu obj("dane",19);
	obj.output();
	stu obj1;
	obj1.output(); 
	
}