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
		int num, num2 = 0, num1, sum = 1;
		cout << "Enter the number you want to check: ";
		cin >> num;
		while (num < 0)
		{
			cout << "ERROR! invalid input\n";
			cout << "The number should be +ive and greater then 0: ";
			cin >> num;
		}
		num1 = num;
		while (num > 0) // calculate the sum of the factorials of all the digits.
		{
			int temp = num % 10;
			while (temp > 0)// to get the factorial of left digit
			{
				sum = sum * temp; 
				temp--;
			}
			num2 = num2 + sum;
			num = num / 10;
			sum = 1;
		}
		if (num1 == num2)
		{
			cout << num1 << " is a strong number!" << endl;
		}
		else
		{
			cout << num1 << " is not a strong number!\n";
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