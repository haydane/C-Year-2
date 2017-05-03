#include <iostream.h>
#include <fstream.h>
void main()
{
	 int x,y;
	 char lol[100];
	ofstream infile;
	infile.open("lol.bin");
	cout << "x: "; 
	cin >> x; 
	cout << "y: ";
	cin >> y;
	cin.getline(lol,100);
	infile << lol << endl;
	infile.close();
	
}