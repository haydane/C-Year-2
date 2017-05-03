#include <iostream.h>
void main()
{
	int studentAge;
	try
	{
		cout << "studnet age: ";
		cin >> studentAge;
		if(studentAge<0)
			throw "positive number required";
		else
		cout << "\nstudent age: " << studentAge << endl;
	}
	catch(char *message)
	{
		cout << "error: " << message;
	}
}