#include <iostream.h>
class Perent
{
protected:
	char name[20];
	int age;
	float math,kh,eng,avg;
};
class Child : protected Perent
{
		public:
			void input()
			{
				cout << "\nName: ";
				cin.seekg(0);
				cin.get(name,20);
				cout << "Math: ";
				cin >> math;
				cout << "Khmer: ";
				cin >> kh;
				cout << "English: ";
				cin >> eng;
			}
			void output()
			{
				cout << "\n" << name << '\t' << average() << endl;
			}
			char average()
			{
				avg = ( math + kh + eng ) / 3.0;
				if(avg>=90)
					return 'A';
				else if(avg>=80)
					return 'B';
				else if(avg>=70)
					return 'C';
				else if(avg>=40)
					return 'D';
				else return 'E';
			}
		};
class test : public Child
{
public:
	void dane()
	{
		cout << "My name is Dane and I am 19 years olds";
	}
};  
void main()
{
	int n,i;
	cout << "input n: ";
	cin >> n;
	Child *obj1 = new test[n];
	for(i=0;i<n;i++)
		obj1[i].input();
	for(i=0;i<n;i++)
		obj1[i].output();
}