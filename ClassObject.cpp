#include <iostream.h>
class DaneClass
	{
	protected:
	public:
		void name()
		{
			cout << "My name is Dane";
		}
	};
class DaneClass1: 
	public DaneClass 
	{
	protected:
		public : 
		void stu()
		{
			name();
			cout << "\nHello World";
		}
	};
class DaneClass2:
public DaneClass1
{
	public: void stu1()
	{
		stu();
		cout << "LOL";
	}
};

void main()
{
	DaneClass2 DaneObject;
	DaneObject.stu1();
}
