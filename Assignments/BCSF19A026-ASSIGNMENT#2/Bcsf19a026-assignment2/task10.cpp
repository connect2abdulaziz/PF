/*
Abdul Aziz
BCSF19A026
*/

#include <iostream>
#include <string>
using namespace std;



int main()
{
	char repeat;
	do
	{
		string s1 = "black", s2 = "white", temp= " ";
		int row = 0;
		cout << "Enter number of row: ";
		cin >> row;
		while (row <= 0)
		{
			cout << "ERROR!! invalid number!\nTry some poistive number: ";
			cin >> row;
		}
		for (int i = 0; i < row; i++)
		{
			for (int j =  1; j < row + row; j++)
			{
				if (j % 2 != 0)
				{
					cout << s1;
					temp = s1;
					s1 = s2;
					s2 = temp;
				}
				else
				{
					cout << "-";
				}
			}
			cout << endl;
		}

		//Asking to check for another input.
		cout << "Do You want to use again for another input? (A/Q):";
		cin >> repeat;
		while (repeat != 'A' && repeat != 'a' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}
		system("cls");
	} while (repeat == 'A' || repeat == 'a');
	return 0;
}

