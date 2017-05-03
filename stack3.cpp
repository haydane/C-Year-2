#include <iostream.h>
#define maxStack 10
struct stackType
{
	int box[maxStack];
	int top;
};
void clearStack(stackType *st)
{
	st->top=-1;
}
void push(stackType *st,int vBox)
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
	int num;
	if(st->top==-1)
		cout << "stack underflow";
	else 
	{
		num=st->box[st->top];
		st->top=st->top-1;
	}
	return num;
}
void main()
{
	int vNum[4]={'4','3','2','1'};
	stackType s;
	clearStack(&s);
	for(int i=0;i<4;i++)
		push(&s,vNum[i]);
	for(int i=0;i<4;i++)
		cout << pop(&s) << '\t';
}