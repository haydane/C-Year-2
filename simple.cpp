#include <iostream.h>
#include <string.h>
void swap(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	cout<<a<<"\t"<<b<<endl;
}
void swap(char st1[10],char st2[10]){
	char t[10];
	strcpy(t,st1);
	strcpy(st1,st2);
	strcpy(st2,t);
	cout<<st1<<"\t"<<st2<<endl;
}
void main(){
    swap("A","B");
    swap(2,3);
}