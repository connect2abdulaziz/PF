/*
Abdul Aziz
BCSF19A026
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <conio.h>
using namespace std;

bool input(int&, int&, int&);
void total(int&, int&, int&, int&, int&, int&);
int charges(int&, int&, int&);
int main()
{
	int hour = 0, minut = 0, sec = 0;
	int tHour = 0, tMinut = 0, tSec = 0;
	cout << "Enter time of First Sitting: " << endl;
	bool isValid;
	isValid = input(hour, minut, sec);
	while (isValid)
	{
		total(hour, minut, sec, tHour, tMinut, tSec);
		cout << "Enter time of Next sitting: " << endl;
		isValid = input(hour, minut, sec);
	}
	int total = 0;
	total = charges(tHour, tMinut, tSec);
	cout << "Total time of usages is " << tHour << " hours";
	cout << "\nTotal charges are " << total << " Rs.";
	cout << endl;
	return 0;
}


bool input(int& h, int& m, int& s)
{
	cout << "Hour: ";
	cin >> h;
	if (h < 0)
		return false;
	cout << "Minutes: ";
	cin >> m;
	if (m < 0)
		return false;
	cout << "Seconds: ";
	cin >> s;
	if (s < 0)
		return false;
	return true;
}

void total(int& h, int& m, int& s, int& th, int& tm, int& ts)
{
	th = th + h;
	tm = tm + m;
	ts = ts + s;
}

int charges(int& a, int& b, int& c)
{
	b = b + c / 60;
	a = a + b / 60;
	return a * 25;
}