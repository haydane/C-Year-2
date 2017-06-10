#include <iostream.h>
struct nodeType
{
	int info;
	struct nodeType *next;
};
int count;
int sum;
typedef struct nodeType *pointerType;
void selectoinSort(int a[],int n)
{
	int i,j,small,pos,tmp;
	for(i=0;i<n-1;i++)
	{
		small=a[i];
		pos=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<small)
		{
			a[j]=small;
			pos = j;
		}
	}
	tmp = a[pos];
	a[pos] = a[i];
	a[i] = tmp;
	}
}
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
/*void deleteNode(pointerType *plist,int item)
{
	pointerType p,q;
	p = *plist;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			delete;
		}
		p=p->next;
	}
}*/
void deleteNode(struct nodeType **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;
 
   // Store head node
   struct nodeType* temp = *head_ref;
 
    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }
 
    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;
 
    // If position is more than number of ndoes
    if (temp == NULL || temp->next == NULL)
         return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct nodeType *next = temp->next->next;
 
    // Unlink the node from linked list
    free(temp->next);  // Free memory
 
    temp->next = next;  // Unlink the deleted node from list
}
int countNode(pointerType *plist)
{
	pointerType p = *plist;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}
int sumNode(pointerType *plist)
{
	pointerType p = *plist;
	while(p!=NULL)
	{
		sum=sum+p->info;
		p=p->next;
	}
	return sum;
}
void deleteFirst(pointerType *plist,int item)
{
	pointerType p;
	struct nodeType *ptr = new nodeType;
	p=*plist;
	while(p!=NULL)
	{
		if(item!=p->info)
		{
			ptr=p;
		}
			p=p->next;
		break;
	}
	ptr->next=p->next;
	
}
void main()
{
	pointerType *p;
	initialize(p);
	firstNode(p,1);
	firstNode(p,2);
	firstNode(p,3);
	firstNode(p,4);
	show(p);
	cout << endl;
	deleteFirst(p,1);
	show(p);
	//cout << "\n" << countNode(p);
	//deleteNode(p,1);
	//show(p);
	//cout << "\n" << sumNode(p);
}