/*
Abdul Aziz
BCSF19A026
*/
#include<iostream>
#include<string>
using namespace std;

//Functions Prototypes
bool checkLess(string);
bool checkUpperCase(string);
bool checkLowerCase(string);
bool checkDigit(string);
int main()
{
	char repeat;
	do
	{
		string pass;
		cout << "Enter Password: ";
		cin >> pass; // using cin instead of getline B/C password does'nt contain space!
		while ((pass != "quit\0") && !checkLess(pass)) //if user enter quit program will terminate!
		{
			cin >> pass;
		}
		if (pass == "quit")
		{
			cout << "You Quit the Program" << endl;
			break;
		}
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

bool checkLess(string pass)
{
	bool flag = false;
	int i = 0;
	for (; pass[i] != '\0'; i++);
	if (i < 6)
	{
		cout << "Oops! Your Password must be at least 6 characters\n\n";
		cout << "Enter your password: ";
		flag = false;
	}
	else
	{
		// 1st we check for no of characters so if it is less than 6
		// The next will be not even check and ask the user to re-enter pass!
		flag = checkUpperCase(pass); // Now this will Check for UpperCase
	}
	return flag;
}


bool checkUpperCase(string pass)
{
	bool flag = false;
	int i = 0;
	while (pass[i] != '\0')
	{
		if ((pass[i] >= 'A') && (pass[i] <= 'Z'))
		{
			flag = true;
		}
		i++;
	}
	if (flag)
	{
		//UpperCase found Now Check for LowerCase!
		flag = checkLowerCase(pass);
	}
	else
	{
		// if UpperCase not Found Program will not Check and return false!
		cout << "Oops! Your Password must be at least 1 Upper Case letter\n\n";
		cout << "Enter your password: ";
		flag = false;
	}
	return flag;
}


bool checkLowerCase(string pass)
{
	bool flag = false;
	int i = 0;
	while (pass[i] != '\0')
	{
		if ((pass[i] >= 'a') && (pass[i] <= 'z'))
		{
			flag = true;
		}
		i++;
	}

	if (flag)
	{
		//If Upper and lower Case found and char is greater than 6 
		// Now we check for Digit!
		flag = checkDigit(pass);
	}
	else
	{
		cout << "Oops! Your Password must be at least 1 Lower Case letter\n\n";
		cout << "Enter your password: ";
		flag = false;
	}
	return flag;
}


bool checkDigit(string pass)
{
	bool flag = false;
	int i = 0;
	while (pass[i] != '\0')
	{
		if ((pass[i] >= '0') && (pass[i] <= '9'))
		{
			flag = true;
		}
		i++;
	}
	if (flag)
	{
		//If check less, check upper, check lower && finally Digit condition true
		//it mean Password is Strong!
		//so,
		cout << "\nYour Password is Strong!\n";
	}
	else
	{
		cout << "Oops! Your Password must be at least 1 Digit\n\n";
		cout << "Enter your password: ";
		flag = false;
	}
	return flag;
}
