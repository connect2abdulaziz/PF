#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
	cout << fixed << showpoint << setprecision(2);
	float** a = { NULL };
	float** b = { NULL };
	float** c = { NULL };
	int r1, r2, c2, c1;
	char choice;
	do
	{
	line:
		cout << "Rows of M1: ";
		cin >> r1;
		cout << "Cols of M1:";
		cin >> c1;

		cout << "Rows of M2: ";
		cin >> r2;
		cout << "Cols of M2:";
		cin >> c2;
		while (r1 <= 0 || r2 <= 0 || c1 <= 0 || c2 <= 0)
		{
			cout << "ERROR! Invalid Order!!\n";
			cout << "ROW and COLUMN must be greater than 0\n";
			cout << "Re-enter data please\n";
			goto line;
		}
		if (c1 != r2)
		{
			cout << "Multiplication is not Posssible" << endl;
		}
		else
		{
			a = new float* [r1];
			for (int i = 0; i < r1; i++)
			{
				a[i] = new float[c1];
			}
			cout << "Matrix 1:\n";
			for (int i = 0; i < r1; i++)
			{
				cout << "Enter row" << i + 1 << ": ";
				for (int k = 0; k < c1; k++)
				{
					cin >> a[i][k];
				}
			}
			b = new float* [r2];
			for (int i = 0; i < r2; i++)
			{
				b[i] = new float[c2];
			}
			cout << "Matrix 2:\n";
			for (int i = 0; i < r2; i++)
			{
				cout << "Enter row" << i + 1 << ": ";
				for (int k = 0; k < c2; k++)
				{
					cin >> b[i][k];
				}
			}

			c = new float* [r1];
			for (int i = 0; i < r1; i++)
			{
				c[i] = new float[c2];
			}

			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					c[i][j] = 0;
				}
			}


			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					for (int k = 0; k < r2; k++)
					{
						c[i][j] = c[i][j] + a[i][k] * b[k][j];
					}
				}

			}
			cout << "Ans:";
			for (int i = 0; i < r1; i++)
			{
				cout << endl << "| ";
				for (int k = 0; k < c2; k++)
				{
					cout <<setw(10)<< c[i][k] <<setw(2)<<"";
					c[i][k] = 0;
				}
				cout << " |";

			}

		}

		cout << "\n\nDo you want again?\n";
		cout << "Press 'Y' for again OR any key to terminate: ";
		cin >> choice;
		system("cls");

		for (int i = 0; i < r1; i++)
		{
			if (a[i] != NULL)
			{
				delete[] a[i];
				a[i] = NULL;
			}
			if (c[i] != NULL)
			{
				delete[] c[i];
				c[i] = NULL;
			}
		}
		if (a != NULL)
		{
			delete[] a;
			a = NULL;
		}
		if (c != NULL)
		{
			delete[] c;
			c = NULL;
		}
		for (int i = 0; i < r2; i++)
		{
			if (b[i] != NULL)
			{
				delete[] b[i];
				b[i] = NULL;
			}

		}
		if (b != NULL)
		{
			delete[] b;
			b = NULL;
		}

	} while (choice == 'y' || choice == 'Y');


	system("pause>0");
	return 0;
}