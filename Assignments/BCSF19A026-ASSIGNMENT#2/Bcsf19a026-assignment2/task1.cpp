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
		int sum = 0, j = 1; //Declaration && Initilization.
		for (int i = 0; i < 10; i++)
		{
			cout << (j += i) << " ";
		}
		cout << ".......n";
		cout << endl;
		//getting no of term in n from user.
		cout << "Enter the number upto which you want to to calculate sum of the above series: ";
		int n;
		cin >> n;
		while (n <= 0)
		{
			cout << "ERROR! Invalid input\nThe number should be at least 1: ";
			cin >> n;
		}
		// j is a counter varriable.
		j = 1;
		//Declaring another varriable named temp to get the next number of the series and add it in the total.
		int temp = j;
		while (j <= n)//loop will terminate after nth itration.
		{
			sum = sum + temp;
			temp = temp + j;
			j++;
		}
		//Display the Sum of the series.
		cout << "The Sum of the above Series upto " << n << "th term is: " << sum << endl;
		

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