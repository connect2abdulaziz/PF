#include <iostream>

using namespace std;
double calcTerm(double, int);
double sumTerms(int);
void testFunction();

int main()
{
	/*
	* Formula (-1)^n(x^2n/(2n)!)
	*/
	char choice;
	do
	{
		testFunction();
		cout << "\n\nEnter Q to quit OR any key to test For next input: ";
		cin >> choice;

	} while (toupper(choice) != 'Q');
	return 0;

}
double calcTerm(double x, int a)
{
	int temp = -1;
	double term = 0;
	for (int i = 0; i <= a; i++)// calculating (-1^n)
		temp = temp * (-1);
	double tempx = x;
	for (int i = 1; i < 2 * a; i++)
	{
		x = x * tempx;
	}
	if (a == 0)
	{
		x = 1;
	}
	term = x * temp;
	for (int i = 2 * a; i > 0; i--)
	{
		term = term / i;
	}
	//cout << "(" << term << ")";
	return term;
	
}
double sumTerms(int a)
{
	double x = 0;// x in radian
	cout << "Enter the Radian (i.e x): ";
	cin >> x;
	double add = 0;
	//cout << "Ans = ";
	for (int n = 0; n < a; n++)
	{
		add += calcTerm(x, n);
		//if (n < a - 1)//Just for formatting
		//cout << "+";
	}
	//cout  << endl<<"= ";
	return add;
}
void testFunction()
{
	int a; // no of terms
	cout << "Enter the no of term (i.e a): ";
	cin >> a;
	cout << sumTerms(a) << endl;
}