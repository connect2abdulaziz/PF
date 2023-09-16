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
		int row,temp;
		cout << "Enter the number of rows: ";
		cin >> row;
		while (row <= 0)
		{
			cout << "ERROR!! invalid number!\nTry some poistive number: ";
			cin >> row;
		}
		for (int i = 0; i < row; i++)
		{
			
			for (int j = 0; j < row ; j++)
			{
				temp = j - i;
				if (temp < 0)
				{
					temp = temp * -1;
				}
				cout << temp << " ";
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

