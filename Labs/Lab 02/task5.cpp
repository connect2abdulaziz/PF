/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
using namespace std;

int main()
{

	int num1, num2 , multiple;
	//Getting values
	cout << "Enter number #1: ";
	cin >> num1;
	cout << "Enter number #2: ";
	cin >> num2;
	// calculating multiple
	multiple = num1 % num2;
	if (multiple == 0) //condition checking for Multiple 
	{
		cout << "1st is Multiple of 2nd";
		cout << endl;
	}
	else 
	{
		cout << "1st is Not Multiple of 2nd";
		cout<< endl;
	}
	cout << endl;
	// calculating multiple if 2nd is of 1st one
	multiple = num2 % num1;
	if (multiple == 0) //condition checking for Multiple 
	{
		cout << "2nd is Multiple of 1st";
		cout << endl;
	}
	else
	{
		cout << "2nd is Not Multiple of 1st";
		cout << endl;
	}
	cout << endl;


	return 0;
}