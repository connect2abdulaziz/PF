/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
using namespace std;

int main()
{
	//Getting input from user through c
	char c;
	cout << "Enter the Character: ";
	cin >> c;
	//condition checking if character is in lower case
	if ( c >= 'a'  &&  c <=  'z')
	{
		cout << "You entered a lower case alphabet";
		cout<< endl;
	}
	//condition checking if charactor is an upper case
	else if ( c >= 'A' && c <= 'Z')
	{
		cout << "You entered an upper case alphabet";
		cout<< endl;
	}
	// if other charactor 
	else
	{
		cout << "You entered character other than upper and lower case alphabet";
		cout<< endl;
	}


	return 0;
}