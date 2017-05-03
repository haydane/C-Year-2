#include <iostream.h>
#define maxQueue 10
struct queueType
{
	int box[maxQueue];
	int front,rear;
};
void clearQueue(queueType *qt)
{
	qt->rear=-1;
	qt->front=0;
}
void push(queueType *qt,int vBox)
{
	if(qt->rear==maxQueue-1)
	{
		cout << "queue overflow";
	}
	else 
	{
		qt->rear=qt->rear+1;
		qt->box[qt->rear]=vBox;
	}
} 
int pop(queueType *qt)
{
	int trash;
	if(qt->rear<qt->front)
	{
		cout << "queue underflow";
	}
	else 
	{
		trash=qt->box[qt->rear];
		qt->rear=qt->rear-1;
	}
	return trash;
}
void main()
{
	queueType pe;
	int i=0,dec,j,x;
	cout << "Decimal= ";
	cin >> dec;
	clearQueue(&pe);
	do
	{
		x=dec%2;
		push(&pe,x);
		dec=dec/2;
		i++;
	}while((dec!=0));
	for(j=0;j<i;j++)
		cout << pop(&pe);
}