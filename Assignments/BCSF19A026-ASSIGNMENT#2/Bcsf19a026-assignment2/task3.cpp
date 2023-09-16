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
		int num;
		cout << "Enter Number: ";
		cin >> num;
		while (num <= 0)
		{
			cout << "ERROR!! invalid number!\nTry some poistive number: ";
			cin >> num;
		}
		int ch, max;
		for (int i = 0; i < num; i++)
		{
			ch = 65; // Ascii of 'A'
			max = 6; // Maximum difference
			cout << char(ch) << " "; // to print 1st column.
			for (int j = i; j < num - 1; j++)
			{
				ch = ch + max; // to print jth row.
				if (ch  > 90) // condition to check upper limit
				{
					ch = ch % 90 + 64; // reversing back to starting point
					cout << char(ch) << " ";
				}
				else
				{
					cout << char(ch) << " ";
				}
				max--;
				if (max == 0) //condition to check difference
				{
					max = 6;
				}
			}
			cout << endl;
		}


		//Asking to check for another input.
		cout << "Do You want to use again for another input? (A/Q):";
		cin >> repeat;
		while (repeat != 'A'  && repeat != 'a' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}
		system("cls");
	} while (repeat == 'A' || repeat == 'a');
	return 0;
}