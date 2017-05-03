#include <iostream.h>
#include <conio.h>
#include <fstream.h>
class object1{
	protected:
	int id;
	char name[20];
	int age;
    public:
    	void setData(int i,char *n,int a){
    		id=i;
    		strcpy(name,n);
    		age=a;
    	}
    	int getId(){
    		return id;
    	}
    	char *getName(){
    		return name;
    	}
    	int getAge(){
    		return age;
    	}
    	void input1(){
    		cout<<"ID:";cin>>id;
     		cout<<"Name:";cin>>name;
     		cout<<"Age:";cin>>age;
        }
    	void output1(){
            cout<<getId()<<"\t"<<getName()<<"\t"<<getAge()<<endl;
    	}
};
     	int i,n;
class object2: public object1
{
     private:
        object1 obj1[20];
     public:
        void input(){
        do
        { 
            for(i=n;i>=0;i--)
            obj1[i+1]=obj1[i];
            obj1[0].input1();
             i++;
             n++;
        }while(getch()==13);
     		
     	}
     	void output(){
            cout<<"ID\tName\tAge\n";
     		for(i=0;i<n;i++){
     		obj1[i].output1();
            }
     	}
};
void main()
{
    
    object2 obj;
    nene:
    clrscr();
    cout << "1. input" << endl;
    cout << "2. output" << endl;
    switch(getch())
    {
	case '1': clrscr(); obj.input();  break;
	case '2': clrscr(); obj.output(); break;
    }  getch(); goto nene;
}