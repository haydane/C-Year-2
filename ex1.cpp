#include <iostream.h>
class retangle
{
int width[20],height[20],a[20],max1,i,n;
public:
	void input()
	{
		cout << "input n: ";
		cin >> n;
		for(i=0;i<n;i++)
		{
		cout << "\nwidth: ";
		cin >> width[i];
		cout << "height: ";
		cin >> height[i];
		}
	}
	void output()
	{	
		cout << "\nwidth\theight\n";
		for(i=0;i<n;i++)
		{
		cout << width[i] << '\t' << height[i] << endl;
		}
		cout << "\n";
	}
	void size()
	{	
		for(i=0;i<n;i++)
		{
		cout << "\nsize[" << i+1 << "]: " << width[i]*height[i];
			a[i]= (width[i]*height[i]);
		}

	}
	void max()
	{
		max1=a[0];
			for(i=0;i<n;i++)
		{
			if(max1<a[i])
				max1=a[i];
		}
			cout << "\n\nmax: " << max1;
	}


};
void main()
{ 
	retangle obj1;
	obj1.input();
	obj1.output();
	obj1.size();
	obj1.max();
}