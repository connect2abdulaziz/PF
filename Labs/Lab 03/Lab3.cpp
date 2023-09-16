/***************************
 *      Name: AbdulAziz    *
 *    Roll No: BCSF19A026  *
 ***************************/
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{

	char repeat = 0;
	do
	{
		cout << "*********************\n* Lab: 03 *\n********************* " << endl << endl;

		/************************************
		 * Getting Selection from the user  *
		 ************************************/
		int choice;
		cout << "Enter 1 if you want to generate a random number between 3-12\n";
		cout << "Enter 2 if you want to find square root of a number\n";
		cout << "Enter 3 if you want to use the trigonometric function\n";
		cout << "Enter 4 if you want to find power of a number\n";
		cout << "Your selection: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int num;
			num = rand() % 9 + 3;
			cout << "num: " << num << endl;
		}
		break;

		case 2:
		{
			int num;
			cout << "Enter num: ";
			cin >> num;
			num = sqrt(num);
			cout << "Sqrt: " << num << endl;

		}
		break;
		case 3:
		{
			int num;
			cout << "Enter num: ";
			cin >> num;
			cout << "Sin of " << num << ": " << sin(num) << endl;
			cout << "Cos of " << num << ": " << cos(num) << endl;
			cout << "Tan of " << num << ": " << tan(num) << endl;

		}
		break;
		case 4:
		{
			int a, b;
			cout << "Enter two num(separeted with space): ";
			cin >> a >> b;
			int result1 = pow(a, b);
			int result2 = 0;
			result2 = a;
			for (int i = 0; i < b-1 ; i++)
			{
				result2 = result2 * a;
			}
			if (result1 == result2)
			{
				cout << "You found Correct Solution\n";
			}
			else
			{
				cout << "Your Solution is false\n";
			}
		}
		break;
		default:
		{
			cout << "You enterd wrong input\n";
		}
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

	} while (toupper(repeat) == 'R');



	return 0;
}
