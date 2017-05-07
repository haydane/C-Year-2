#include <iostream.h>
struct NodeType
{
	int data;
	struct NodeType *next;
}; 
typedef struct NodeType *pointerType;
void initialize(pointerType *plist)
{
	*plist = NULL;
}
pointerType freeNode()
{
	struct NodeType *p;
	p = new NodeType;
	return p;
}
void firstNode(pointerType *plist,int info)
{
	pointerType p = *plist;
	p = freeNode();
	p -> data = info;
	p -> next = *plist;
	*plist = p;
}
void show(pointerType *plist)
{
	pointerType p = *plist;
	while(p!=NULL)
	{
		cout << p -> data << endl;
		p = p -> next;
	}
}
void main()
{
	pointerType p;
	initialize(&p);
	firstNode(&p,1);
	firstNode(&p,2);
	firstNode(&p,3);
	show(&p);
}