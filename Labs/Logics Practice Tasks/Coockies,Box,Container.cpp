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
		int totalCoockies, totalBoxes, totalContainers, box, container;
		cout << "Enter total Coockies: ";
		cin >> totalCoockies;
		cout << "Enter Coockies in a Box: ";
		cin >> box;
		cout << "Enter Boxes of Coockies in a Container: ";
		cin >> container;
		while (box > 24 || container > 75 || box < 0 || container < 0)
		{
			cout << "ERROR!! Invalid input\n";
			cout << "1 Box can contain in range of 0-24 Coockies\n";
			cout << "Similarlly, 1 Container can carry 75 Boxes\n";
			cout << "so, Kindly re-enter valid input\n";
			cout << "Enter Coockies in a Box: ";
			cin >> box;
			cout << "Enter Boxes of Coockies in a Container: ";
			cin >> container;
		}
		totalBoxes = totalCoockies / box;
		totalContainers = totalBoxes / container;
		cout << "Total Cookies: " << totalCoockies << endl;
		cout << "Total Boxes: " << totalBoxes << endl;
		cout << "Total Containers: " << totalContainers << endl;
		
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