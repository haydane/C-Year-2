#include <iostream.h>
class io
{
public:
	float length,width;
	io(){}
	io(int a,int b){}
	void setio(int a,int b)
	{
		width=a;
		length=b;
	}
	float getWidth()
	{
		return width;
	}
	float  getlength()
	{
		return length;
	}
public:
	void input1()
	{
		cout << "\nwidth: ";
		cin >> width;
		cout << "\nlength: ";
		cin >> length;
	}
	void output1()
	{
		cout << getWidth() << '\t' << getlength() << '\t' << area() << endl;
	}
	void header()
	{
		cout << "\nwidth\tlength\tarea\n";
	}
	int area()
	{
	 	return width*length;
	}
};
class array : public io
{
public: io obj[10]; 
		 int i,n,max;
public: 
	void input2()
	{
		cout << "input n: ";
		cin >> n;
		for(i=0;i<n;i++)
		{
			obj[i].input1();
		}
	}
	void output2()
	{
		for(i=0;i<n;i++)
			obj[i].output1();
	}
	void maximum()
	{ 
	max=obj[0].area();
	for(i=0;i<n;i++)
	{
	if(max <obj[i+1].area())
	max=obj[i+1].area();
	}
	cout << "max: " << max;	
}

};
void main()
{
	array obj2;
	obj2.input2();
	obj2.header();
	obj2.output2();
	obj2.maximum();
} 