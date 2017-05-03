#include <iostream.h>
int H(int &a);
int F(int &a);
int Tw(int &a);
int T(int &a);
int Fi(int &a);
int O(int a);
void main(){
	int am;
	cout<<"input money:";cin>>am;
	cout<<"100$="<<H(am)<<endl;
    cout<<"50$="<<F(am)<<endl;
    cout<<"20$="<<Tw(am)<<endl;
    cout<<"10$="<<T(am)<<endl;
    cout<<"5$="<<Fi(am)<<endl;
    cout<<"1$="<<O(am)<<endl;
    system("pause");
}
int H(int &a){
	int s=a/100;
	a%=100;
    return s;
}
int F(int &a){
	int s=a/50;
	a%=50;
	return s;
}
int Tw(int &a){
	int s=a/20;
	a%=20;
	return s;
}
int T(int &a){
	int s=a/10;
	a%=10;
	return s;
}
int Fi(int &a){
	int s=a/5;
	a%=5;
	return s;
}
int O(int a){
	return (a/1);
}