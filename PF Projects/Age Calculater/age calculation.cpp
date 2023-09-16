/*
Name:    Abdul Aziz
Roll no: BCSF19A026
Subject: Programming in C++
Lab 02 Practice Question
Age Calculator
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "********************\n";
	cout << "* AsSalamo Alaikum *\n";
	cout << "********************\n";
	cout << endl;
	char start;
	cout << "This Caculator will ask you for your\n";
	cout << "Date of Birth as well as for Current Date\n";
	cout << "And will calculate Your Age in Years/Months/Days\n";
	cout << "precisely and Accuratelly,\n";
	cout << "so, press any key and hit the Enter to Start: ";
	cin >> start;

	char repeat = 0;
	do
	{

		/*
		Making 3 varraibles of day/month/year
		for each Dath Of Birth, Current Date
		and No of Years,Months and Days!
		*/
		int birthYear, birthMonth, birthDay;
		int currentYear, currentMonth, currentDay = 0;
		int month = 0, day = 0, year;


		/*
		Getting Data from the User for DOB
		and Current Date.
		*/
		cout << "Enter your Date of Birth (D M Y): ";
		cin >> birthDay >> birthMonth >> birthYear;
		cout << "Enter your Current Date (D M Y): ";
		cin >> currentDay >> currentMonth >> currentYear;

		/*
		Input Validation Checking
		and Displaying for Correction
		until user input Valid Data!
		*/
		bool isValid = true;
		if (currentYear < birthYear)
		{
			isValid = false;
		}
		if (currentYear == birthYear)
		{
			if (currentMonth < birthMonth)
			{
				isValid = false;
			}
		}
		if (currentYear == birthYear && currentMonth == birthMonth)
		{
			if (currentDay < birthDay)
			{
				isValid = false;
			}
		}

		while (!isValid)
		{
			system("cls");
			cout << "ERROR!! Re-enter a Valid Data!\n";
			cout << "Current Date must be Greater than Date of Birth!\n";
			cout << "Kindlay re-enter Data" << endl << endl;
			cout << "Enter your Date of Birth (D M Y): ";
			cin >> birthDay >> birthMonth >> birthYear;
			cout << "Enter your Current Date (D M Y): ";
			cin >> currentDay >> currentMonth >> currentYear;
		}





		/*
		Calculation for years and stored the
		no of years in varriable year.
		*/
		year = currentYear - birthYear;


		/*
		Calculation for Months and Days and stored the
		no of Months in varriable month while no of Days
		in varriable day.
		*/
		if (currentMonth < birthMonth || currentMonth>birthMonth) //Checking for Greater or smaller simulteniouslly 
		{
			if (currentMonth < birthMonth) //Checking for Smaller 
			{
				month = 12 - (birthMonth - currentMonth);
				year--;
			}
			else // If not smaller Obvisely it will be Greater
			{
				month = currentMonth - birthMonth;
			}
			/*
			Calculation for Days
			while keeping in mind
			Month  is Greater or Smaller!
			*/
			if (currentDay < birthDay) //If Day is Smaller
			{
				/*
				Checking condition for Month consisting of 30 day's
				*/
				if (currentMonth == 9 || currentMonth == 4 || currentMonth == 6 || currentMonth == 11)
				{
					day = 30 - (birthDay - currentDay);
					month--;

				}

				/*
				Checking for leap year while calculating no of Days!
				*/

				else if (currentMonth == 2)
				{
					if (currentYear % 4 == 0)
					{
						if (currentYear % 100 == 0)
						{
							if (currentYear % 400 == 0)
							{
								day = 29 - (birthDay - currentDay);
								month--;
							}
							else
							{
								day = 28 - (birthDay - currentDay);
								month--;
							}
						}
						else
						{
							day = 29 - (birthDay - currentDay);
							month--;

						}
					}
					else
					{
						day = 28 - (birthDay - currentDay);
						month--;
					}
				}
				/*
				 If above 2 condition falles the Month will definitly of 31 day's.
				 so,
				*/
				else
				{
					day = 31 - (birthDay - currentDay);
					month--;
				}
			}
			else if (birthDay == currentDay) //Condition checking for same Days
			{
				day = 0;
			}
			/*
			If above Condition fail's
			then it is obvious that Current Days is greater than Birth Days
			so,
			*/
			else
			{
				day = currentDay - birthDay;
			}


		}

		/*
		If Month is neither smaller nor Greater then
		it is obvious that Current month will be the same as birth one
		so, calculation if Months are same.
		*/
		else
		{
			//for this condition we keep month zero initially because
			// both months difference is same.
			month = 0;

			if (currentDay < birthDay)//If Day is smaller
			{
				/*
				Checking condition for Month consisting of 30 day's
				*/
				if (currentMonth == 9 || currentMonth == 4 || currentMonth == 6 || currentMonth == 11)
				{
					day = 30 - (birthDay - currentDay);
					year--;
					month = month + 11;

				}
				/*
				Checking for leap year while calculating no of Days!
				*/
				else if (currentMonth == 2)
				{
					if (currentYear % 4 == 0)
					{
						if (currentYear % 100 == 0)
						{
							if (currentYear % 400 == 0)
							{
								day = 29 - (birthDay - currentDay);
								year--;
								month = month + 11;
							}
							else
							{
								day = 28 - (birthDay - currentDay);
								year--;
								month = month + 11;
							}
						}
						else
						{
							day = 29 - (birthDay - currentDay);
							year--;
							month = month + 11;

						}
					}
					else
					{
						day = 28 - (birthDay - currentDay);
						year--;
						month = month + 11;
					}
				}
				/*
				 If above 2 condition falles the Month will definitly of 31 day's.
				 so,
				*/
				else
				{
					day = 31 - (birthDay - currentDay);
					year--;
					month = month + 11;
				}
			}
			//Condition checking for Same Day's if so,
			//Then Today will be his/her Date of Birth
			// Because the Month is already same too.
			else if (birthDay == currentDay)
			{
				cout << "Today is Your BirthDay!" << endl;
				day = 0;
			}
			/*
			If above Condition fail's
			then it is obvious that Current Days is greater than Birth Days
			so,
			*/
			else
			{
				day = currentDay - birthDay;

			}
		}

		/*
		Displaying Result which includes
		the Total no of Years,
		Total no of Months,
		Total no of Days upto now!
		*/
		cout << "You Have " << year << " years,\n" << month << " months.......\nand " << day << " days rigth now!" << endl;


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
	} while (toupper(repeat) == 'R');

	return 0;
}