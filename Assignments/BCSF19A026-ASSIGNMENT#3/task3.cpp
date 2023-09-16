/*
Abdul Aziz
BCSF19A026
*/
#include<iostream>
#define N 3
#define S 15 
using namespace std;

void getInput(int[][N]);
bool shuMagicSquare(int[][N]);

int main()
{
	char repeat;
	do
	{
		int square[N][N];
		getInput(square); // to get input in 2D array
		if (!shuMagicSquare(square)) //condition to Display Result 
		{
			cout << "Sorry!! Your Square is not a Shu Magic Square!\n";
			cout << "Try again\n";
		}
		else
		{
			cout << "Congritulation! you did it\n";
			cout << "Your square is Shu Magic Square\n";
		}


		//Asking to check for another input.
		cout << "\nDo You want to use again for another input? (A/Q):";
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

void getInput(int arr[][N])
{
	for (int i = 0; i < N; i++)
	{
		cout << "Enter element of row " << i + 1 << " : ";
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			while (arr[i][j] < 1 || arr[i][j]>9)
			{
				cout << "ERROR!! Invalid input!\n";
				cout << "Re-enter in range of 1-9: ";
				cin >> arr[i][j];
			}
		}
	}

}
bool shuMagicSquare(int arr[][N])
{
	bool flag = true;
	int sum = 0;
	cout << "\n\nYour Square:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) // Displaying the Square before to check
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < N; i++)
	{
		sum = 0;
		for (int j = 0; j < N; j++) //Calculating Sum of each row 
		{
			sum = sum + arr[i][j];
		}
		if (sum != S) // Checking for sum of each row 
		{
			flag = false;
			cout << "Sum of Row " << i+1 << " is " << sum << "!\n";
			return flag;
		}
		sum = 0;
		for (int j = 0; j < N; j++) // Calculating Sum of each Col
		{
			sum = sum + arr[j][i];
		}
		if (sum != S) // Checking for sum of each Col
		{
			cout << "Sum of Column " << i+1 << " is " << sum << "!\n";
			flag = false;
			return flag;
		}
	}
	sum = 0;
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N; j++) //Calculating Sum of Main Diagnol
		{
			if (i == j)
			{
				sum = sum + arr[i][j];
			}
		}

	}

	if (sum != S) //Checking Sum of Main Diagnol 
	{
		flag = false;
		cout << "Sum of Diagnol-1 is " << sum << "!\n";
		return flag;
	}
	sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j >= 0; j--) //Calculating Sum of Principal Diagnol
		{
			if (j == N - (i + 1))
			{
				sum = sum + arr[i][j];
			}
		}

	}
	if (sum != S) //Checking Sum of Principal Diagnol
	{
		flag = false;
		cout << "Sum of Diagnol-2 is " << sum << "!\n";
		return flag;
	}
	// if all condition check and flag not return it mean
	// the square is Shu Magic!
	return flag;
}