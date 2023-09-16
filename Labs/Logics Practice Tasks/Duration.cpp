/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "********************\n";
	cout << "* AsSalamo Alaikum *\n";
	cout << "********************\n";
	char repeat = 0;
	do
	{
		int sHour, sMinut, sSec;
		int eHour, eMinut, eSec;
		int hour = 0, minut = 0, sec = 0;
		cout << "This program is for 24-Hours format!!\n";
		cout << "No am/pm requird after 12 come 13 not 1pm!\n";
		cout << "Enter Starting Time (H M S): ";
		cin >> sHour >> sMinut >> sSec;
		cout << "Enter Ending Time (H M S): ";
		cin >> eHour >> eMinut >> eSec;

		/*
			Input Validation Checking
			and Displaying for Correction
			until user input Valid Data!
			*/
		bool isValid = true;
		if (sHour < eHour)
		{
			isValid = false;
		}
		if (sHour == eHour)
		{
			if (sMinut < eMinut)
			{
				isValid = false;
			}
		}
		if (sHour == eHour && sMinut < eMinut)
		{
			if (sSec < eSec)
			{
				isValid = false;
			}
		}
		if (sHour < 0 || sHour > 24 || eHour < 0 || eHour >24 || sMinut < 0 || eMinut < 0 || sMinut >60 || eMinut>60 || sSec < 0 || eSec < 0 || sSec >60 || eSec>60)
		{
			isValid = false;
		}
		while (!isValid)
		{
			cout << "ERROR!! Re-enter a Valid Data!\n";
			cout << "Ending Time must be Greater than Starting Time!\n";
			cout << "The Hours/Minut/Second cannot be less than zero\n";
			cout << "The Hours/Minuts/Second cannot be Greater than 24/60/60 Respectivally\n";
			cout << "Kindlay re-enter Data" << endl << endl;
			cout << "Enter Starting Time (H M S): ";
			cin >> sHour >> sMinut >> sSec;
			cout << "Enter Ending Time (H M S): ";
			cin >> eHour >> eMinut >> eSec;
		}


		hour = eHour - sHour;
		if (eMinut < sMinut)
		{
			minut = 60 - (sMinut - eMinut);
			hour--;
			if (eSec < sSec)
			{
				sec = 60 - (sSec - eSec);
				minut--;
			}
			else if (eSec == sSec)
			{
				sec = 0;
			}
			else
			{
				sec = eSec - sSec;
			}
		}
		else if (eMinut == sMinut)
		{
			if (eSec < sSec)
			{
				sec = 60 - (sSec - eSec);
				hour--;
				minut = 59;
			}
			else if (eSec == sSec)
			{
				sec = 0;
			}
			else
			{
				sec = eSec - sSec;

			}
		}
		else
		{
			minut = eMinut - sMinut;
			if (eSec < sSec)
			{
				sec = 60 - (sSec - eSec);
				minut--;
			}
			else if (eSec == sSec)
			{
				sec = 0;
			}
			else
			{
				sec = eSec - sSec;
			}
		}

		cout.fill('0');
		cout << fixed << right;
		cout << "Duration (HH:MM:SS): " << setw(2) << hour << ":" << setw(2) << minut << ":" << setw(2) << sec << endl;

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