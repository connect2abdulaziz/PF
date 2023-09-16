/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
double add(double , double );
double subtract(double, double);
double divide(double, double);
double multiply(double, double);
double takesin(double);
double takecos(double);
double taketan(double);

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << "LAB NO: 05\n\n";

	char repeat;
	do
	{
		double num1, num2;
		char choice;
		cout << "1. for addition\n";
		cout << "2. for subtraction\n";
		cout << "3. for division\n";
		cout << "4. for multiplication\n";
		cout << "5. for sin\n";
		cout << "6. for cos\n";
		cout << "7. for tan\n";
		cout << "Your selection: ";
		cin >> choice;
		while (choice < '1' || choice >'7')
		{
			cout << "ERROR!! Invalid input\n";
			cout << "Re-enter in range of 1-7: ";
			cin >> choice;
		}
		if (choice == '1')
		{
			cout << "Enter 1st num: ";
			cin >> num1;
			cout << "Enter 2nd num: ";
			cin >> num2;
			cout << "Sum of " << num1 << " & " << num2 << " is: " << add(num1, num2) << endl;
		}
		else if (choice == '2')
		{
			cout << "Enter 1st num: ";
			cin >> num1;
			cout << "Enter 2nd num: ";
			cin >> num2;
			cout << "Subtraction from " << num1 << " to " << num2 << " is: " << subtract(num1, num2) << endl;
		}
		else if (choice == '3')
		{
			cout << "Enter 1st num: ";
			cin >> num1;
			cout << "Enter 2nd num: ";
			cin >> num2;
			cout << "Division of " << num1 << " by " << num2 << " is: " << divide(num1, num2) << endl;
		}
		else if (choice == '4')
		{
			cout << "Enter 1st num: ";
			cin >> num1;
			cout << "Enter 2nd num: ";
			cin >> num2;
			cout << "Product of " << num1 << " & " << num2 << " is: " << multiply(num1, num2) << endl;
		}
		else if (choice == '5')
		{
			cout << "Enter the num: ";
			cin >> num1;
			cout << "sin of " << num1 << " is: " << takesin(num1) << endl;
		}
		else if (choice == '6')
		{
			cout << "Enter the num: ";
			cin >> num1;
			cout << "cos of " << num1 << " is: " << takecos(num1) << endl;
		}
		else
		{
			cout << "Enter the num: ";
			cin >> num1;
			cout << "tan of " << num1 << " is: " << taketan(num1) << endl;
		}


		//Asking to check for another input.
		cout << "Do You want to use again for another input? (Y/Q):";
		cin >> repeat;
		while (repeat != 'Y' && repeat != 'y' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}
		system("cls");
	} while (repeat == 'Y' || repeat == 'y');
	return 0;
}

double add(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}
double subtract(double a, double b)
{
	double sub;
	sub = a - b;
	return sub;
}
double divide(double a, double b)
{
	double divid;
	divid = a / b;
	return divid;
}
double multiply(double a, double b)
{
	double sub;
	sub = a * b;
	return sub;
}
double takesin(double a)
{
	double b;
	b = sin(a);
	return b;
}
double takecos(double a)
{
	double b;
	b = cos(a);
	return b;
}
double taketan(double a)
{
	double b;
	b = tan(a);
	return b;
}