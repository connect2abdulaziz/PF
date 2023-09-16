/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 100 //Keeping max size of the Array
using namespace std;
//Input function
void getInput(int[], int);
void frequency(int[], int);
void frequency(int[], int, int); // overloading by changing argument
void display(int[], int);

int main()
{
	char repeat;
	do
	{
		srand(time(0));
		int arr[MAX];
		int n;
		cout << "Enter size of the array: ";
		cin >> n;
		getInput(arr, n);
		frequency(arr, n);
		int val;
		cout << "\nEnter any val to calculate its frequecy:";
		cin >> val;
		frequency(arr, n, val);
		display(arr, n);

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

void getInput(int arr[], int N)
{
	//As we are required to get input from user at random index
	//so,
	for (int i = 0; i < N; i++)//1st we assign -9999 to each element of the array!
	{
		arr[i] = -9999;
	}
	int random;//for MAX random index;
	int i = 1; // one element store before the loop
	//Now to store data at random index!
	cout << "Enter " << N << " elements of the array: ";
	random = rand() % N;
	cin >> arr[random];
	while (i < N) //to Generate MAX siz random index 
	{
		random = rand() % N;
		while (arr[random] != -9999)
		{
			random = rand() % N;
		}
		cin >> arr[random];
		i++;
	}
}

void frequency(int arr[], int N)
{
	int count = 0, max = 0, index = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (max <= count)
		{
			max = count;
			index = i;
		}
		count = 0;
	}
	cout << "Highest Frequecy element is " << arr[index] << " Having Frequency: " << max << endl;
}
//Frequency of user input value
void frequency(int arr[], int N, int k)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == k)
		{
			count++;
		}
	}
	cout << endl;
	if (count > 0)
	{
		cout << "Frequecy of " << k << " is: " << count << endl;
	}
	else
	{
		cout << k << " Not found in the array!!\n";
	}
}
// Display function
void display(int arr[], int N)
{
	cout << "\nElements of array: ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";

	}
}
