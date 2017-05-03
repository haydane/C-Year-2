#include <iostream.h>
class fri
{
private:
	float x,y;
public:
	void input()
	{
		cout << "Input x: ";
		cin >> x;
		cout << "Input y: ";
		cin >> y;
	}
		friend float sum(fri &f)
		{
			return f.x+f.y;
		}
		friend void output(fri &f)
		{
			cout << "x: " << f.x << "\n" << "y: " << f.y << endl << endl;
		}
		friend void sort(fri &f)
		{
			if(f.x>f.y)
			{
				int tmp;
				tmp=f.y;
				f.y=f.x;
				f.x=tmp;
			}	
		}
};
void main()
{
	fri b;
	b.input();
	output(b);
	sort(b);
	output(b);
}