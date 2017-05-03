/*<Program to implement singly linklist with insertion at beginning and deletion from end.>
    Copyright (C) <2013>  <Pallav>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#include <stdio.h>
#include <stdlib.h>
struct SLL{
       int item;
       struct SLL *Next;
       };
typedef struct SLL Node;
Node *start;
Node *last;
void create(){
     int data;
     Node *p;
     if(start!=NULL){
          printf("\n The link list already exists...Choose other options...........\n");
          }
          else{
               p=(Node*)malloc(sizeof(Node));
               printf("Enter the value with which you want to create the linklist:\t");
               scanf("%d",&data);
               p->item=data;
               p->Next=NULL;
               start=p;
               last=p;
               }
     }
     
     void insert_begin(){
           int data;
           Node *p;
            if(start==NULL){
          printf("\n The link list does not exist...Create it first...........\n");
          }
          else{
               p=(Node*)malloc(sizeof(Node));
               printf("Enter the value  which you want to insert in the linklist:\t");
               scanf("%d",&data);
               p->item=data;
               p->Next=start;
               start=p;
               
               }
          }
          
          void delete_end(){
               Node *tmp1,*tmp2;
                if(start==NULL){
          printf("\n The link list does not exist...Create it first...........\n");
          }
                else if(start->Next==NULL){
                     tmp1=start;
                     printf("\nThe deleted item is:\t %d",tmp1->item);
                     printf("\nThe link list is deleted as there was only one item.\n");
                     free(tmp1);
                     start=NULL;
                     last=NULL;
                     }
                     else{
                          tmp1=start;
                          tmp2=tmp1;
                          while(tmp1!=last){
                                                 tmp2=tmp1;
                                                 tmp1=tmp1->Next;
                                  }
                                  tmp2->Next=NULL;
                                  printf("\nThe deleted item is:\t %d",tmp1->item);
                                  free(tmp1);
                                  last=tmp2;
                          }
               
               }
               void display(){
                    Node *tmp;
                    if(start==NULL){
          printf("\n Nothing to display...........\n");
          }
          else{
               tmp=start;
               printf("\n\n\n");
               while(tmp!=NULL){
                                printf("%d->",tmp->item);
                                tmp=tmp->Next;
                                if(tmp==NULL)
                                printf("%---->NULL");
                                }
               }
                    }
main(){
       int ch;
       start=NULL;
       last=NULL;
       do{
                 printf("\n1. Create");
                 printf("\n2. Insert at beginning");
                 printf("\n3. Delete from end");
                 printf("\n4. Display");
                 printf("\n5. Exit\n");
                 scanf("%d",&ch);
                 switch(ch){
                            case 1:
                                 create();
                                 break;
                                 case 2:
                                      insert_begin();
                                  break;
                                 case 3:
                                      delete_end();
                                      break;
                                      case 4:
                                           display();
                                           break;
                                           case 5:
                                                exit(1);
                                                break;
                            }
                 }while(1);
       }
