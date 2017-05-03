#include <iostream.h>
#include <string.h>
template <class T> //sorting function template
void listsort(T a[],int n)
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
void display(T A[],const int size)
{
	for(int i=0;i<size;i++)
		cout << A[i] << " ";
	cout << endl;
}

void main()
{
	const int K=6,J=7,N=5;
	int Bill[J] = {20,30,70,80,40,50,60};
	char ch[N] = {'D','E','Z','S','A'};
	double Kim[K] = {4.5,6.7,7.8,9.4,3.1,1.2};
	listsort(Bill,J);
	display(Bill,J);
	listsort(Kim,K);
	display(Kim,K);
	listsort(ch,N);
	display(ch,N);
}