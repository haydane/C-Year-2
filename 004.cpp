#include <iostream.h>
#include <conio.h>
#include <string.h>
void input();
void output();
void sort();
class person{
    protected:
        int id;
        char name[20],sex[5];
    public:
        void setId(int i){
             id=i;
        }
        void setName(char *n){
            strcpy(name,n);
        }
        void setSex(char *s){
            strcpy(sex,s);
        }
        int getId(){
            return id;
        }
        char *getName(){
            return name;
        }
        char *getSex(){
            return sex;
        }
};
person st[10];
int id,i,n,j,c;
char name[20],sex[5],tmp[20];
void main(){    
do{    
cout<<"1.input"<<endl;
cout<<"2.output"<<endl;
cin>>c;
system("cls");
switch(c){
    case 1:
          input();
          break;
    case 2:
          output(); 
          break;      
}
cout<<"press enter to con."<<endl;
}while(getch()==13);
}
void input(){
    cout<<"input n:";cin>>n;
          for(i=0;i<n;i++){
            cout<<"ID:";cin>>id;st[i].setId(id);
            cout<<"Name:";cin.seekg(0);cin.get(name,20);st[i].setName(name);
            cout<<"Sex:";cin.seekg(0);cin.get(sex,5);st[i].setSex(sex);
          }
}
void output(){
    sort();
    cout<<"ID\tName\tSex"<<endl;
    for(i=0;i<n;i++){
            cout<<st[i].getId()<<"\t"<<st[i].getName()<<"\t"<<st[i].getSex()<<endl;
          }
}
void sort(){
    for(i=0;i<n;i++)
             for(j=1;j<n;j++)
                if(stricmp(st[j-1].getName(),st[j].getName())>0){
                    strcpy(tmp,st[j-1].getName());
                    strcpy(st[j-1].getName(),st[j].getName());
                    strcpy(st[j].getName(),tmp);
                }
}