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
		char sex;
		cout << "Enter Your sex (M,F): ";
		cin >> sex;
		while (!(toupper(sex) == 'F' || toupper(sex) == 'M'))
		{
			cout << "ERROR!! Invalid input!\n";
			cout << "Please Re-enter only (M/F): ";
			cin >> sex;
		}
		float a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, b=0;
		float bWeight, wristMeasur, waistMeasur, hipMeasure, forearmMeasure;
		float bFat, avgFat;
		if (toupper(sex) == 'F')
		{
			cout << "\tEnter the Following Data!\n";
			cout << "Body Weight: ";
			cin >> bWeight;
			cout << "Wrist meauurement (at fullest Point): ";
			cin >> wristMeasur;
			cout << "Waist measurement (at navel): ";
			cin >> waistMeasur;
			cout << "Hip measurement (at fullest point): ";
			cin >> hipMeasure;
			cout << "Forearm measurement (at fullest point): ";
			cin >> forearmMeasure;
			a1 = (bWeight * 0.732) + 89.87;
			a2 = (wristMeasur / 3.140);
			a3 = (waistMeasur * 0.157);
			a4 = (hipMeasure * 0.249);
			a5 = (forearmMeasure * 0.434);
			b = a1 + a2 - a3 - a4 + a5;
			bFat = bWeight - b;
			avgFat = (bFat * 100) / bWeight;

			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;

		}
		else
		{
			cout << "\tEnter the Following Data!\n";
			cout << "Body Weight: ";
			cin >> bWeight;
			cout << "Wrist meauurement (at fullest Point): ";
			cin >> wristMeasur;
			a1 = (bWeight * 1.082) + 94.42;
			a2 = (wristMeasur * 4.15);
			b = a1 - a2;
			bFat = bWeight - b;
			avgFat = (bFat * 100) / bWeight;
		}
		cout << "Body Fat: " << bFat << endl;
		cout << "Percentage Body Fat: " << avgFat << endl;


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