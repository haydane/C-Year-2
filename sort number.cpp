#include <iostream.h>
void main()
{
	int a[10],i,n,s;
	cout << "n: ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] =";
		cin >> a[i]; 
	}	
		for(i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			 }
		cout << "\n";
		for(i=0;i<n;i++)
		cout << a[i] << endl;

}