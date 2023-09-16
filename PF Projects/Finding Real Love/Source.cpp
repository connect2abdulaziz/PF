#include<iostream>
#include <string>
#include <cctype>
#include <iomanip>


using namespace std;

struct Profile
{
	string name;
	double hight = 0.0, wieght = 0.0;
	double sum = 0.0, avg = 0.0;
	int  hairColor = 0, eyeColor = 0, religious = 0, expens = 0, beauty = 0;

};

void favrities(double& h, int& w, int& r, int& hColor, int& eyeColor);
double getWieght(const int w);
double getHight(const double h);
int getHairColor(const int hColor);
int getEyeColor(const int eyeColor);
int getReligious(const int religious);


int main()
{
	//cout << showpoint << setprecision(2);
	double hight = 0.0;
	int  wieght = 0, religious = 0, hairColor = 0, eyeColor = 0;
	int noOfGf;
	Profile girl[10];


	cout << "How many Girlfriends do you have: ";
	cin >> noOfGf;
	system("cls");
	favrities(hight, wieght, religious, hairColor, eyeColor);
	system("cls");
	for (int i = 0; i < noOfGf; i++)
	{
		cout << "What is the Name of Your Girlfriend no: " << i + 1 << endl;
		cout << "Name: ";
		cin.ignore();
		getline(cin, girl[i].name);
		cout << "Enter the Following Charactristics about " << girl[i].name << " !!\n";
		girl[i].hight = getHight(hight);
		girl[i].wieght = getWieght(wieght);
		girl[i].religious = getReligious(religious);
		girl[i].hairColor = getHairColor(hairColor);
		girl[i].eyeColor = getEyeColor(eyeColor);
		cout << "Beauty marks out of 100: ";
		cin >> girl[i].beauty;
		system("cls");
		while (girl[i].beauty < 0 || girl[i].beauty>100)
		{
			cout << "ERROR!! Invailid Input\nRe-enter: ";
			cin >> girl[i].beauty;
			system("cls");
		}
		cout << "Fermayshien/Ekhrajat/Expenditures per Day: ";
		cin >> girl[i].expens;
		system("cls");

		while (girl[i].expens < 0 || girl[i].expens>25)
		{
			cout << "ERROR!! Invailid Input\nRe-enter in range of 0-25: ";
			cin >> girl[i].expens;
			system("cls");
		}
		girl[i].expens = girl[i].expens * 4;
		girl[i].expens = 100 - girl[i].expens;
		girl[i].sum = girl[i].hight + girl[i].wieght + girl[i].religious + girl[i].hairColor + girl[i].beauty + girl[i].expens + girl[i].eyeColor;
		girl[i].avg = girl[i].sum / 7.0;
		system("cls");
	}
	string lover;
	double avg = 0.0;
	for (int i = 0; i < noOfGf; i++)
	{
		cout << "Score of " << girl[i].name << " : " << girl[i].sum << endl;
		if (girl[i].avg > avg)
		{
			avg = girl[i].avg;
			lover = girl[i].name;
		}
	}
	cout << "\n\nYour Girlfriend is: " << lover << endl << endl;



	return 0;
}


void favrities(double& h, int& w, int& r, int& hColor, int& eyeColor)
{
	cout << "Just Right Your Favrities:\n";
	cout << "Hieght for dream girl in Centimetres/cm: ";
	cin >> h;
	system("cls");
	while (h < 70 || h>250)
	{
		cout << "ERROR!! Invailid Input\nRe-enter Hight: ";
		cin >> h;
		system("cls");
	}


	cout << "Weight for dream girl in Kilograms/kg: ";
	cin >> w;
	system("cls");
	while (w < 5 || w>250)
	{
		cout << "ERROR!! Invailid Input\nRe-enter Weight: ";
		cin >> w;
		system("cls");
	}


	cout << "Hair Color:\n1. Brown\n2. Black\n3. Yollow\n4. Red\n5. Other\nYour Selection: ";
	cin >> hColor;
	system("cls");
	while (hColor < 1 || hColor>5)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> hColor;
		system("cls");
	}





	cout << "Eye Color:\n1. Brown\n2. Black\n3. Yollow\n4. Green\n5. Other\nYour Selection: ";
	cin >> eyeColor;
	system("cls");
	while (eyeColor < 1 || eyeColor>5)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> eyeColor;
		system("cls");
	}

	cout << "1. For Religious\n2. For Not Relious\nYour Selection: ";
	cin >> r;
	system("cls");
	while (r < 1 || r>2)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> r;
		system("cls");
	}




}
double getWieght(const int w)
{
	system("cls");
	double wieght, aW;
	double diff = 0.0;
	diff = 100 * (w - 1) / w;
	diff = 100 - diff;
	cout << "Enter wieght in Kilograms/kg: ";
	cin >> wieght;
	system("cls");
	aW = w - wieght;
	if (aW == 0)
	{
		wieght = 100;
	}
	else
	{
		wieght = abs(aW) * diff;
		wieght = 100 - wieght;
	}
	while (wieght <= 0)
	{
		cout << "ERROR!! Invilid Wieght Please try again!\n";
		wieght = getWieght(w);
		system("cls");

	}


	return wieght;
}


double getHight(const double h)
{
	system("cls");
	double hight, aH;
	double diff = 0.0;
	diff = 100 * (h - 1) / h;
	diff = 100 - diff;
	cout << "Enter Hight in Centimeters/cm: ";
	cin >> hight;
	system("cls");
	aH = h - hight;
	if (aH == 0.0)
	{
		hight = 100;
	}
	else
	{
		hight = abs(aH) * diff;
		hight = 100 - hight;
	}
	while (hight <= 0)
	{
		cout << "ERROR!! Invilid Hight Please try again!\n";
		hight = getHight(h);
		system("cls");
	}
	return hight;
}

int  getHairColor(const int hColor)
{
	system("cls");
	int color;
	cout << "Select Hair Color:\n1. Brown\n2. Black\n3. Yollow\n4. Red\n5. Other\nYour Selection: ";
	cin >> color;
	system("cls");
	while (color < 1 || color>5)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> color;
		system("cls");
	}

	if (color == hColor)
	{
		color = 100;
	}
	else
	{
		color = 90;
	}

	return color;
}
int getReligious(const int religious)
{
	system("cls");
	int r;
	cout << "1. For Religious\n2. For Not Relious\nYour Selection: ";
	cin >> r;
	system("cls");
	while (r < 1 || r>2)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> r;
		system("cls");
	}
	if (r == religious)
	{
		r = 100;
	}
	else
	{
		r = 85;
	}
	return r;
}

int getEyeColor(const int eyeColor)
{
	system("cls");
	int color;
	cout << "Select Eye Color:\n1. Brown\n2. Black\n3. Yollow\n4. Green\n5. Other\nYour Selection: ";
	cin >> color;
	system("cls");
	while (color < 1 || color>5)
	{
		cout << "ERROR!! Invailid Input\nRe-select: ";
		cin >> color;
		system("cls");
	}

	if (color == eyeColor)
	{
		color = 100;
	}
	else
	{
		color = 90;
	}

	return color;
}
