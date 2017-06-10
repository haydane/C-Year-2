#include <student.h>
void main()
{
	student stu2(301,"Hay Dane",9.99);
	student stu3(401,"Hay Day",77.8);
	fstream f("stu.obj",ios::binary|ios::in|ios::out);
	if(f.fail())
	{
		cout << "Error cannot open file\n";
		return;
	}
	//student stu;
	f.seekp((2-1)*sizeof(student),ios::beg);
	f.write((char*)&stu2,sizeof(student));
	f.seekp(0);
	f.write((char*)&stu3,sizeof(student));
	f.close();
}