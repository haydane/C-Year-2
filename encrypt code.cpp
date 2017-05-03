#include <iostream.h>
#include <string.h>
// xor encryption and decryption function
	string XOR(string data, char key[])
	{
		string xorstring = data; // initially new variable for our xordata
		for(int i=0;i<xorstring.size();i++) // for loop for scrambling bits in the string
		{
			xorstring[i]=data[i]^key[i%(sizeof(key)/sizeof(char))]; //scrambling the string
		}
		return xorstring; 
	}

	// xor function works both ways!
int main()
{
	char key[50]={'k','E','Y'};
	string data= XOR("∟-<nK20le o▲e*l♫ )?",key);
	//cout << data;
	getchar();
	return 0;
}