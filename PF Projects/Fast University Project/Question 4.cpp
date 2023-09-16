#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x , n;
	cout <<"Enter the absolute value (i.e x): ";
	cin>>x;
	cout <<"Set the maximum integer value(i.e n): ";
	cin>>n;
	bool flag = true;
	int temp =0;
	for (int i =pow(x,n)+ pow (x,n-1), j = x; i>=0 ; i= i-2 )
	{
		
		cout <<fixed <<right;
		cout.fill('0');
		cout <<setw(2)<<i<<" ";
		if (flag)
		{
			temp = pow (j,n)+ pow(j, n-1);
			flag = false;
		}
		//	cout << i<<" "<<temp;
		cout.fill(' ');
		for (int k =0; k<= x; k++ )
		{
			if (i == temp && k == j)
			{
				cout <<setw(2)<<"*";
				j--;
				flag = true;
			}
			else
			cout <<setw(2)<<"";
			
		}
		cout <<endl;
	}
	cout <<setw(3)<<"";
	for (int i =0 ; i<=x; i++)
	{
		cout <<setw(2)<<i;
	}
	return 0;
}
