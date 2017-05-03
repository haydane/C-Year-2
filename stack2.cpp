#include <iostream.h>
#define maxStack 10
struct stackType
{
	char box[maxStack];
	int top;
};
void clearStack(stackType *st)
{
	st->top=-1;
}
void push(stackType *st,char vBox)
{
	if(st->top==maxStack-1)
		cout << "stack overflow";
	else 
	{
		st->top=st->top+1;
		st->box[st->top]=vBox;
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
	int i;
	stackType s;
	char dane[4]={'t','o','o','r'};
	clearStack(&s);
	for(i=0;i<4;i++)
		push(&s,dane[i]);
	for(i=0;i<4;i++)
		cout << pop(&s) << "\t";
}