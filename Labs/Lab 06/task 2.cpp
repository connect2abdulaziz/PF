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
	cout << "LAB NO: 06\n\n";

	char repeat;
	do
	{
		const int N = 5;
		int temp = 1;
		int temp1 = 65;
		for (int i = 1; i <= N; i++)
		{
			for (int k = N - i; k > 0; k--)
				cout << "  ";
			for (int j = 0; j < i; j++)
			{
				if (i % 2 == 1)
				{
					cout << temp << " ";
					temp++;
				}
				else
				{
					cout << char(temp1) << " ";
					temp1++;
				}
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
