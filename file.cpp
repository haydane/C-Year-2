/*
-ifstream: for reading data from file.
-ofstream: for writing data to file.
-fstream: write and read data from file.
-opening file :
 1) constructor 
 	ifstream(char *filename,int mode= ios::in); open file for reading data;
 	ofstream(char *filename,int mode= ios::out) open file for writing data;
 	fstream(char *filename,int mode[write or read]);
 2) function member open
 	void open(char *filename,int mode= ios::in);
 	void open(char *filename,int mode= ios::out);
 	void open(char *filename,int mode);

 	mode                   Meaning
 	ios::in                open file for reading data;
 	ios::out	           open file for writing data;
 	ios::app               open file for appending data;
 	ios::ate               open file without starting from starting point
 	ios::binary			   open binary file;
 	ex: open a text file (my file).xxx in the current directory for writing data.
 	1) constructor : 
 		ofstream out("myfilee.xxx") or fstream out("myfile.xxx",ios::out);
 	2) function member open
 		ofstream fout;
 		fout.open ("myfile.xxx",ios::out);
 	ex2: open a text file (my file.xxx) in the root directory of drive C for reading data.
 		if using constructor :
 			ifstream fin("c:\\myfile.xxx") or fstream fin("c:\\myfile.xxx",ios::in);
 		else
 			fstream fin;
 			fin.open("c:\\myfile.xx",ios::in);
 	ex3: open a text file (my myfile.xxx) in the directory c:\rupp for both rw
 		using constructor :
 			fstream finout("c:\\rupp\\myfile.xxx",ios::in|ios::out);
 		using function member open 
 			fstream finout;
 			finout.open("c:\\rupp\\myfile.xxx",ios::in|ios::out);
 	ex4: open a text file ("myfile.xxx") in the current directory for appending data;

*/
#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <dos.h>
/*void main()
{
	char data[20];
	ofstream out("Ne.bin",);
	out << "Hello World" << endl;
	ifstream in("Ne.bin",ios::in);
	in >> data;
	cout << data;

}*/
class person
{
protected:
	char name[80];
	int age;
public:
	void getData()
	{
		cout << "Enter name: ";
		cin >> name;
		cin.seekg(0);
		cout << "Age: ";
		cin >> age;
	}
	void showData()
	{
		cout << "Name: " << name;
		cout << "\nAge: " << age;
	}
};
void main()
{
	person pers0,pers1;
	int i;
	pers0.getData();
	ofstream outfile("Person.DAT");
	outfile.write((char*)(&pers0),sizeof(pers0));
	outfile.close();
	system("cls");
	cout << "reading from file";
	for(i=0;i<3;i++)
	{
		cout << ".";
		sleep(1);
	}
	system("cls");
	ifstream infile("Person.DAT");
	infile.read((char*)(&pers1),sizeof(pers1));
	pers1.showData();
	//system("Person.dat");
	/*pers0.getData();
	fstream rwFile;
	rwFile.open("Person.dat",ios::in | ios::out);
		rwFile.write((char*)(&pers0),sizeof(pers0));
		rwFile.read((char*)(&pers1),sizeof(pers1));
	pers1.showData();
	rwFile.close();*/
}