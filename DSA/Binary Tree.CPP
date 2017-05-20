//PROGRAM TO PERFORM BASIC OPERATIONS ON A BINARY SEARCH TREE
#include<process.h>
#include<stdio.h>
#include<alloc.h>
#include<conio.h>
struct tree{
	int info;
	struct tree *left;
	struct tree *right;
};
typedef struct tree *pointertype;
void insert(pointertype *ptr,int item){
	if(*ptr==NULL){
	*ptr=(struct tree *)malloc(sizeof(struct tree));
	(*ptr)->left=(*ptr)->right=NULL;
	(*ptr)->info=item;
	    return;
	}
	else{
		if(item==(*ptr)->info)
			printf("It has node already\n");
		else
			if(item<(*ptr)->info){
				insert(&((*ptr)->left),item);
			}
			else{
				insert(&((*ptr)->right),item);
			}
	    return;
	}
}
void delete_tree(pointertype *ptr,int item){
	struct tree *move,*back,*temp;
	if(*ptr==NULL){
	    printf("\nEmpty tree..............\n");
		    return;
		}
	else{
	    move=*ptr;
	    back=move;
	    while(move->info!=item){
		    back=move;
		    if(item<move->info){
			move=move->left;
		    }
		    else{
			   move=move->right;
		    }

	}
    if(move->left!=NULL&&move->right!=NULL){
		temp=move->right;
		while(temp->left!=NULL){
			back=temp;
			temp=temp->left;
		}
		move->info=temp->info;
		move=temp;
    }
	if(move->left==NULL&&move->right==NULL){
		if(back->right==move){
		   back->right=NULL;
		}
		else{
			back->left=NULL;
		}
		free(move);
		return;
		}
	if(move->left==NULL&&move->right!=NULL){
		if(back->left==move){
		   back->left=move->right;
		}
		else{
			back->right=move->right;
		}
		free(move);
		return;
	}
	if(move->left!=NULL&&move->right==NULL){
		if(back->left==move){
			back->left=move->left;
		}
		else{
		   back->right=move->left;
		}
		free(move);
		return;
		}
	}

}
void preorder(pointertype ptr){
	struct tree *move;
	move=ptr;
	if(move!=NULL){
		printf(" %d ",move->info);
		preorder(move->left);
		preorder(move->right);
	}
	else
	   return;
}
void inorder(pointertype ptr){
	struct tree *move;
	move=ptr;
	if(move!=NULL){
		inorder(move->left);
		printf(" %d ",move->info);
		inorder(move->right);
	}
	else
		return;
}
void postorder(pointertype ptr){
	struct tree *move;
	move=ptr;
	if(move!=NULL){
	    postorder(move->left);
	    postorder(move->right);
	    printf(" %d ",move->info);
	}
	else
	    return;
}

//.......................................
void printTree(pointertype ptr, int level){
	int i;
	if(ptr){
		printTree(ptr->right,level+1);
		printf("\n");
		for(i=0;i<level;i++)
			printf("    ");
		printf(" %d ",ptr->info);
		printTree(ptr->left,level+1);
	}

}

void main(){
	pointertype root=NULL;
	int n,ch,item,order,disptype;
	char choice,ch1;
	do{
	clrscr();
	 a:	printf("\n____________MENU Trees_______________\n");
		printf("1. Input information into Binary Trees.\n");
		printf("2. Insert Item into Binary Trees.\n");
		printf("3. Delete Item into Binary Trees.\n");
	   //	printf("3. Search Item into Binary Trees.\n");
		printf("4. Traversal Trees.\n");
		printf("5. <<<Exit Program.>>>\n\n");
	do{  printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:	printf("Input n: "); scanf("%d",&n);
					for(int i=0; i<n; i++){
						printf("Input Item: "); scanf("%d",&item);
						insert(&root,item);
					}
					getch();
					break;
			case 2:   printf("_____________________________________\n");
					printf("Enter the element to be inserted: ");
					scanf("%d",&item);
					printf("_____________________________________\n");
					insert(&root,item);
					getch();
					break;
			case 3:   printf("_____________________________________\n");
					printf("Enter the element to be deleted:  ");
					scanf("%d",&item);
					delete_tree(&root,item);
					break;
			case 4:   printf("_____________________________________\n");
					printf("a. Preorder Traversal.\n");
					printf("b. Inorder Traversal.\n");
					printf("c. Postorder Traversal.\n");
					printf("Enter your choice:   ");
					ch1=getch();
					printf("\n_____________________________________\n");
					printf("Binary Trees is:  ");
					switch(ch1){
						case 'a': preorder(root);
								break;
						case 'b': inorder(root);
								break;
						case 'c': postorder(root);
								break;
						}
					printf("\n_____________________________________\n");
					getch();
				   	printTree(root,1);
					getch();
					break;
			default: exit(0);
			fflush(stdin);
		   }
		   clrscr();
		   goto a;
		}while(1);
	}while(ch!=5);
}