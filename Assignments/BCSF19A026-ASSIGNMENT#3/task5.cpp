/*
Abdul Aziz
BCSF19A026
*/
#include<iostream>
#define MAX 50 // Maximum size of the sentence 
using namespace std;

int main()
{
	char repeat;
	do
	{
		char st[MAX];
		cout << "Enter the String: ";
		cin >> st;
		int size = 0;
		while (st[size])//to calculate the size of the string!
		{
			size++;
		}
		char a, b; //Temprory Varriables use for swiping!
		int j;
		for (int i = 1; i < size; i++)
		{
			if (st[i] >= 'A' && st[i] <= 'Z')
			{
				a = st[i]; //1st we keep capital letter in variable a
				st[i] = ' '; // store in place of Capital letter space
				j = i;  // j is use to swap the upcomming char of the string
				j++; 
				b = st[j]; // b is use as temprory varriable to keep the privious value
				st[j] = a + 32; //from upper to lower (97 - 65 = 32)
				a = b;
				j++;
				while (j < size + 1) // this loop swip all the element upto the size of string!
				{
					b = st[j];
					st[j] = a;
					a = b;
					j++;
				}
				size++; //as we insert a space so the size should increase
			}
		}
		st[size] = '\0'; //to place terminator at the last index of the string to prevent from garbage and end the string!
		cout << "Stirng after Converting: ";
		cout << st << endl;


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

