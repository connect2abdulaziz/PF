/*
Abdul Aziz
BCSF19A026
*/

#include <iostream>
using namespace std;
int main()
{
	char repeat;
	do
	{
		double pow = 1;
		int base, exp;
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter Exponent: ";
		cin >> exp;
		if (exp < 0)
		{
			for (int i = 0; i < -exp; i++)
			{
				pow = static_cast<double>(pow) / base;
			}
		}
		else
		{
			for (int i = 0; i < exp; i++)
			{
				pow = pow * base;
			}
		}
		cout << "Power is: " << pow << endl;
		//Asking to check for another input.
		cout << "Do You want to use again for another input? (A/Q):";
		cin >> repeat;
		while (repeat != 'A' && repeat != 'a' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}
		system("cls");
	} while (repeat == 'A' || repeat == 'a');
	return 0;
}