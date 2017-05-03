#include <iostream.h>
#define maxStack 10
struct stackType
{
	int top;
	char box[maxStack];
};
void clearStack(stackType *st)
{
	st->top=-1;
}
void push(stackType *st,char data)
{
	if(st->top==maxStack-1)
		cout << "stack overflow";
	else 
	{
		st->top=st->top+1;
		st->box[st->top]=data;
	}
}
char pop(stackType *st)
{
	char trash;
	if(st->top==-1)
		cout << "stack underflow";
	else 
	{
		trash=st->box[st->top];
		st->top=st->top-1;
	}
	return trash;
}
void main()
{
	stackType s;
	char Dane[4]={'r','o','o','t'};
	int i;
	clearStack(&s);
	for(i=0;i<4;i++)
		push(&s,Dane[i]);
	for(i=0;i<4;i++)
		cout <<	pop(&s);
}