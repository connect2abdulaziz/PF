/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;



int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << "LAB NO: 05\n\n";
	int n = 0, cyclelength = 1;
	cout << "Enter any number to find Cycle Length: ";
	cin >> n;
	cout << "Cycle length for "<<n;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = (n * 3 + 1);
		}
		cyclelength++;

	}
	cout <<" is: " << cyclelength << endl<<endl;
	cout << "Now we find the the largest Cyclelength b/w any any range!\n";
	char repeat;
	do
	{
	
		long long i, j;
		
		cout << "Enter the staring number of the range: ";
		cin >> i;
		cout << "Enter the ending number of the range: ";
		cin >> j;
		while (i < 0 || j <= i || j>1000000)
		{
			cout << "ERROR!! Invalid range!!" << endl;
			cout << "Re-enter the range: ";
			cin>>i>>j;
		}
		int maxCount = 0;
		for ( long long l= i; l<= j; l++)
		{
			n = l;
			cyclelength = 1;
			
			while (n != 1)
			{
				if (n % 2 == 0)
				{
					n= n / 2;
				}
				else
				{
					n =( n * 3 + 1);
				}
				cyclelength++;
				
			}
			if ( maxCount <= cyclelength)
			{
				maxCount = cyclelength;
			}
			
		}
		cout << "OUTPUT\n";
		cout << i << " " << j << " " << maxCount << endl;


		//Asking to check for another input.
		cout << "Do You want to use again for another input? (A/Q):";
		cin >> repeat;
		while (repeat != 'A' && repeat != 'a' && repeat != 'Q' && repeat != 'q')
		{
			cout << "ERROR!! invalid input\n";
			cout << "Please Enter A or Q: ";
			cin >> repeat;
		}
		cout << endl << endl;
		//system("cls");
	} while (repeat == 'A' || repeat == 'a');
	return 0;
}

