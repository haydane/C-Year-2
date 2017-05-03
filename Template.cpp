#include <iostream.h>
template <class T>
void sort(T a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				T temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
template <class T>
void display(T b[],int n)
{
	for(int i=0;i<n;i++)
		cout << b[i] << endl;
}
void main()
{
	const int b=4;
	int hay[b]={4,8,1,19};
	sort(hay,b);
	display(hay,b);
}