#include <iostream.h>
#include <conio.h>
#include <string.h>
void main(){
Begin:
	system("cls");
	char ssid[20],key[20],full[100];
	cout<<"1. Setup wireless."<<endl;
	cout<<"2. Start wireless."<<endl;
	cout<<"3. Stop wireless."<<endl;
	cout<<"4. Exit"<<endl;
	switch(getch()){
		case '1': 
			cin.seekg(0);
			cout<<"SSID: "; cin.get(ssid,20);
			cin.seekg(0);
			cout<<"Key: ";	cin.get(key,20);
			cin.seekg(0);
			//strcpy(full,"netsh wlan set hostednetwork mode=allow ssid=" );
			system(full);
			break;
		case '2':
			system("netsh wlan start hostednetwork");
			break;
		case '3':
			system("netsh wlan stop hostednetwork");
			break;
		case '4':
			exit(0);
			break;
	}
	goto Begin;
}