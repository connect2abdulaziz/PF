/*
 Name: Abdul Aziz
 Roll No: BCSF19A026
*/
#include <iostream>
#include <string>
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


		const int N = 5;
		int marks;
		string grade, name,rollNo;
		float gradePoint = 0;
		float totalGP = 0, gPA = 0, totalCreditHours = 0;

		cout << "Enter Name: ";
		getline(cin, name);
		cout << "Enter Roll no: ";
		cin >> rollNo;

		for (int i = 0; i < N; i++)
		{
			cout << "Enter Obtaind Marks in Subject #" << i + 1 << ": ";
			cin >> marks;
			while (marks < 0 || marks>100)
			{
				cout << "ERROR!! Invalid marks!!" << endl;
				cout << "Re-enter marks in range 0-100: ";
				cin >> marks;
			}
			if (marks >= 85)
			{
				grade = "A";
				gradePoint = 4.00;
			}
			else if (marks >= 80)
			{
				grade = "A-";
				gradePoint = 3.70;
			}
			else if (marks >= 75)
			{
				grade = "B+";
				gradePoint = 3.30;
			}
			else if (marks >= 70)
			{
				grade = "B";
				gradePoint = 3.00;
			}
			else if (marks >= 65)
			{
				grade = "B-";
				gradePoint = 2.70;
			}
			else if (marks >= 61)
			{
				grade = "C+";
				gradePoint = 2.30;
			}
			else if (marks >= 58)
			{
				grade = "C";
				gradePoint = 2.00;
			}
			else if (marks >= 55)
			{
				grade = "C-";
				gradePoint = 1.70;
			}
			else if (marks >= 50)
			{
				grade = "D";
				gradePoint = 1.00;
			}
			else
			{
				grade = "F";
				gradePoint = 0.00;
			}
			//As we given that the 1st 3 subject have 3 credit Hours
			//so, we simply multipliy gradpoint with 3
			//while, 4th and 5th subject with 4
			if (i < 3)
			{
				gradePoint = gradePoint * 3;
				totalGP = totalGP + gradePoint;
				totalCreditHours = totalCreditHours + 3;

			}
			else
			{
				gradePoint = gradePoint * 3;
				totalGP = totalGP + gradePoint;
				totalCreditHours = totalCreditHours + 3;
			}

		}
		gPA = totalGP / totalCreditHours;
		cout << "\nName: " << name << "\nRoll No: " << rollNo << "\nGPA: " << gPA << endl;





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
		cin.ignore();
	} while (toupper(repeat) == 'R');
	return 0;

}