#include <iostream.h>
struct nodeType
{
	int info;
	struct nodeType *next;
};
typedef struct nodeType *pointerType;
void initialize(pointerType *plist)
{
	*plist = NULL;
}
pointerType getNode()
{
	struct nodeType *p;
	p = new nodeType;
	return p;
}
void firstNode(pointerType *plist,int item)
{
	pointerType p = *plist;
	p = getNode();
	p -> info = item;
	p -> next = *plist;
	*plist = p;
}
void show(pointerType *plist)
{
	pointerType p = *plist;
	while(p!= NULL)
	{
		cout << p->info << "\t";
		p=p->next;
	}
}
void lastNode(pointerType *plist,int item)
{
	pointerType p,q;
	for(p=*plist;p->next!=NULL;p = p-> next)
			if(p->next==NULL){
			q = getNode();
			q -> info = item;
			q -> next = p -> next;
			p -> next = q;
		}
}
void main()
{
	pointerType p;
	initialize(&p);
	firstNode(&p,11);
	firstNode(&p,12);
	firstNode(&p,99);
	lastNode(&p,90);
	show(&p);
}