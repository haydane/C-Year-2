#include <iostream.h>
#define maxStack 10
struct dataType
{
	char con[maxStack];
	int top;
};
void clearStack(dataType *da)
{
	da->top=-1;
}
void push(dataType *da,char data)
{
	if(da->top==maxStack-1)
	{
		cout << "stack overflow";
	}
	else
	{
		da->top=da->top+1;
		da->con[da->top]=data;
	}
}
char pop(dataType *da)
{
	char trash;
	if(da->top==-1)
	{
		cout << "stack underflow";
	}
	else
	{
	trash=da->con[da->top];
	da->top=da->top-1;
	}
	return trash;
}
void main()
{
	char dane[4]={'r','o','o','t'};
	dataType pe;
	clearStack(&pe);
	for(int i=0;i<4;i++)
		push(&pe,dane[i]);
	for(int i=0;i<4;i++)
		cout << pop(&pe);
}