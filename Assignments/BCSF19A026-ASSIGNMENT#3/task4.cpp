/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>

#define N 5 // As given in the Question to take 2 char array of size 5.
using namespace std;

//Functions Prototypes!

void getInput(char[], char[]);
void Union(char[], char[]);
void intersection(char[], char[]);
void display(char[], int);

int main()
{
	char repeat;
	do
	{
		char arr1[N] = { " " };
		char arr2[N] = { " " };
		getInput(arr1, arr2); //Getting Input
		Union(arr1, arr2);      //Calculating Union of arr1 and arr2
		intersection(arr1, arr2);// Calculating Intersection
		//Note:
		//the Display Function Call in Union && Intersection Functions internally!


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

void getInput(char arr1[], char arr2[]) //Getting Input 
{
	cout << "Input upto " << N << " element of 1st char Array!\n";
	for (int i = 0; i < N; i++)
	{
		cout << "Enter at " << i + 1 << ": ";
		cin >> arr1[i];
		system("cls");
		for (int j = 0; j < i; j++) //Input Validation!
		{
			if (arr1[i] == arr1[j])
			{
				cout << "Invalid!! Char is present already!\n";
				cout << "Re-enter at" << i + 1 << ": ";
				cin >> arr1[i];
				system("cls");
				j = -1;
			}

		}
	}
	arr1[N] = '\0';
	cout << "Array1> " << arr1 << endl;
	cout << "Press enter to continue....\n";
	system("pause>0");
	cout << "Input upto " << N << " elements of 2nd char Array!\n";
	for (int i = 0; i < N; i++)
	{
		cout << "Enter at " << i + 1 << ": ";
		cin >> arr2[i];
		system("cls");
		for (int j = 0; j < i; j++) //Input Validition
		{
			if (arr2[i] == arr2[j])
			{
				cout << "Invalid!! Char is present already!\n";
				cout << "Re-enter at" << i + 1 << ": ";
				cin >> arr2[i];
				system("cls");
				j = -1;
			}

		}
	}
	arr2[N] = '\0';
	cout << "Array1: " << arr1 << endl;
	cout << "Array2: " << arr2 << endl;
	cout << "Press enter to continue....\n";
	system("pause>0");
}

void Union(char arr1[], char arr2[])
{
	char un[N + N];
	int s = 0;
	for (int i = 0; i < N; i++) // 1st to store all element in union array
	{
		un[s] = arr1[i];
		s++;
		un[s] = arr2[i];
		s++;
	}
	for (int i = 0; i < s; i++) // to remove the element which occure more times
	{
		for (int j = i + 1; j < s; j++)
		{
			if (un[i] == un[j])
			{
				while (j < s)
				{
					un[j] = un[j + 1];
					j++;
				}
				s--;
				j = i + 1;
			}
		}
	}
	cout << "\n\nUnion of the 2 array is:  ";
	display(un, s); //This Function Call will Display the Union in Sorting Order
}
void intersection(char arr1[], char arr2[])
{
	char inSectn[N] = { 0 };
	int s = 0;
	for (int i = 0; i < N; i++) //To Store only same element of arr1 && arr2
	{
		for (int j = 0; j < N; j++)
		{
			if (arr1[i] == arr2[j])
			{
				inSectn[s] = arr1[i];
				s++;
				break;
			}
		}
	}
	for (int i = 0; i < s; i++) //to remove If same char occure more than once.
	{
		for (int j = i + 1; j < s; j++)
		{
			if (inSectn[i] == inSectn[j])
			{
				while (j < s)
				{
					inSectn[j] = inSectn[j + 1];
					j++;
				}
				s--;
				j = i + 1;
			}

		}
	}
	cout << "\n\nIntersection of the 2 array is:  ";
	display(inSectn, s);
}
void display(char arr[], int s)
{

	for (int i = 0; i < s; i++) // to check if there is same element in the Union or Intersection.
	{
		for (int j = i + 1; j < s; j++)
		{
			if (arr[i] == arr[j])
			{
				while (j < s)
				{
					arr[j] = arr[j + 1];
					j++;
				}
				s--;
				j = i + 1;
			}

		}
	}
	cout << "\nOUTPUT Before The Sorting: ";//Displaying the OUTPUT
	for (int i = 0; i < s; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	// for Bonus we should to keep output in 
	// capital, small, digit and special char order
	// so, for this purpos!
	char temp;
	int count = 0;
	for (int i = 0; i < s; i++) // for Capital
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			temp = arr[count];
			arr[count] = arr[i];
			arr[i] = temp;
			count++;
		}
	}
	for (int i = count; i < s; i++) //for Small to place next to capital
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			temp = arr[count];
			arr[count] = arr[i];
			arr[i] = temp;
			count++;
		}
	}
	for (int i = count; i < s; i++) // for digit to place next to small case
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			temp = arr[count];
			arr[count] = arr[i];
			arr[i] = temp;
			count++;
		}
	}
	//Now we should to sort internally Capital from A-Z
	// small case from a-z
	// and digit from 0-9


	int i = 0, j;
	while (arr[i] >= 'A' && arr[i] <= 'Z') //for Capital
	{
		j = i;
		while (arr[j] >= 'A' && arr[j] <= 'Z')
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	while (arr[i] >= 'a' && arr[i] <= 'z') //for Small 
	{
		j = i;
		while (arr[j] >= 'a' && arr[j] <= 'z')
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	while (arr[i] >= '0' && arr[i] <= '9')
	{
		j = i;
		while (arr[j] >= '0' && arr[j] <= '9')
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	cout << "OUTPUT After The Sorting: ";
	for (int i = 0; i < s; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}