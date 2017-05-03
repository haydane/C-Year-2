#include <iostream.h>
struct node
{
	int data;
	struct node* next;
};
void printList(struct node * n)
{
	while(n!=NULL)
	{
		cout << n->data << endl;
		n=n->next;
	}
}
void main()
{
	struct node* head;
	struct node* second;
	struct node* third; 
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	printList(head);
}