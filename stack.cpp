#include <iostream.h>
#define MaxStack 10
struct StackType
{
	char info[MaxStack];
	int Top;
};
void ClearStack(StackType *st)
{
	st->Top=-1; //make sure stack start from 0
}
void Push(StackType *st,char Item)
{
	if(st->Top==(MaxStack-1))
	{
		cout << "Stack Overflow";
	}
	else
	{
		st->Top = st-> Top +1;
		st->info[st->Top]=Item;
	}
}
char Pop(StackType *st)
{
	char Element;
	if(st->Top==-1)
	{
		cout << "Stack underflow";
	}
	else
	{
		Element = st->info[st->Top];
		st->Top = st->Top-1;
	}
	return Element;
}

void main()
{
	char obj[4]={'D','A','N','E'};
	StackType st;
	int i;
	ClearStack(&st);
	for(i=0;i<4;i++)
	{
		Push(&st,obj[i]);
	}
	for(i=0;i<4;i++)
		cout<<Pop(&st)<<"\t";
}