#include <iostream.h>
#include <string.h>
void main()
{
	string username = "";
	string password = "";
	bool loginSuccess = false;
	cout << "--- Welcome! Please login below! ---" << endl;
	do
	{
		cout << "\nusername: ";
		cin >> username;
		cout << "password: ";
		cin >> password;
		if(username=="Dane"&&password=="root")
		{
			cout << "Successful login!\n\n";
			system("pause");
		}
			else
			{
				cout << "Incorrect password! Please try again" << endl;
			}
	}while(!loginSuccess);
}