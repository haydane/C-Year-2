#include <iostream.h>
#include <string.h>

//Personal Example class template
/*template <class Stu>
class Student{
private:
	Stu name,sex,age;
public:
	Student(){
		name = NULL;
		sex = NULL;
		age = NULL;
	}
	void input(){
		cout<<"Name: ";	cin>>name;
		cout<<"Sex: ";		cin>>sex;
		cout<<"Age: ";		cin>>age;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Sex: "<<sex<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

void main(){
	Student <string> obj1();
	obj1.input();
}*/

//Example 5 class template
/*template <class T>
class MaxMin{
public:
	T num1,num2;
	MaxMin(T a,T b){
		num1=a;
		num2=b;
	}
	T Maximum();
	T Minimum();
};
template <class T>
T MaxMin <T>::Maximum(){
	return (num1>num2?num1:num2);
}
template <class T>
T MaxMin <T>::Minimum(){
	return (num1<num2?num1:num2);
}
void main(){
	MaxMin <int> obj1(10,20);
	MaxMin <float> obj2(22.11,11.11);
	cout<<"Maximum obj1: "<<obj1.Maximum()<<endl;
	cout<<"Minimum obj1: "<<obj1.Minimum()<<endl;
	cout<<"Maximum obj2: "<<obj2.Maximum()<<endl;
	cout<<"Minimum obj2: "<<obj2.Minimum()<<endl;
}*/

//Example 4 class template
/*template <class T>
class Cuboid{
public:
	T x,y,z;
	Cuboid(T L,T W,T H){
		x=L;
		y=W;
		z=H;
	}
	T surface_area();
	T volume();
};
template <class T>
T Cuboid <T>::surface_area(){
	return 2*(x*y+y*z+z*x);
}
template <class T>
T Cuboid <T>::volume(){
	return x*y*z;
}
void main(){
	Cuboid <int> C1(5,6,4);
	Cuboid <double> C2(2.5,3.5,4.5);
	cout<<"Vomune of C1: "<<C1.volume()<<endl;
	cout<<"Vomune of C2: "<<C2.volume()<<endl;
	cout<<"Surface of C1: "<<C1.surface_area()<<endl;
	cout<<"Surface of C2: "<<C2.surface_area()<<endl;
}*/

//Example 3 function template
/*template <class T>
void Listsort(T A[],const int n){
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++)
			if(A[j]>A[j+1])
				Swap(A[j],A[j+1]);
	}
}

template <class T>
void Display(T A[],const int size){
	for(int i=0;i<size;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}

template <class T>
void Swap(T &x,T &y){
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void main(){
	const int K=6,J=7,N=7;
	int Bill[J] = {20,30,70,80,40,50,60};
	char ch[N] = {'R','i','t','h','i','r','o'};
	double Kim[K] = {4.5,5.6,1.2,7.8,8.9,3.2};

	Listsort(Bill,J);
	Display(Bill,J);
	Listsort(Kim,K);
	Display(Kim,K);
	Listsort(ch,N);
	Display(ch,N);
}*/

//Example 2 function template
/*template <class Test>
Test maximum(Test &a, Test &b){
	if(a>b)	return a;
	else return b;
}
Test sum(Test &x, Test &y){
	return x+y;
}
void main(){
	int x=10,y=20;
	float n=11.22,m=22.11;
	cout<<"Max: "<<maximum(x,y)<<endl;
	cout<<"Max: "<<maximum(n,m)<<endl;
	cout<<"Sum int: "<<sum(x,y)<<endl;
	cout<<"Sum float: "<<sum(n,m)<<endl;
}*/

//Example 1 function template
/*template <class T> //Template definition of swap()
void Swap(T &x,T &y){ // values passed on by reference
	T temp;
	temp = x;
	x = y;
	y = temp;
}
void main(){
	int n=60,m=30;
	char ch1='A', ch2='D';
	double a=2.45,b=4.76;
	char *s1 = "Morning"; //s1 and s2 are string object;
	char *s2 = "Evening"; //their type is string
	Swap(a,b);
	Swap(ch1,ch2);
	Swap(n,m);
	Swap(s1,s2);

	cout<<"a: "<<a<<"\tb: "<<b<<endl;
	cout<<"ch1: "<<ch1<<"\tch2: "<<ch2<<endl;
	cout<<"n: "<<n<<"\tm: "<<m<<endl;
	cout<<"s1: "<<s1<<"\ts2= "<<s2<<endl;
}*/