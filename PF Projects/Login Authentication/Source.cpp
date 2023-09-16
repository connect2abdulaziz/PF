#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int i = 0;
struct Profile
{
	string name;
	string pin;
	string pass;
};

bool isValid(Profile c1[], int& size)
{
	string name, pin;
	cout << "Enter Your name: ";
	getline(cin, name);
	cout << "Your pin code: ";
	getline(cin, pin);
	for (i = 0; i < size; i++)
	{
		cout << c1[i].name << endl;
		cout << c1[i].pin << endl;
		cout << c1[i].pass << endl;
		if (name == c1[i].name && pin == c1[i].pin)
		{
			cout << "in function value of i: " << i << endl;
			size = i;
			return true;
		}
		cout << endl;
	}
	return false;
}
int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int k = 0;
	bool login = false;
	const int N = 10;
	Profile  custumer[10];
	ifstream fin;
	fin.open("users.txt");
	if (!fin)
	{
		cout << "ERROR!!\nFile not found\n";
	}
	else
	{

		while (fin)
		{
			getline(fin, custumer[k].name);
			getline(fin, custumer[k].pin);
			getline(fin, custumer[k].pass);
			k++;
		}
		k--;
		fin.close();
	}


	int size = k;
	if (isValid(custumer, k))
	{
		cout << "\n\nIn main value of i: " << k << endl;
		int choice;
		cout << "You successfully entered to your account\nWelcome to your account\n";
		cout << "Do you want update your profile!!\n";
		cout << "1.\tUpdate\n2.\tDelete\n";
		cin >> choice;
		while (choice < 1 && choice >2)
		{
			cout << "ERROR!!\nInvalid Selection\n";
			cout << "Kindly select 1 or 2: ";
			cin >> choice;
		}
		if (choice == 1)
		{
			cout << "Your Old name is: " << custumer[k].name << endl;
			cout << "Do you want update your Name\n";
			cout << "1.\tUpdate\n2.\tSkip\n";
			cin >> choice;
			while (choice < 1 && choice >2)
			{
				cout << "ERROR!!\nInvalid Selection\n";
				cout << "Kindly select 1 or 2: ";
				cin >> choice;
			}
			if (choice == 1)
			{
				cout << "Enter your new name: ";
				cin >> custumer[k].name;
			}
			cout << "\nYour Old pin is: " << custumer[k].pin << endl;
			cout << "Do you want update your pin\n";
			cout << "1.\tUpdate\n2.\tSkip\n";
			cin >> choice;
			while (choice < 1 && choice >2)
			{
				cout << "ERROR!!\nInvalid Selection\n";
				cout << "Kindly select 1 or 2: ";
				cin >> choice;
			}
			if (choice == 1)
			{
				cout << "Enter your new pin: ";
				cin >> custumer[k].pin;
			}
			cout << "Your Old Password is: " << custumer[k].pass << endl;
			cout << "Do you want update your Password\n";
			cout << "1.\tUpdate\n2.\tSkip\n";
			cin >> choice;
			while (choice < 1 && choice >2)
			{
				cout << "ERROR!!\nInvalid Selection\n";
				cout << "Kindly select 1 or 2: ";
				cin >> choice;
			}
			if (choice == 1)
			{
				cout << "Enter your new password: ";
				cin >> custumer[k].pin;
			}
			ofstream fout;
			fout.open("users.txt");
			if (!fout)
			{
				cout << "ERROR!!\nFile Not found in the specified location\n";
			}
			else
			{
				for (int j = 0; j < size; j++)
				{
					fout << custumer[j].name << endl;
					fout << custumer[j].pin << endl;
					fout << custumer[j].pass << endl;
				}
				fout.close();
			}

		}
		else
		{
			ofstream fout;
			fout.open("users.txt");
			if (!fout)
			{
				cout << "ERROR!!\nFile Not found in the specified location\n";
			}
			else
			{
				for (int j = 0; j < size; j++)
				{
					if (j != k)
					{
						fout << custumer[j].name << endl;
						fout << custumer[j].pin << endl;
						fout << custumer[j].pass << endl;
					}
				}
				fout.close();
			}
		}
	}
	else
	{
		cout << "Invalid username or password\nPlease try again\n";
	}


	return 0;
}