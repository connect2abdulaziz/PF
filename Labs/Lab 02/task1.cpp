/*
 Name: AbdulAziz
 Roll No: BCSF19A026
*/
#include <iostream>
using namespace std;

int main()
{
	//Creating varriables a and b
	int a;
	float b;

	//geting value of a from user
	cout << "Enter the value of a:";
	cout << endl;
	cin >> a;

	//Now getting value for varriable b
	cout << "Enter the value of b:";
	cout << endl;
	cin >> b;

	//Displaying result for a
	cout << "Value of a: ";
	cout << a;
	cout << endl;
	cout << "Size of a: ";
	cout<< sizeof(a); 
	cout << endl;
	cout << "Address of a: ";
	cout << &a; //'&' is used to get the address of varrible
	cout << endl;
	
	//Dislaying Result for b
	cout << "Value of b: ";
	cout << b;
	cout<< endl;
	cout << "Size of b: ";
	cout << sizeof(b); //size of float is 4 bytes
	cout<< endl;
	cout << "Address of b: "; 
	cout << &b; 
	cout<< endl;

	return 0;
}