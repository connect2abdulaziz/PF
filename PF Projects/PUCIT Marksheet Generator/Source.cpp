#include <iostream>
#include <iomanip> // for precision/setw
#include <fstream> // for file 
#include <string>  // for getline 

using namespace std;
const int MAX = 10;// max subject for single semester
struct Student
{
	string n = " ";//name
	int m = 0; // marks
	int sub = 0;//subject 
	double gp = 0;// gpa
};

void getInputFromUser(string*, int*, int*, double*, int);
void storingDataToTheFile(ofstream&, string*, int*, int*, double*, int);
void getInputFromFile(ifstream&, Student*, int);
void display(Student*, int);
void dlt(Student*&);
void dlt(string*&);
void dlt(int*&);
void dlt(double*&);
void dlt(char*&);


int main()
{

	ifstream inPut;// file se read
	ofstream outPut;// file pr write
	int n;//class stregth;
	cout << "How many students in the class: ";
	cin >> n;
	cin.ignore();
	string* name = new string[n];
	int* subject = new int[n];// for no of subjects 
	int* marks = new int[n];
	double* gpa = new double[n];

	//to getinput for each student from user
	cout << "\t***** GETTING DATA FROM THE USER *****\n\n";
	getInputFromUser(name, subject, marks, gpa, n);

	//to store record file name should be required
	string fileName;
	fileName = "BCSF20A.txt";// to store data for the Class F20

	//opening file to store record for the n students
	outPut.open(fileName, ios::app);
	if (!outPut)
	{
		cout << "Not found\n";
	}
	else
	{
		storingDataToTheFile(outPut, name, subject, marks, gpa, n);
		outPut.close();
	}

	// creating students class for Computer Science
	Student* CSF20A = new Student[n];
	inPut.open(fileName);
	if (!inPut)
	{
		cout << "file not found\n";
	}
	else
	{
		getInputFromFile(inPut, CSF20A, n);
		inPut.close();
	}
	display(CSF20A, n);

	//after the complition of the program we delete the pointers
	dlt(name);
	dlt(marks);
	dlt(subject);
	dlt(gpa);
	dlt(CSF20A);

	return 0;
}



void getInputFromUser(string* name, int* sub, int* marks, double* gpa, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter Name for Student #" << i + 1 << ": ";
		getline(cin, name[i]);
		ofstream fout;
		fout.open(name[i]);
		if (!fout)
		{
			cout << "File not created successfully!\n";
		}
		else
		{
			fout << fixed << showpoint << setprecision(2);
			cout << "F/Name: ";
			string fName;
			getline(cin, fName);
			int roll;
			cout << "Roll No: BCSF20A0_ _";
			cin >> roll;
			fout << fixed << left;
			fout << setw(20) << "Name:" << setw(30) << name[i] << setw(15) << "Roll no:" << "BCSF20A0" << roll << endl << endl;
			fout << setw(20) << "Father's Name:" << setw(30) << fName << setw(15) << "Session:" << "2020-2024" << endl << endl << endl << endl;
			fout << setw(10) << "Code" << setw(40) << "Title" << setw(8) << "CrHr" << setw(8) << "Marks" << "Grade\n ";
			for (int i = 0; i < 70; i++)
			{
				fout << "_";
			}
			fout << "\n|";
			for (int i = 0; i < 70; i++)
			{
				fout << "_";
			}
			fout << "|\n\n";
			cout << "Enter no of Subject for " << name[i] << " : ";
			int m;
			cin >> m;
			while (m <= 0 || m > 10)
			{
				cout << "inavlid input!\n";
				cout << "Re-enter the no of subj: ";
				cin >> m;
			}
			cin.ignore();
			double totalCredit = 0;
			int subj[MAX] = { 0 };
			marks[i] = 0;
			gpa[i] = 0;
			for (int j = 0; j < m; j++)
			{
				string temp;
				cout << "Enter course code of the subject #" << j + 1 << " ie (FAL-21, FAL-24): ";
				getline(cin, temp);
				fout << setw(10) << temp;
				cout << "Enter Name of the Course i.e (Calculus, Introduction to Computing): ";
				getline(cin, temp);
				fout << setw(40) << temp;
				cout << temp << " Obtained Marks: ";
				cin >> subj[j];
				while (subj[j] < 0 || subj[j]> 100)
				{
					cout << "invalid input!\n";
					cout << "Re-enter the marks: ";
					cin >> subj[j];
				}
				double credit = 0;
				cout << temp << " Credit Hours: ";
				cin >> credit;

				while (credit < 0 || credit> 6)
				{
					cout << "Invalid input!\n";
					cout << "Re-enter credit houre 0-6: ";
					cin >> credit;
				}
				fout << setw(8) << credit;
				fout << setw(8) << subj[j];
				totalCredit += credit;
				marks[i] += subj[j];
				if (subj[j] >= 85)
				{
					gpa[i] += credit * 4.00;
					fout << setw(10) << "A" << endl;
				}
				else if (subj[j] >= 80)
				{
					gpa[i] += credit * 3.70;
					fout << setw(10) << "A-" << endl;
				}
				else if (subj[j] >= 75)
				{
					gpa[i] += credit * 3.30;
					fout << setw(10) << "B+" << endl;
				}
				else if (subj[j] >= 70)
				{
					gpa[i] += credit * 3.00;
					fout << setw(10) << "B" << endl;
				}
				else if (subj[j] >= 65)
				{
					gpa[i] += credit * 2.70;
					fout << setw(10) << "B-" << endl;
				}
				else if (subj[j] >= 61)
				{
					gpa[i] += credit * 2.30;
					fout << setw(10) << "C+" << endl;
				}
				else if (subj[j] >= 58)
				{
					gpa[i] += credit * 2.00;
					fout << setw(10) << "C" << endl;
				}
				else if (subj[j] >= 55)
				{
					gpa[i] += credit * 1.70;
					fout << setw(10) << "C-" << endl;
				}
				else if (subj[j] >= 50)
				{
					gpa[i] += credit * 1.00;
					fout << setw(10) << "D" << endl;
				}
				else
				{
					gpa[i] += 0;
					fout << setw(10) << "F" << endl;
				}
				cin.ignore();
				cout << endl;
			}
			gpa[i] = gpa[i] / totalCredit;
			sub[i] = m;

			fout << "\n\n" << setw(10) << "Crd Hrs: " << totalCredit << endl;
			fout << setw(10) << "Semester GPA: " << setw(48) << gpa[i] << "CGPA: " << gpa[i] << endl;
			system("cls");
			fout.close();
		}
	}

}

