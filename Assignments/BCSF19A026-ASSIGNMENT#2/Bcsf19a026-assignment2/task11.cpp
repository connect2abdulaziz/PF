/*
Abdul Aziz
BCSF19A026
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	// "Abdul" having no of char 5 and "Aziz" having 4 and 1 for new line "\n" so,
	// 5 + 4 + 1= 10 
	//simillarly, for next line "Khan"  having 4. so,
	// 5 + 4 + 4 + 1 = 14.
	cout << "Abdul\n" << setw(10) << "Aziz\n" << setw(14) << "Khan\n";
	system("pause>0");
	return 0;
}

