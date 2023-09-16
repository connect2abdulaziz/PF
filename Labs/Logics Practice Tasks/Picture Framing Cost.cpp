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


		float regular = 0.15, fancy = 0.25, colorCost= 0.10;
		int length, width;
		float cardBoardCost = 0.02, glassCost = 0.07, crownCost = 0.35;
		float totalCost =0;

		cout << "Enter length of the Picture (in inch): ";
		cin >> length;
		cout << "Enter width of the Picture (in inch): ";
		cin >> width;
		char choice;
		cout << "Select type of frame!\n";
		cout << "'A' for regular\n'B' for fancy";
		cout << "\nYour Selection: ";
		cin >> choice;
		while (!(toupper(choice) == 'A' || toupper(choice) == 'B'))
		{
			cout << "ERROR!! Invalid Selection!\n";
			cout << "Kindly Select only (A/B): ";
			cin >> choice;
		}
		if (toupper(choice) == 'A')
		{
			totalCost = totalCost + length * width * regular;
		}
		else
		{
			totalCost = totalCost + length * width * fancy;
		}
		cout << "Select Color of frame!\n";
		cout << "'A' If you want to color it\n'B' If you want to let it white";
		cout << "\nYour Selection: ";
		cin >> choice;
		while (!(toupper(choice) == 'A' || toupper(choice) == 'B'))
		{
			cout << "ERROR!! Invalid Selection!\n";
			cout << "Kindly Select only (A/B): ";
			cin >> choice;
		}
		if (toupper(choice) == 'A')
		{
			totalCost = totalCost +  colorCost * (length * width);
		}
		//Cardboard and putting glass on top cost
		totalCost = totalCost + cardBoardCost * (length * width);
		totalCost = totalCost + glassCost * (length * width);
		//Crowns Charges
		cout << "Chose for Crowns\n";
		cout << "'A' If you want to put crowns\n'B' If Not";
		cout << "\nYour Selection: ";
		cin >> choice;
		while (!(toupper(choice) == 'A' || toupper(choice) == 'B'))
		{
			cout << "ERROR!! Invalid Selection!\n";
			cout << "Kindly Select only (A/B): ";
			cin >> choice;
		}
		if (toupper(choice) == 'A')
		{
			int noOfCrowns;
			cout << "Enter no of Crowns: ";
			cin >> noOfCrowns;
			totalCost = totalCost + crownCost * noOfCrowns;
		}
		cout << "Area of Picture: " << length * width <<" squre inch"<< endl;
		cout << "Total Cost: $" << totalCost << endl;
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