void storingDataToTheFile(ofstream& outPut, string* name, int* sub, int* marks, double* gpa, int n)
{
	for (int i = 0; i < n; i++)
	{
		outPut << name[i] << endl;  // student i name
		outPut << sub[i] << endl;   // student i no of subj
		outPut << marks[i] << endl; // student i marks
		outPut << gpa[i] << endl << endl;   // student i gpa 
	}
}



void getInputFromFile(ifstream& inPut, Student* cs, int n)
{
	for (int i = 0; i < n; i++)
	{
		getline(inPut, cs[i].n);
		inPut >> cs[i].sub;
		inPut >> cs[i].m;
		inPut >> cs[i].gp;
		inPut.ignore();
		inPut.ignore();
	}
}



void display(Student* cs, int n)
{
	cout << endl << endl;
	cout << "\t\t***** OUTPUT FROM THE FILE *****\n\n\n";
	cout << fixed << left << showpoint << setprecision(2);
	cout << setw(7) << "S.No" << setw(25) << "Name" << setw(15) << "# of Subj" << setw(20) << "Obtained Marks" << "SGPA" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << i + 1 << setw(25) << cs[i].n << setw(15) << cs[i].sub << setw(20) << cs[i].m << cs[i].gp << endl;
	}
	char choice;
	cout << "Do you want to see the Detail Marksheet (Y/N): ";
	cin >> choice;
	while (!(toupper(choice) == 'Y' || toupper(choice) == 'N'))
	{
		cout << "Please Enter (Y/N): ";
		cin >> choice;
	}
	if (toupper(choice) == 'Y')
	{
		int sNo;
		cout << "Enter Serial No from the above list: ";
		cin >> sNo;
		while (sNo<1 || sNo> n)
		{
			cout << "Invalid serial no\n";
			cout << "Please Enter in range of 1-" << n << ": ";
			cin >> sNo;
		}
		ifstream fin;
		fin.open(cs[sNo - 1].n);
		if (!fin)
		{
			cout << "Sorry! Detail Marksheet not found\n";
		}
		else
		{
			char c;
			system("cls");
			while (fin)
			{
				fin.get(c);
				cout << c;
			}

			fin.close();
		}
	}
}


void dlt(Student*& s)
{
	delete[]s;
	s = nullptr;
}


void dlt(string*& n)
{
	delete[] n;
	n = nullptr;

}
void dlt(int*& m)
{
	delete m;
	m = nullptr;

}
void dlt(double*& gp)
{
	delete[] gp;
	gp = nullptr;
}
void dlt(char*& g)
{
	delete[] g;
	g = nullptr;
}