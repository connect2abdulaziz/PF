#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout <<"Enter no of row and col: ";
	cin>>n;
	
	int a = n; // to calculate the row 1st element for each.
	int b = a; // current number to display inside j loop
	int c = (n* 2 )- 1; // difference which decrease by (-2) from row to row 
	int d = 1; // keeping the difference which is in col from 0dd to next odd col
	int temp = 1; //counting the number of odd rows
	for (int i =1; i<= n; i++)
	{
	
		for ( int j =0; j< n-i; j++ )
		cout <<setw(4)<<"";
		b = a;
		for ( int j =1; j<= i; j++)
		{
			if ( i% 2 == 1 && j  % 2 == 1)// i && j both odd
			{
				cout<<setw(4)<<b;
				b = b - c;
			}
			else if ( i %2 == 1 && j%2 == 0) // i is odd && j is even
			{
				cout << setw(4)<<b;
				b = b - d;
				d = d + 4;
			}
			else if ( i% 2 == 0 && j % 2 == 0) // i && j both even
			{
				cout<<setw(4)<<b;
				b = b - c;
			}
			else if ( i% 2 == 0 && j % 2 == 1)// i is even and j is odd
			{
				cout<<setw(4)<<b;
				if ( j == 1) // if j has 1st iteration 
				d = d -2;
				else
				d = d + 4;
				b = b -d;
			}
		}
		c = c -2; // decreseaing the difference which is odd pattern of n*2 - 1;
		d = 4;
		if (i % 2 == 1) // odd
		a++;
		else
		{
		a = (n * (i+1)) - ((i+1) * temp);
		temp++;
	    }
		cout <<endl;
	}
	
	
	return 0;
}
