/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cout << "********************\n";
	cout << "* AsSalamo Alaikum *\n";
	cout << "********************\n";
	char repeat = 0;
	do
	{


		int accountNo;
		char type;
		string acType;
		float minBalance, currentBalance;
		cout << "Enter Your Account No: ";
		cin >> accountNo;
		cout << "Enter minimum Balance: ";
		cin >> minBalance;
		cout << "Enter Current Balance: ";
		cin >> currentBalance;
		cout << "Chose Your Account type\n";
		cout << "Press 'S' for Saving account\n";
		cout << "Press 'C' for Checking acount\n";
		cout << "Your Selection: ";
		cin >> type;
		if (toupper(type) == 'S')
		{
			currentBalance += currentBalance * 0.04;
			acType = "Saving Account";
		}
		else
		{
			if (currentBalance > minBalance + 5000)
			{
				currentBalance += currentBalance * 0.03;
			}
			else
			{
				currentBalance += currentBalance * 0.05;
			}
			acType = "Checking Account";
		}
		cout << "Account No: " << accountNo << endl;
		cout << "Account Type: "<<acType << endl;
		cout << "Minimum Balance: " << minBalance << endl;
		cout << "Current Balance: " << currentBalance << endl;
		/****************************
			Asking for another Task *
		*****************************/
		cout << "Do you want to repeat the program or quit? (R/Q) ";
		cin >> repeat;
		while (!(toupper(repeat) == 'R' || toupper(repeat) == 'Q'))
		{
			cout << "Please enter R or Q: ";
			cin >> repeat;
		}
		cin.ignore();
	} while (toupper(repeat) == 'R');
	return 0;

}