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
		const int N = 100;
		int arr[N] = { 0 };
		int indix = -1;
		int n;
		cout << "Enter the Size of the array: ";
		cin >> n;
		cout << "Enter element of the array one by one: ";
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int smallest;
		smallest = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] <= smallest)
			{
				smallest = arr[i];
				indix = i;
			}
		}
		cout << "Smallest is " << arr[indix] << " at indix " << indix << endl;
		int secSmallest;
		if (arr[0] != smallest)
			secSmallest = arr[0];
		else
			secSmallest = arr[1];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == smallest)
			{
				continue;
			}
			else
			{
				if (arr[i] <= secSmallest)
				{
					secSmallest = arr[i];
					indix = i;
				}
			}
		}
		cout << "2nd Smallest is " << arr[indix] << " at indix " << indix << endl;


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
