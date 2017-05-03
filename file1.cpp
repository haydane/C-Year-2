#include <iostream.h>
#include <conio.h>
#include <fstream.h>

class Data{
	protected:
  	char data[100];
    ofstream outfile;
    ifstream infile;
  public:
  	void input()
    {
    	outfile.open("test.txt"'a');
      	cout<<"Name: ";		
        cin.get(data,100);	
        outfile<<data<<"\t";  
        cin.seekg(0);
        cout<<"Gender: ";		
        cin.get(data,100);	
        outfile<<data<<"\t";
        cin.seekg(0);
        cout<<"Age: ";		
        cin.get(data,100);	
        outfile<<data<<"\n";
        cin.seekg(0);
        outfile.close();
    }
    void output()
    {
      infile.open("test.txt");
        /*cout<<"Name\tSex\tAge"<<endl;
      	infile>>data;		cout<<data << "\t";
        infile>>data;		cout<<data << "\t";
        infile>>data;		cout<<data << "\n";*/
        while(!infile.eof())
        {
          getline(infile,data);
          cout << data << endl; 
        }
      infile.close();
};
void main()
{
    nene: 
    clrscr();
    Data obj;
    cout << "1.input" << endl;
    cout << "2.output" << endl;
    switch(getch())
    {
    case '1' :
    clrscr(); 
    obj.input(); break;
    case '2' :
    clrscr();
    obj.output(); break;
    } getch(); goto nene;
}
