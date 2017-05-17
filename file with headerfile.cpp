#include <student.h>
void main()
{
	student stu1(101,"Hay",88.99);
	student stu2(201,"Dane",99.99);
	ofstream out("stu1.obj",ios::binary);
	if(out.fail())
	{
		cout << "cannot open file";
		return;
	}
	out.write((char*)(&stu1),sizeof(student));
	out.write((char*)(&stu2),sizeof(student));
	out.close();
	cout << "Two Students were written to file stu1.obj\n";
	sleep(1);
	system("cls");
	ifstream in("stu1.obj",ios::binary|ios::in|ios::ate);
	if(in.fail())
	{
		cout << "cannot open file\n";
		return;
	}
	student stu;
	long mum = in.tellg()/sizeof(student);
	if(mum == 0)
		return;
	in.seekg(0);
	student::header();
	in.read((char*)(&stu),sizeof(student));
	stu.output();
	in.read((char*)(&stu),sizeof(student));
	stu.output();
	cout << endl;
	in.close();
}