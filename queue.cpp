#include <io\stream.h>
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
	int num[4]={1,2,3,4};
	clearQueue(&pe);
	for(int i=0;i<4;i++)
		push(&pe,num[i]);
	for(int i=0;i<4;i++)
		cout << pop(&pe) << "\t";
}