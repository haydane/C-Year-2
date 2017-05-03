#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iostream.h>
#define MAX 5
typedef struct stack{
  int top;
   int Node[MAX];
}stack;
//...............................................
void initialize(struct stack *ps){
    ps->top=-1;
   }
//...............................................
int full(stack *ps){
  if(ps->top==MAX-1){
    cout<<"\n Stack Overflow"<<endl;
      getch();
      exit(0);
   }
 }
//...............................................
void push(struct stack *ps, int item){
    ps->top=ps->top+1;
      ps->Node[ps->top]=item;
}
//...............................................
int pop(stack *ps){
  int element;
  if(ps->top==-1){
    cout<<'\t'<<"\tStack Underflow"<<endl;
      return(0);
      }
   else{
    element=ps->Node[ps->top];
      ps->top=ps->top-1;
   }
      return(element);
}
//...............................................
void main(){
  clrscr();
  stack ptr;
   int dec,i=0,j;
//...............................................
   initialize(&ptr);
//...............................................
   cout<<"\n Input Decimal Numbers: "; cin>>dec;
   int x;
   cout<<"\n<<<<<<<<<<<<< Push stack >>>>>>>>>>>>>>>\n"<<endl;
   while(dec!=0){
    x=dec%2;
        push(&ptr,x);
          cout<<"\t"<<"Top["<<i<<"]"<<"\tPush(Stack,"<<dec%2<<")";
        dec = dec/2;
          cout<<"\t Division = "<<dec<<endl;
         //full(&ptr);
         i++;
         getch();
      }
//...............................................
    cout<<endl;
    cout<<"<<<<<<<<<<<<< Top stack >>>>>>>>>>>>>>>\n"<<endl;
   for(i=ptr.top;i>=0;i--){
      cout<<"\t"<<"Top["<<i<<"]: "<<"\t"<<"Top = "<<pop(&ptr)<<endl;
         getch();
         j++;
  }
        ptr.top=ptr.top+j;
//..............................................
   cout<<"\nBinary Numbers is: ";
   for(j=0;i<ptr.top;j++)
    cout << pop(&ptr);
    cout << endl;

}