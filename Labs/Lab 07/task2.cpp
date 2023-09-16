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



int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << "LAB NO: 07\n\n";

	char repeat;
	do
	{

		int marks1[3] = { 90, 87, 88 };
		int marks2[3] = { 74, 77,  75 };
		int marks3[3] = { 60,  61,  60 };
		string name[3] = { "Iqra", "Usama", "Osama" };
		int indix = -1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (marks1[i] < marks1[j])
					indix = j;
			}
		}
		cout << name[indix] << " has highest marks in Basic Electronix: " << marks1[indix] << endl;


		 indix = -1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (marks2[i] < marks2[j])
					indix = j;
			}
		}
		cout << name[indix] << " has highest marks in PF: " << marks2[indix] << endl;
		 indix = -1;


		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (marks3[i] < marks3[j])
					indix = j;
			}
		}
		cout << name[indix] << " has highest marks in DLD: " << marks3[indix] << endl;
	

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
