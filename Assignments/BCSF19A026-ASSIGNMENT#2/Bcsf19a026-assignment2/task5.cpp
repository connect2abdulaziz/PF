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
		const int N = 10;
		int num, num1 = 0, reverse = 0;
		cout << "Enter the number: ";
		cin >> num;
		while (num <= 0)
		{
			cout << "ERROR!! Invalid input\n";
			cout << "Re-enter a positive number:";
			cin >> num;
		}
		cout << num;
		num1 = num;
		for (int temp = 0; num > 0; num = num / N)
		{
			temp = num % N;
			reverse = reverse * N + temp;
		}
		if (reverse == num1)
		{

			cout << " is a Palindrome" << endl;

		}
		else
		{
			cout << " is not a Palindrome" << endl;

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

