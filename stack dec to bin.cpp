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
int pop(stackType *st)
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
	stackType st;
	int i=0,j,dec,x;
	cout << "dec: ";
	cin >> dec;
	clearStack(&st);
	do
	{
		x=dec % 2;
		push(&st,x);
		dec=dec/2;
		i++;
	}while(dec!=0);
	for(j=0;j<i;j++)
		cout << pop(&st);
}