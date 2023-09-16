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
		int a, b, c;
		cout << "Enter Three sides of the Tringle Respectivilly (Separated with Space): ";
		cin >> a >> b >> c;
		if (a * a == (b * b) + (c * c))
		{
			cout << "Right Angle Tringle with Hypertinues " << a << endl;
		}
		else if (b * b == (a * a) + (c * c))
		{
			cout << "Right Angle Tringle with Hypertinues " << b << endl;
		}
		else if (c * c == (a * a) + (b * b))
		{
			cout << "Right Angle Tringle with Hypertinues " << c << endl;
		}
		else
		{
			cout << "Not Right Angle Tringle" << endl;
		}

		/**********************************
		 Asking to reuse for other inputs *
		***********************************/
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