/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <conio.h>
using namespace std;

void swipR(int&, int&);


int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << "LAB NO: 06\n\n";

	char repeat;
	do
	{
		int a, b;
		cout << "Enter two value: ";
		cin >> a >> b;
		cout << "Value of two variables before swip in main: " << a << " " << b << endl;
		swipR(a, b);
		cout << "Value of two variables after swip in main: " << a << " " << b << endl;




		//Asking to check for another input.
		cout << "Do You want to use again for another input? (Y/Q):";
		cin >> repeat;
		while (repeat != 'Y' && repeat != 'y' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}

		cin.ignore();
		system("cls");
	} while (repeat == 'Y' || repeat == 'y');
	return 0;
}
void swipR(int& a, int& b)
{
	a = a * b;
	b = a / b;
	a = a / b;
}