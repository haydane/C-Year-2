#include <iostream.h>
#define maxStack 10
struct stackType
{
	int num[maxStack],top;
};
void clearStack(stackType *st)
{
	st->top=-1;
}
void push(stackType *st, int con)
{
	if(st->top==maxStack-1)
	{
		cout << "stack overflow";
	}
	else 
	{
		st->top=st->top+1;
		st->num[st->top]=con;
	}
}
int pop(stackType *st)
{
	int trash;
	if(st->top==-1)
	{
		cout << "stack underflow";
	}
	else 
	{
		trash=st->num[st->top];
		st->top=st->top-1;
	}
	return trash;
}
void main()
{
	stackType st;
	int num[4]={2,7,4,9};
	clearStack(&st);
	for(int i=0;i<4;i++)
	push(&st,num[i]);
	for(int i=0;i<4;i++)
	cout << pop(&st) << "\t";
}