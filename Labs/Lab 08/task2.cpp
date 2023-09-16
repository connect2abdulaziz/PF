/*
ABDUL AZIZ
BCSF19A026
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "\t*******PART-A********\n\n";
	const int N = 4;
	int* A[N];
	int B[N] = { 0,1,2,3 };
	cout << "Locations of Cells of A: ";
	for (int i = 0; i < N; i++)
	{
		cout << &A[i] << " ";
	}
	cout << "\nLocations of Cells of B: ";
	for (int i = 0; i < N; i++)
	{
		cout << &B[i] << " ";
	}
	cout << "\n\nCreating links\n\n";
	int j = 0, k = 1;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{
			*(A + i) = &B[k];
			k = k + 2;
		}
		else
		{
			*(A + i) = &B[j];
			j = j + 2;
		}

	}
	cout << "Displaying the Content of the A and B:\n";
	cout << "Content of Cells of A: ";
	for (int i = 0; i < N; i++)
	{
		cout << *A[i] << " ";
	}
	cout << "\nContent of Cells of B: ";
	for (int i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl << endl << endl;


	//Part B
	cout << "\t*******PART-B********\n\n";
	const int M = 8; //Size of Array 1:
	int A1[M];
	int B1[M];
	int s = 0;// for temp size of B and C:
	int* C1[M];

	//Getting input 
	cout << "Enter element of A: ";
	for (int i = 0; i < M; i++)
	{
		cin >> A1[i];
	}
	for (int i = 0; i < M; i++)
	{
		if (A1[i] % 2 == 0)
		{
			B1[s] = i;
			C1[s] = &A1[i];
			s++;
		}
	}

	//Displaying All arrays
	cout << "Your Array: ";
	for (int i = 0; i < M; i++)
		cout << A1[i] << " ";
	cout << "\nindex\tAddresse\tContent\n";
	for (int i = 0; i < s; i++)
	{
		cout << B1[i] << "\t";
		cout << C1[i] << "\t" << *C1[i] << endl;
	}
	return 0;
}
