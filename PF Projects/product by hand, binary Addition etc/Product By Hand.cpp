#include<iostream>
using namespace std;

int main()
{
	int carry = 0, n1, n2, i = 0, j = 0, sum = 0, temp = 0, l = 0, num = 0, num2 = 0;
	cout << "Enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;
	num = n1;
	num2 = n2;
	for (int k = 0; k < num; k++)
	{
		n2 = sum;
		sum = 0;
		n1 = num2;
		carry = 0;
		l = 0;
		while (n1 || n2)
		{

			i = n1 % 10;
			j = n2 % 10;
			temp = i + j + carry;
			if (temp > 9)
			{
				temp = temp % 10;
				carry = 1;
			}
			else
				carry = 0;
			sum = sum * 10 + temp;
			n1 = n1 / 10;
			n2 = n2 / 10;
			if (n2 == 0 && n1 == 0)
			{
				sum = sum * 10 + carry;
			}
			l++;
		}
		n1 = sum;
		sum = 0;
		while (l >= 0)
		{
			i = n1 % 10;
			sum = sum * 10 + i;
			n1 = n1 / 10;
			l--;
		}
	}
	cout << "Product of "<<num<< " && "<<num2<<": " << sum << endl;
	system("pause>0");
	return 0;
}