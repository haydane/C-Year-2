#include <iostream.h>
class Devide
{
public:
	Devide()
	{
		cout << "Error: ";
	}
	char *getMessage()
	{
		return "Devide by zero";
	}
};
float quote(int a,int b)
{
	if(b==0)
		throw Devide();
	return (float)a/b;
}
void main()
{
	int x,y,result;
	while(cin >> x >> y)
	{
		try
		{
			result=quote(x,y);
			cout  << "result: " << result;
		}
		catch(Devide &d)
		{
			cout << "" << d.getMessage();
		}
	}
}