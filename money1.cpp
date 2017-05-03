#include <iostream.h>
void main()
{
	int money,mon100,mon50,mon20,mon10,mon5,mon2,mon1;
	cout << "Money: ";
	cin >> money;
	mon100=money/100; money=money%100;
	mon50=money/50; money=money%50;
	mon20=money/20; money=money%20;
	mon10=money/10; money=money%10;
	mon5=money/5; money=money%5;
	mon2=money/2; money=money%2;
	mon1=money/1; money=money%1;
	cout << "\n100$: " << mon100 << endl;
	cout << "50$: " << mon50 << endl;
	cout << "20$: " << mon20 << endl;
	cout << "10$: " << mon10 << endl;
	cout << "5$: " << mon5 << endl;
	cout << "2$: " << mon2 << endl;
	cout << "1$: " << mon1 << endl;
}