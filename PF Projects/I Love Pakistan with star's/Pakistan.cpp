#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int n;
	cout << "Enter row: ";
	cin >> n;
	cout << endl << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << setw(42) << " ";
		for (int j = 0; j <= n / 4; j++)
		{
			if (i == 1 || i == n)
				cout << "*";
			else if ((i > 1 && i < n) && j == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	system("pause>0");
	for (int i = 0; i <= n / 2; i += 2)
	{
		cout << setw(29) << " ";
		for (int j = -n; j <= n + i; j++)
		{
			if (j == i || j == n - i)
				cout << "*";
			if (i < n && (j == -(i + 1) || j == (n + i)))
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;

	}
	for (int i = -n / 2 - 1; i <= n / 2 + 1; i += 2)
	{
		cout << setw(29) << " ";
		for (int j = -n; j <= n + n; j++)
		{
			if (j == i || j == (n - i) + 1)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;

	}
	cout << endl << endl;
	system("Pause>0");
	for (int i = 1; i <= n; i++)
	{
		cout << "* ";
		for (int j = 1; j <= n / 2; j++)
		{
			if ((i == 1 || i == n / 2 + 1) && j < n / 2)
				cout << "* ";
			else if ((i > 1 && i <= n / 2) && j == n / 2)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";

		for (int j = 1; j <= n / 2; j++)
		{
			if ((i == 1 || i == n / 2 + 1) && (j > 1 && j < n / 2))
				cout << "* ";
			else if (i > 1 && (j == 1 || j == n / 2))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";

		cout << "* ";
		for (int j = 0; j <= n / 2; j++)
		{

			if (j == abs(n / 2 + 1 - i))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";
		for (int j = 0; j <= n / 4; j++)
		{
			if (i == 1 || i == n)
				cout << "*";
			else if ((i > 1 && i < n) && j == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << setw(3) << " ";

		for (int j = 0; j <= n / 2; j++)
		{
			if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 0 && j < n / 2))
				cout << "* ";
			else if (j == 0 && i > 1 && i < n / 2 + 1)
				cout << "* ";
			else if (j == n / 2 && (i > n / 2 + 1 && i < n))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";

		for (int j = 0; j <= n / 2; j++)
		{
			if (i == 1)
				cout << "* ";
			else if (j == n / 4)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";

		for (int j = 1; j <= n / 2; j++)
		{
			if ((i == 1 || i == n / 2 + 1) && (j > 1 && j < n / 2))
				cout << "* ";
			else if (i > 1 && (j == 1 || j == n / 2))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << setw(3) << " ";

		cout << "*";
		for (int j = 1; j <= n; j++)
		{
			if (j == i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "*";
		cout << endl;

	}
	system("pause> 0");



	return 0;
}