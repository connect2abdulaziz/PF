#include<iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
	cout << fixed << right;
	cout.fill('0');

	char option;
	do
	{
		int year = 0, month = 0, date = 0;
		long long int d = 0, day = 0;
		cout << "************************************" << endl;
		cout << "Finding name of the day for any date" << endl;
		cout << "************************************" << endl;
		cout << "\tDay: ";
		cin >> day;
		while (day <= 0 || day > 31)
		{
			cout << "ERROR!! Invalid Day\n";
			cout << "Please re-enter the Day:";
			cin >> day;
		}
		cout << "\tMonth: ";
		cin >> month;
		while (month <= 0 || month > 12)
		{
			cout << "ERROR!! Invalid Month\n";
			cout << "Please re-enter the Month:";
			cin >> month;
		}
		cout << "\tYear: ";
		cin >> year;
		while (year < 0)
		{
			cout << "ERROR!! Invalid Year\n";
			cout << "Please re-enter the Year:";
			cin >> year;
		}
		for (int i = 0; i < year; i++)
		{
			int j, k, l;
			j = i % 4;
			k = i % 100;
			l = i % 400;
			if (j != 0)
			{
				d = d + 365;
			}
			else
			{
				if (k == 0 && l != 0)
				{
					d = d + 365;
				}
				else
				{
					d = d + 366;
				}
			}
		}
		if (month >= 2)
		{
			d = d + 31;
		}
		if (month >= 3)
		{
			int j, k, l;
			j = year % 4;
			k = year % 100;
			l = year % 400;
			if (j != 0)
			{
				d = d + 28;
			}
			else
			{
				if (k == 0 && l != 0)
				{
					d = d + 28;
				}
				else
				{
					d = d + 29;
				}
			}
		}
		if (month >= 4)
		{
			d = d + 31;
		}
		if (month >= 5)
		{
			d = d + 30;
		}
		if (month >= 6)
		{
			d = d + 31;
		}
		if (month >= 7)
		{
			d = d + 30;
		}
		if (month >= 8)
		{
			d = d + 31;
		}
		if (month >= 9)
		{
			d = d + 31;
		}
		if (month >= 10)
		{
			d = d + 30;
		}
		if (month >= 11)
		{
			d = d + 31;
		}
		if (month == 12)
		{
			d = d + 30;
		}
		d = d + day;
		d = d % 7;
		cout << "\t*******" << endl;
		cout << "The Day on the Date " << setw(2) << day << "/" << setw(2) << month << "/" << setw(4) <<  year << " is: ";
		switch (d)
		{
		case 4: cout << "Tuesday" << endl;
			break;
		case 5: cout << "Wednesday" << endl;
			break;
		case 6: cout << "Thursday" << endl;
			break;
		case 0: cout << "Friday" << endl;
			break;
		case 1: cout << "Seturday" << endl;
			break;
		case 2: cout << "Sunday" << endl;
			break;
		case 3: cout << "Monday" << endl;
			break;
		}
		cout << "Do you want again!!" << endl;
		cout << "Press 'Y' if you want again or any key to terminate: ";
		cin >> option;
	} while (option == 'y' || option == 'Y');
	cout << "\n\n\t**** Thank You ****\n";
	cout << "\t**** Bye Bye ****\n";



	return 0;
}