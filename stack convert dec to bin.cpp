#include <iostream.h>
#define MaxStack 1000
struct StackType
{
	int info[MaxStack];
	int Top;
};
void clearStack(StackType *st)
{
	st->Top=-1;
}
void push(StackType *st,int item)
{
	if(st->Top==MaxStack-1)
		cout<<"Stack Overflow";
	else
	{
		st->Top=st->Top+1;
		st->info[st->Top]=item;
	}
}
int pop(StackType *st)
{
	int Element;
	if(st->Top==-1)
		cout<<"Stack Underflow";
	else
	{
		Element=st->info[st->Top];
		st->Top=st->Top-1;
	}
	return Element;
}
void main()
{
	int Dec,x,i=0;
	StackType st;
	cout<<"Input Decimal: ";	
	cin>>Dec;
	clearStack(&st);
	do
	{
		x=Dec%2;
		push(&st,x);
		Dec=Dec/2;
		i++;
	}while((Dec!=0));
	for(int j=0;j<i;j++)
	{
		cout<<pop(&st);
	}
}