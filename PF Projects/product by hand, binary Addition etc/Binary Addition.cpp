#include<iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	
	int n1, n2;
	cout << "Enter 1st Binary no: ";
	cin >> n1;
	cout << "Enter 2nd Binary no: ";
	cin >> n2;
	int x = 0, y = 0, carry = 0, count=0;
	while  (n1 || n2)
	{
		int i = n1 % 10;
		int j = n2 % 10;
		n1 = n1 / 10;
		n2 = n2 / 10;
		if (i + j + carry == 2)
		{
			x = 0;
			carry = 1;
		}
		else if (i + j + carry == 3)
		{
			x = 1;
			carry = 1;
		}
		else if (i + j + carry == 1)
		{
			x = 1;
			carry = 0;
		}
		else
		{
			x = 0;
			carry = 0;
		}
		y = y * 10 + x;
		if (n1 == 0 && n2 == 0)
		{
			y = y * 10 + carry;
		}
		count++;
	}
	x = 0;
	while (count >=0)
	{
		carry = y % 10;
		x = x * 10 + carry;
		y = y / 10;
		count--;
	}

	cout << "Sum: " << x << endl;
	cout << endl;
	system("pause>0");
	return 0;
}