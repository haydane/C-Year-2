#include <iostream.h>
class head
{
protected:
	float width,heigh;
public:
	head()
	{
		width = 5.5;
		heigh = 5.5;
	}
	virtual float area()
	{
		return 0;
	}
};
class triangle : public head
{
public: 
	float area()
	{
		return (width*heigh)/2;
	}
};

class rectangle : public triangle
{
public:
	float area()
	{
		return width*heigh;
	}
};

class square : public rectangle
{
public:
	float area()
	{
		return width*width;
	}
};
void main()
{
	head *ptr[3];
	triangle obj1;
	rectangle obj2;
	square obj3;
	ptr[0]=&obj1;
	ptr[1]=&obj2;
	ptr[2]=&obj3;
	for(int i=0;i<3;i++)
	{
		cout << ptr[i]->area() << endl;
	}

}
