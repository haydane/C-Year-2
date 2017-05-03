#include <iostream.h>
void main()
{
	int i,j,k,x,y,z,l0,k0,s0,s1,s2,Answer,Answer1,*p;
	cout << "first index: "; 
	cin >> i;
	cout << "second index: ";
	cin >> j;
	cout << "third index: ";
	cin >> k;
	cout << "s0: ";
	cin >> s0;
	cout << "s1: ";
	cin >> s1;
	cout << "s2: ";
	cin >> s2;
	cout << "Answer of L0ca [ROW] (" << s0 << "," << s1 << "," << s2 << ")" << " : ";
	cin >> Answer;
	cout << "Answer of L0ca [COLUMN] (" << s0 << "," << s1 << "," << s2 << ")" << " : ";
	cin >> Answer1;
	cout << "L0 (Row) starts from : ";
	cin >>  l0;
	cout << "L0 (Column) starts from: ";
	cin >> k0;
	cout << "\n";
	cout << "a" << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << endl;
	cout << "\nRow Major Order\n";

	for(x=0;x<i;x++)
	{
		for(y=0;y<j;y++)
		{
			for(z=0;z<k;z++)
			{
				cout << "a" << "[" << x << "]" << "[" << y << "]" << "[" << z << "]" << " " << l0++ << " ";
			}
			cout<<"\n"; 
		}
	} 
	cout << "\n";
	cout << "Column Major Order\n";
	for(z=0;z<k;z++)
	{
		for(y=0;y<j;y++)
		{
			for(x=0;x<i;x++)
			{
				cout << "a" << "[" << x << "]" << "[" << y << "]" << "[" << z << "]" << " " << k0++ << "  ";
			}
			cout << "\n";
		}
	}

}