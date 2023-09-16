/*
Abdul Aziz
BCSF19A026
*/

#include <iostream>
using namespace std;



int main()
{
	/* As we know that in the task it is required to display the 
	   pattern having 5 rows so we kept a constant else if we 
	   requird to ask user for no of rows than remove const and ask for input.*/

	const int N = 10;
	for (int i = 0; i < N; i = i + 2)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (j % 2 != 0)
			{
				cout << j - i;
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	system("pause>0");
	return 0;
}

