#include <iostream.h>
#define maxQueue 10
struct queueType
{
	int front,rear;
	char box[maxQueue];
};
void clearQueue(queueType *q)
{
	q->front=0;
	q->rear=-1;
}
void insert(queueType *q,char data)
{
	if(q->rear==maxQueue-1)
		cout << "queue overflow";
	else
	{
		q->rear=q->rear+1;
		q->box[q->rear]=data;
	}
}
char remove(queueType *q)
{
	char trash;
	if(q->rear<q->front)
		cout << "Queue underflow";
	else
	{
		trash=q->box[q->rear];
		q->rear=q->rear-1;
	} 
	return trash;
}
void main()
{
	char Dane[4]={'r','o','o','t'};
	queueType q;
	int i;
	clearQueue(&q);
	for(i=0;i<4;i++)
		insert(&q,Dane[i]);
	for(i=0;i<4;i++)
		cout << remove(&q);
}