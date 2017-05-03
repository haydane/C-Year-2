#include <iostream.h>
template <class T>
class sample
{
private:
	T num;
public:
	void input()
	{
		cout << "Enter num :";
		cin >> num;
	}
	void output()
	{
		cout<<"num :" << num << endl;
	}
	int getnum(){
		return num;
			}
};
template <class T>
void sort(T obj[],int n)
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(obj[i].getnum()>obj[j].getnum())
			{
				temp=obj[i];
				obj[i]=obj[j];
				obj[j]=temp;
			}
}
void main()
{
	sample <char> obj1[10];
	int i,n;
	cout << "input: ";
	cin >> n;
	for(i=0;i<n;i++)
		obj1[i].input();
	sort(obj1,n);
	for(i=0;i<n;i++)
		obj1[i].output();
}