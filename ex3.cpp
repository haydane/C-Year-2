#include <iostream.h>
class io
{
public:
	int width,length;
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
		cout << width << '\t' << length << '\t' << area() << endl;
	}
	int area()
	{
	   return width*length;

	}
};
void main()
{
   io obj[10];
   int i,n,max,j;
cout << "input n:";
cin >> n;
for(i=0;i<n;i++)
{
	obj[i].input1();
}
	cout << "\nwidth\tlength\tarea\n";
	for(i=0;i<n;i++)
{
	obj[i].output1();
}
	//max=obj[0].area();
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
	if(obj[j].area()<obj[j+1].area())
	max=obj[j+1].area();
	}
	cout << "max: " << max;	

}