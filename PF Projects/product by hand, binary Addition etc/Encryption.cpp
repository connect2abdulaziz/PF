#include<iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	string msg;
	char k;
	cout << "Enter Personal Message: ";
	getline(cin, msg);
	cout << "Set Password to encrypt the msg: ";
	k = _getch();
	cout << endl;
	cout << "Encrypted msg: ";
	for (int i = 0; i < msg.length(); i++)
	{
		msg[i] =  msg[i]  + k ;
		cout << msg[i];
	}
	cout << "\n\n";
	char key = rand();
	while (key != k)
	{
		key = rand();
		cout << "Cracking!!..........." <<key<< endl;
	}
	cout << "\n\nkey is: " << key << endl;

	cout << "\n\nDecrypted msg: ";
	for (int i = 0; i < msg.length(); i++)
	{
		msg[i] = msg[i] - key;
		cout << msg[i];
	}
	cout << endl;
	system("pause>0");
	return 0;
}