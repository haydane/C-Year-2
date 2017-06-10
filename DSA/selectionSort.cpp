#include <iostream.h>
void selectionSort(int a[],int n)
{
	int i,j,tmp,pos,small;
	for(i=0;i<n-1;i++)
	{
		small=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
				pos=j;
			}
		}
	tmp=a[pos];
	a[pos]=a[i];
	a[i]=tmp;
	}
}

void main()
{
	int a[3]={3,2,1};
	int i;
	for(i=0;i<3;i++)
		cout << a[i] << "\t";
	selectionSort(a,3);
	cout << endl;
	for(i=0;i<3;i++)
		cout << a[i] << "\t";
}