/*
Abdul Aziz
BCSF19A026
*/

#include <iostream>
using namespace std;

const int N = 10; 


//for this task i define 2 function as we know to find sparse number too many time we perform the same thing again and again..
int toBinary(int); 
bool sparse(long long int);

int main()
{
	char repeat;
	do
	{

		long long int bin = 0, num;
		cout << "Enter the number in decimal: ";
		cin >> num;
		while (num < 0)
		{
			cout << "ERROR!! invalid number!\nTry some poistive number: ";
			cin >> num;
		}
		bin = toBinary(num);
		cout << "Binary equavelent: " << bin << endl;
		//now to check for sparse.
		bool isSparse = false;
		isSparse = sparse(bin);
		if (isSparse)
		{
			cout << "The Number is sparse as well\n";
		}
		else
		{
			while (!isSparse)
			{
				num++;
				bin = toBinary(num);
				isSparse = sparse(bin);
			}
			cout << "The Entered number is not sparse!\n";
			cout << "The Next Sparse number is " << num << " whose binary Equavelent is: " << bin << endl;
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

int toBinary(int num)
{
	long int bin = 0;
	while (num < 0)
	{
		cout << "ERROR!! invalid input\n";
		cout << "Re-enter a postive num: ";
		cin >> num;
	}
	int temp = 0;
	int count = 0;
	while (num > 0)
	{
		temp = num % 2;
		bin = bin * N + temp;
		num = num / 2;
		count++;
	}
	num = bin;
	bin = 0;
	while (count > 0)
	{
		temp = num % N;
		bin = bin * N + temp;
		num = num / N;
		count--;
	}
	return bin;
}

bool sparse(long long int num)
{
	int temp1, temp2;
	temp1 = num % N;
	num = num / N;
	while (num > 0)
	{
		temp2 = temp1;
		temp1 = num % N;
		num = num / N;
		if ((temp1 == temp2) && temp1 == 1)
		{
			return false;
		}

	}
	return true;
}