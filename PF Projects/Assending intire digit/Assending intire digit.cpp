#include <iostream>
using namespace std;

int main()
{
	long long int num , temp, decinding=0;
	cout << "Enter any number to Arrange its digits in Decinding order: ";
	cin >> num;
	int n = 0; //no of digit
	temp = num;
	while (temp)
	{
		temp = temp / 10;
		n++;
	}
	int a, max, index;//a is used as temperory , max for highest digit, index is location of highest index location.
	for (int i = 0; i < n; i++)
	{
		temp = num;
		max = temp % 10;
		index = n - i;
		for (int j = n - i; j > 0; j--)
		{
			a = temp % 10;
			temp = temp / 10;
			if (max < a)
			{
				max = a;
				index = j;
			}
		}
		a = 1;
		index = n - (index + i);
		while (index)
		{
			a = a * 10;
			index--;
		}
		temp = num;
		num = num % a;
		temp = temp / (a * 10);
		num = temp * a + num;
		decinding = decinding * 10 + max;
	}
	cout << "The Arranged number in Decinding Order is: " << decinding << endl;
	cout << "\n\tI AM A PROGRAMER AND I HAVE NO LIFE\n";
	return 0;
}