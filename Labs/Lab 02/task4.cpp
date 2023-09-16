/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
using namespace std;

int main()
{

	int a, smallest = 0, largest = 0; //initilizing with zero to prevent garbages
	//geting 1st number 
	cout << "Enter number #1: ";
	cin >> a;
	smallest = largest = a;

	//Geting upcoming number from the user 
	cout << "Enter number #2: ";
	cin >> a;
	if (largest <= a)//condition checking if new number is greater than the number stored in greatest
	{
		largest = a;
	}
	else if (smallest >= a) //condition checking if new number is smaller than number stored in smallest
	{
		smallest = a;
	}
	cout << "Enter number #3: ";
	cin >> a;
	if (largest <= a)//condition checking if new number is greater than the number stored in greatest
	{
		largest = a;
	}
	else if (smallest >= a) //condition checking if new number is smaller than number stored in smallest
	{
		smallest = a;
	}
	cout << "Enter number #4: ";
	cin >> a;
	if (largest <= a)//condition checking if new number is greater than the number stored in greatest
	{
		largest = a;
	}
	else if (smallest >= a) //condition checking if new number is smaller than number stored in smallest
	{
		smallest = a;
	}
	cout << "Enter number #5: ";
	cin >> a;
	if (largest <= a)//condition checking if new number is greater than the number stored in greatest
	{
		largest = a;
	}
	else if (smallest >= a) //condition checking if new number is smaller than number stored in smallest
	{
		smallest = a;
	}

	//Displaying result of smallest and largest 
	cout << "Largest number is: ";
	cout << largest;
	cout << endl;
	cout << "Smallest number is: ";
	cout << smallest;
	cout << endl;
	return 0;
}