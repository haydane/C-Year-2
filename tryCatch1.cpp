#include <iostream.h>
void main()
{
	double operand1,operand2,result;
	cout << "This Program will allow you to perform a division of two numbers\n";
	cout << "To process, enter two numebrs: ";
	try 
	{
		cout << "\nFirst Numebr: ";
		cin >> operand1;
		cout << "Second Numebr: ";
		cin >> operand2;
		if(operand2==0)
			throw "Division by zero not allowed";
			result=operand1/operand2;
		cout << "\n" << operand1 << "\n" << operand2 << "\n" << result << endl;
	}
	catch(char *str)
	{
		cout << "\nBad operator: " << str;
	}
}