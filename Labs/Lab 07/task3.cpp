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
		int arr[10];
		
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter number: ";
			cin >> arr[i];
			for (int j = 0; j < i; j++)
			{
				while (arr[i] == arr[j])
				{
					cout << "Data is present already!\n";
					cout << "Enter number: ";
					cin >> arr[i];
				}
			}
			cout << "Unique_Data> ";
			for (int k = 0; k <= i; k++)
			{
				cout << arr[k] << " ";
			}
			cout << endl;
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

		cin.ignore();
		system("cls");
	} while (repeat == 'Y' || repeat == 'y');
	return 0;
}
