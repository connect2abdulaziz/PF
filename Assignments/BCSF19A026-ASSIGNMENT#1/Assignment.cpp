/***************************
 *      Name: AbdulAziz    *
 *    Roll No: BCSF19A026  *
 ***************************/
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	/***************************
	 * This is nothing but to  *
	 * keep visual stdio fast  *
	 ***************************/
	cin.sync_with_stdio(0);
	cin.tie(0);

	char repeat = 0;
	do
	{
		cout << "*********************\n* Assignment No: 01 *\n********************* " << endl << endl;

		/************************************
		 * Getting Selection from the user  *
		 ************************************/
		int task;
		cout << "Select  '1' for Task no: 01\n";
		cout << "\t'2' for Task no: 02\n";
		cout << "\t .\n\t .\n\t .\n\t'11' for Task no: 11\n";
		cout << "Your selection: ";
		cin >> task;

		/**********************
		 *  Input validation  *
		 **********************/
		while (task < 1 || task >11)
		{
			cout << "ERROR!! Invalid Selection!\n";
			cout << "Kindly Select in Range of 1-11: ";
			cin >> task;
		}

		/**********************
		 *  Task No: 01       *
		 **********************/
		if (task == 1)
		{
			cout << "\nTask #01\n";
			int length, width;
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
			if (length == width)
			{
				cout << "It is square\n";
			}
			else
			{
				cout << "Not a square\n";
			}

		}
		/**********************
		 *  Task No: 02       *
		 **********************/
		else if (task == 2)
		{
			cout << "\nTask #02\n";
			int num1, num2;
			cout << "Enter two numbers (separated by space): ";
			cin >> num1 >> num2;
			if (num1 > num2)
			{
				cout << "Greater is: " << num1 << endl;
			}
			else
			{
				cout << "Greater is: " << num2 << endl;
			}
		}
		/**********************
		 *  Task No: 03       *
		 **********************/
		else if (task == 3)
		{
			cout << "\nTask #03\n";
			float quantity;
			float discount = 0.1;
			cout << "Enter Quantity You purchased: ";
			cin >> quantity;
			while (quantity < 1)
			{
				cout << "ERROR!! Invalid input\n";
				cout << "Quantity cannot be zero!!\n";
				cout << "Please re-enter quantity: ";
				cin >> quantity;

			}
			quantity = quantity * 100;
			if (quantity > 1000)
			{
				discount = discount * quantity;
				quantity = quantity - discount;
				cout << "Total discount: " << discount << endl;
			}

			cout << "Total cost: " << quantity << endl;

		}
		/**********************
		 *  Task No: 04       *
		 **********************/
		else if (task == 4)
		{
			cout << "\nTask #04\n";
			int service;
			float salary, bounces = 0;
			cout << "Enter Your Service (in year): ";
			cin >> service;
			cout << "Enter Salary: ";
			cin >> salary;
			if (service > 5)
			{
				bounces = salary * 0.05;
			}
			salary = salary + bounces;
			cout << "Total Bounces: " << bounces << endl;
			cout << "Total Salary: " << salary << endl;

		}
		/**********************
		 *  Task No: 05       *
		 **********************/
		else if (task == 5)
		{
			cout << "\nTask #05\n";
			int age, oldest, smallest;
			cout << "Enter age of 1st person: ";
			cin >> age;
			while (age < 1)
			{
				cout << "ERROR!! Invalid age\n";
				cout << "Re-enter a valid age (must be greater than zero): ";
				cin >> age;
			}
			oldest = smallest = age;
			cout << "Enter age of 2nd person: ";
			cin >> age;
			while (age < 1)
			{
				cout << "ERROR!! Invalid age\n";
				cout << "Re-enter a valid age (must be greater than zero): ";
				cin >> age;
			}
			if (oldest < age)
			{
				oldest = age;
			}
			else if (smallest > age)
			{
				smallest = age;
			}
			cout << "Enter age of 3rd person: ";
			cin >> age;
			while (age < 1)
			{
				cout << "ERROR!! Invalid age\n";
				cout << "Re-enter a valid age (must be greater than zero): ";
				cin >> age;
			}
			if (oldest < age)
			{
				oldest = age;
			}
			else if (smallest > age)
			{
				smallest = age;
			}
			cout << "Smallest is of age: " << smallest << endl;
			cout << "Oldest is of age: " << oldest << endl;

		}

		/**********************
		 *  Task No: 06       *
		 **********************/
		else if (task == 6)
		{
		cout << "\nTask #06\n";
			int heldClasses, attendClasses;
			cout << "Enter Number of classes held: ";
			cin >> heldClasses;
			cout << "Enter Number of classes attend: ";
			cin >> attendClasses;
			float percentage;
			percentage = (float)attendClasses / heldClasses * 100;
			cout << "Student Attendance percentage is: " << percentage << "%\nSo, ";
			if (percentage > 75)
			{
				cout << "Student is allowed to sit in exam" << endl;
			}
			else
			{
				cout << "Student is Not allowed to sit in exam" << endl;
			}

		}
		/**********************
		 *  Task No: 07       *
		 **********************/
		else if (task == 7)
		{
		cout << "\nTask #07\n";
			char letter;
			cout << "Enter character: ";
			cin >> letter;
			if (letter >= 'a' && letter <= 'z')
			{
				cout << "Character is in Lowercase" << endl;
			}
			else if (letter >= 'A' && letter <= 'Z')
			{
				cout << "Character is in Uppercase" << endl;
			}
			else
			{
				cout << "You enterd character other then Alphabet which is: " << letter << endl;
			}
		}
		/**********************
		 *  Task No: 08       *
		 **********************/
		else if (task == 8)
		{
		cout << "\nTask #08\n";
			int year;
			cout << "Enter year: ";
			cin >> year;
			if (year % 4 == 0)
			{
				if (year % 100 == 0)
				{
					if (year % 400 == 0)
					{
						cout << year << " is leap Year" << endl;
					}
					else
					{
						cout << year << " is not leap Year" << endl;
					}
				}
				else
				{
					cout << year << " is leap Year" << endl;
				}

			}
			else
			{
				cout << year << " is not leap Year" << endl;
			}
		}
		/**********************
		 *  Task No: 09       *
		 **********************/
		else if (task == 9)
		{
		cout << "\nTask #09\n";
			int age;
			char sex, maritalStatus;
			cout << "Enter sex (M or F): ";
			cin >> sex;
			while (!(toupper(sex) == 'M' || toupper(sex) == 'F'))
			{
				cout << "ERROR!! Invalid input!\n";
				cout << "Please enter 'M' if male and 'F' if female: ";
				cin >> sex;
			}
			cout << "Enter age: ";
			cin >> age;
			while (age < 20 || age>60)
			{
				cout << "ERROR!! Invalid input!\n";
				cout << "Your age Should be b/w 20-60\n";
				cout << "Kindly re-enter your age: ";
				cin >> age;
			}
			cout << "Enter Marital Status ( Y or N): ";
			cin >> maritalStatus;
			while (!(toupper(maritalStatus) == 'Y' || toupper(maritalStatus) == 'N'))
			{
				cout << "ERROR!! Invalid input!\n";
				cout << "Please enter 'Y' if marriad and 'N' if Not marriad: ";
				cin >> maritalStatus;
			}
			if (toupper(sex) == 'F')
			{
				cout << "You can only work in urban area" << endl;
			}
			else
			{
				if (age >= 20 && age <= 40)
				{
					cout << "You can work anywhere" << endl;
				}
				else
				{
					cout << "You can only work in urban area" << endl;
				}
			}


		}
		/**********************
		 *  Task No: 10       *
		 **********************/
		else if (task == 10)
		{
		cout << "\nTask #10\n";
			int num, temp, reverse = 0;
			cout << "Enter any 4-digit number: ";
			cin >> num;
			while (num < 1000 && num >9999)
			{
				cout << "ERROR!! Invalid number!\n";
				cout << "Kindly re-enter any 4-digit number i.e (1234): ";
				cin >> num;
			}
			temp = num % 10;
			reverse = reverse * 10 + temp;
			num = num / 10;
			temp = num % 10;
			reverse = reverse * 10 + temp;
			num = num / 10;
			temp = num % 10;
			reverse = reverse * 10 + temp;
			num = num / 10;
			temp = num % 10;
			reverse = reverse * 10 + temp;
			num = num / 10;
			cout.fill('0');
			cout << fixed << right;
			cout << "Reverse: " << setw(4) << reverse << endl;
		}
		/**********************
		 *  Task No: 11       *
		 **********************/
		else
		{
		cout << "\nTask #11\n";
			int marks;
			cout << "Enter marks: ";
			cin >> marks;
			while (marks < 0 || marks >100)
			{
				cout << "ERROR!! Invalid marks!\n";
				cout << "Enter marks in range of 0-100: ";
				cin >> marks;
			}
			if (marks > 80)
			{
				cout << "Grade: A" << endl;
			}
			else if (marks > 60)
			{
				cout << "Grade: B" << endl;
			}
			else if (marks > 50)
			{
				cout << "Grade: C" << endl;
			}
			else if (marks > 45)
			{
				cout << "Grade: D" << endl;
			}
			else if (marks > 25)
			{
				cout << "Grade: E" << endl;
			}
			else
			{
				cout << "Grade: F" << endl;
			}
		}



		/****************************
			Asking for another Task *
		*****************************/
		cout << "Do you want to repeat the program or quit? (R/Q) ";
		cin >> repeat;
		while (!(toupper(repeat) == 'R' || toupper(repeat) == 'Q'))
		{
			cout << "Please enter R or Q: ";
			cin >> repeat;
		}
		system("cls");
	} while (toupper(repeat) == 'R');



	return 0;
}
