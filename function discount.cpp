#include <iostream.h>
int discount(int,int);
void main()
{
	int pri,dis;
	char item[20];
	cout << "item: ";
	cin.seekg(0);
	cin.get(item,20);
	cout << "Price: ";
	cin >> pri;
	cout << "discout: ";
	cin >> dis;
	cout << "after discount: " << discount(pri,dis);
}
int discount(int pr,int di)
{
	return (pr-(pr*di)/100);

}