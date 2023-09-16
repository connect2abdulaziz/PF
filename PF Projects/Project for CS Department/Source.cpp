/*
Question : A  University  has  a  Computer  Science  department
in  which  a  Student  can  enroll himself/herself  in  different
number  of  courses.  There are  total  of  5  courses  with
minimum  3  credit  hours and  maximum 4 credit  hours.
The  Department  decided to  keep  the  records  of  student
enrollment  in  a course  along  with  the  section.  A  student
can  enroll himself  in  multiple  courses  and  in  multiple
section but  he/she  can’t  study  the  same  course  with
multiple section. There  is  a  file  containing  information
related  to course  code  and  the  credit  hours  of  that  course
separated  with  a  space. There  are  total  of
5  sections  Name  as  A,  B  C,  D,  E.
*/


#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <sstream>
#include <cstdlib>


using namespace std;

//Globally Declared Constants and Varriables
const int MAX = 500;
const int N = 20;
int i = 0, j = 0;

//Functions Prototypes
char manu();
void toEnrol(char**, char**, char*, char*);
void toDrop(char**, char**, char*, char*);
void displayEnrolCourse(char**, char**, char*, char*);
void updateSec(char**, char**, char*);
void totalEnrolStd(char**);
void notEnrolCourse(char**);
void minRegCourse(char**);


int main()
{

	cout << "********************\n";
	cout << "* AsSalamo Alaikum *\n";
	cout << "********************\n";
	cout << endl;
	//Declering 2D Pointers/Arrays Dynamically
	char** id = { nullptr };
	char** course = { nullptr };
	course = new char* [MAX];
	id = new char* [MAX];
	for (int a = 0; a < MAX; a++)
	{
		id[a] = { nullptr };
		id[a] = new char[N];
		course[a] = { nullptr };
		course[a] = new char[N];
	}
	//Declering Pointers Dynamically
	char* sec = { nullptr };
	sec = new char[MAX];
	char* cHour = { nullptr };
	cHour = new char[MAX];

	char repeat = 0;
	//The Do while loop is just for to repeat the program
	// for another Enrollement or to use any other function 
	// fastly and easily.
	do
	{

		char choice = manu();
		if (choice == '1')
		{
			//This Function is used to Enrolled the Students.
			toEnrol(id, course, sec, cHour);
		}
		else if (choice == '2')
		{
			//The Function is used to Drop any specific Course.
			toDrop(id, course, sec, cHour);
		}
		else if (choice == '3')
		{
			//To Display the Enrolled Courses for any Student.
			displayEnrolCourse(id, course, sec, cHour);
		}
		else if (choice == '4')
		{
			//To Update Section for any Student.
			updateSec(id, course, sec);
		}
		else if (choice == '5')
		{
			//This Function will Count the Total Enrolled Student in a 
			// Specific Course.
			totalEnrolStd(course);
		}
		else if (choice == '6')
		{
			// The Function Display The not Enrolled Course/Courses 
			//  by any Student.
			notEnrolCourse(course);
		}
		else
		{
			//The Function will find the Student with the Minimum Registered Courses.
			minRegCourse(id);
		}

		/*********************
			Asking for again *
		**********************/
		cout << "\n\nDo you want to repeat the program or quit? (R/Q) ";
		cin >> repeat;
		system("cls");
		while (!(toupper(repeat) == 'R' || toupper(repeat) == 'Q'))
		{
			cout << "Please enter R or Q: ";
			cin >> repeat;
			system("cls");
		}
		system("cls");
	} while (toupper(repeat) == 'R');

	//As we know that we have created the Pointers/Arrays Dynomically 
	//So, to avid the memory leakage Problems we simply delete it.
	//And as well to solve the dengling Pointers issue we make it null pointers.
	for (int a = 0; a < MAX; a++)
	{
		delete[]id[a];
		id[a] = nullptr;
		delete[]course[a];
		course[a] = nullptr;
	}
	delete[] id;
	id = nullptr;
	delete[] course;
	course = nullptr;
	delete[]sec;
	sec = nullptr;
	delete[]cHour;
	cHour = nullptr;
	return 0;
}






char manu()
{
	char choice;
	cout << "Press 1 for Enrollment the Student in a Course.\n";
	cout << "Press 2 for Drop a Specified Course.\n";
	cout << "Press 3 for Student Enrolled Courses.\n";
	cout << "Press 4 for Update Section of Student for enrolled Course.\n";
	cout << "Press 5 Display Total number of Students enrolled in particular course.\n";
	cout << "Press 6 Display course not enrolled by any student.\n";
	cout << "Press 7 Display the Student with minimum number of registered course.\n";
	cout << "\nEnter Choice: ";
	cin >> choice;
	while (choice < '1' || choice >'7')
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Re-enter your Choice in range of 1-7: ";
		cin >> choice;
		system("cls");
	}
	return choice;
}






void toEnrol(char** std, char** course, char* sec, char* cHour)
{
	//system("cls");
	cout << "Enter Student ID: ";
	cin.ignore();
	cin.getline(std[i], N);
	//system("cls");
	cout << "Choose a course from the following courses\n\n";
	cout << "CSCP1011 4// Programming Fundamentals\n";
	cout << "CSHU2833 3// Logical Thinking\n";
	cout << "CSCS2533 3// Digital Logic Design\n";
	cout << "CSHU1893 3// Pakistan Studies\n";
	cout << "CSSS1713 3// Calculus I\n";
	cout << "Enter Course Code (i.e for Calculus I just Enter CSSS1713): ";
	cin.getline(course[i], N);
	//system("cls");
	while (!(strcmp(course[i], "CSCP1011") == 0 || strcmp(course[i], "CSHU2833") == 0 || strcmp(course[i], "CSCS2533") == 0 || strcmp(course[i], "CSHU1893") == 0 || strcmp(course[i], "CSSS1713") == 0))
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Choose a course from the following courses\n\n";
		cout << "CSCP1011 4// Programming Fundamentals\n";
		cout << "CSHU2833 3// Logical Thinking\n";
		cout << "CSCS2533 3// Digital Logic Design\n";
		cout << "CSHU1893 3// Pakistan Studies\n";
		cout << "CSSS1713 3// Calculus I\n";
		cout << "Enter Course Code (i.e for Calculus I just Enter CSSS1713): ";
		cin.getline(course[i], N);
		system("cls");
	}
	cout << "Enter Credit Hourse: ";
	cin >> cHour[i];
	//system("cls");
	while (cHour[i] < '3' || cHour[i]>'4')
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Re-enter your Course Credit Hours: ";
		cin >> cHour[i];
		system("cls");
	}
	cout << "Enter the Section: ";
	cin >> sec[i];
	//system("cls");
	while (sec[i] < 'A' || sec[i]>'E')
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Re-enter your Section: ";
		cin >> sec[i];
		system("cls");
	}
	bool isValid = false;
	for (int m = 0; m <= i; m++)
	{
		for (int n = m + 1; n <= i; n++)
		{
			if (strcmp(std[m], std[n]) == 0)
			{
				if (strcmp(course[m], course[n]) == 0)
				{
					cout << "Student cannot enroll a course in multiple sectons!\n";
					isValid = true;
					break;
				}

			}
		}
	}
	if (!isValid)
	{
		cout << "Student Enrolled Successfully!\n";
		i++;
	}
	cin.ignore();
}








void toDrop(char** std, char** course, char* sec, char* cHour)
{
	//system("cls");
	cout << "Enter Student ID: ";
	cin.ignore();
	char tempid[N];
	cin.getline(tempid, N);
	//system("cls");
	cout << "Enter Course Code: ";
	char tempcourse[N];
	cin.getline(tempcourse, N);
	//system("cls");
	while (!(strcmp(tempcourse, "CSCP1011") == 0 || strcmp(tempcourse, "CSHU2833") == 0 || strcmp(tempcourse, "CSCS2533") == 0 || strcmp(tempcourse, "CSHU1893") == 0 || strcmp(tempcourse, "CSSS1713") == 0))
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Choose a course from the following courses\n\n";
		cout << "CSCP1011 4// Programming Fundamentals\n";
		cout << "CSHU2833 3// Logical Thinking\n";
		cout << "CSCS2533 3// Digital Logic Design\n";
		cout << "CSHU1893 3// Pakistan Studies\n";
		cout << "CSSS1713 3// Calculus I\n";
		cout << "Enter Course Code (i.e for Calculus I just Enter CSSS1713): ";
		cin.getline(tempcourse, N);
		system("cls");
	}
	bool isValid = false;
	for (int m = 0; m <= i; m++)
	{
		if (strcmp(tempid, std[m]) == 0)
		{
			if (strcmp(course[m], tempcourse) == 0)
			{
				while (m <= i)
				{
					strcpy(course[m], course[m + 1]);
					strcpy(std[m], std[m + 1]);
					cHour[m] = cHour[m + 1];
					sec[m] = sec[m + 1];
					m++;
				}
				isValid = true;
				break;
			}

		}

	}
	if (isValid)
	{
		cout << "Course Drop Successfully!\n";
		i--;
	}
	else
	{
		cout << "Course/ID Not Found" << endl;
	}
}
void displayEnrolCourse(char** std, char** course, char* sec, char* cHour)
{
	//system("cls");
	cout << "Enter Student ID: ";
	cin.ignore();
	char tempid[N];
	cin.getline(tempid, N);
	//system("cls");
	cout << "Course\t\tC/hours\t\tSection\n";
	for (int m = 0; m <= i; m++)
	{
		if (strcmp(tempid, std[m]) == 0)
		{
			cout << course[m] << "\t" << cHour[m] << "\t\tSection " << sec[m] << endl;
		}

	}

}











void updateSec(char** std, char** course, char* sec)
{
	//system("cls");
	cout << "Enter Student ID: ";
	cin.ignore();
	char tempid[N];
	cin.getline(tempid, N);
	//system("cls");
	cout << "Enter Course Code: ";
	char tempcourse[N];
	cin.getline(tempcourse, N);
	//system("cls");
	while (!(strcmp(tempcourse, "CSCP1011") == 0 || strcmp(tempcourse, "CSHU2833") == 0 || strcmp(tempcourse, "CSCS2533") == 0 || strcmp(tempcourse, "CSHU1893") == 0 || strcmp(tempcourse, "CSSS1713") == 0))
	{
		cout << "ERROR!! Invalid Input.\n\n";
		cout << "Choose a course from the following courses\n\n";
		cout << "CSCP1011 4// Programming Fundamentals\n";
		cout << "CSHU2833 3// Logical Thinking\n";
		cout << "CSCS2533 3// Digital Logic Design\n";
		cout << "CSHU1893 3// Pakistan Studies\n";
		cout << "CSSS1713 3// Calculus I\n";
		cout << "Enter Course Code (i.e for Calculus I just Enter CSSS1713): ";
		cin.getline(tempcourse, N);
		system("cls");
	}
	bool isValid = false;
	for (int m = 0; m <= i; m++)
	{
		if (strcmp(tempid, std[m]) == 0)
		{
			if (strcmp(course[m], tempcourse) == 0)
			{
				cout << "Enter New Section: ";
				cin >> sec[m];
				//system("cls");
				while (sec[m] < 'A' || sec[m]>'E')
				{
					cout << "ERROR!! Invalid Input.\n";
					cout << "Re-enter your Section: ";
					cin >> sec[m];
					system("cls");
				}
				isValid = true;
				break;
			}

		}

	}
	if (isValid)
	{
		cout << "Section Updated Successfully!\n";
	}
	else
	{
		cout << "Course/ID Not Found" << endl;
	}
}









void totalEnrolStd(char** course)
{
	//system("cls");
	cout << "Enter Course Code: ";
	char tempcourse[N];
	cin.ignore();
	cin.getline(tempcourse, N);
	//system("cls");
	while (!(strcmp(tempcourse, "CSCP1011") == 0 || strcmp(tempcourse, "CSHU2833") == 0 || strcmp(tempcourse, "CSCS2533") == 0 || strcmp(tempcourse, "CSHU1893") == 0 || strcmp(tempcourse, "CSSS1713") == 0))
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Choose a course from the following courses\n\n";
		cout << "CSCP1011 4// Programming Fundamentals\n";
		cout << "CSHU2833 3// Logical Thinking\n";
		cout << "CSCS2533 3// Digital Logic Design\n";
		cout << "CSHU1893 3// Pakistan Studies\n";
		cout << "CSSS1713 3// Calculus I\n";
		cout << "Enter Course Code (i.e for Calculus I just Enter CSSS1713): ";
		cin.getline(tempcourse, N);
		system("cls");
	}

	int count = 0;
	for (int m = 0; m <= i; m++)
	{

		if (strcmp(course[m], tempcourse) == 0)
		{
			count++;
		}


	}
	cout << "Total Enroll Students for course " << tempcourse << " are: " << count << endl;
}








void notEnrolCourse(char** course)
{
	//system("cls");
	bool flag[5] = { false };
	for (int m = 0; m <= i; m++)
	{
		if (strcmp(course[m], "CSCP1011") == 0)
		{
			flag[0] = true;
		}
		if (strcmp(course[m], "CSHU2833") == 0)
		{
			flag[1] = true;
		}
		if (strcmp(course[m], "CSCS2533") == 0)
		{
			flag[2] = true;
		}
		if (strcmp(course[m], "CSHU1893") == 0)
		{
			flag[3] = true;
		}
		if (strcmp(course[m], "CSSS1713") == 0)
		{
			flag[4] = true;
		}
	}
	char temp[5][N] = { "CSCP1011" , "CSHU2833" ,  "CSCS2533" ,  "CSHU1893" ,  "CSSS1713" };
	cout << "Not Erolled Courses are below!\n";
	for (int m = 0; m < 5; m++)
	{
		if (!flag[m])
		{
			cout << temp[m] << ", ";
		}
	}
	cout << " is not enrolled by any Student" << endl;
}






void minRegCourse(char** std)
{
	//system("cls");
	int count[MAX] = { 0 };
	int m = 0;

	for (; m <= i; m++)
	{
		for (int n = 0; n < i; n++)
			if (strcmp(std[m], std[n]) == 0)
			{
				count[m]++;
			}
	}
	int k;
	for (k = 0; k < m; k++)
	{
		for (int n = k; n < m; n++)
		{
			if (count[k] > count[n])
			{
				count[k] = count[n];
			}
		}
	}
	if (count[k] > 0)
	{
		cout << std[k] << " has registered only " << count[k] << " Courses\n";
	}
	else
	{
		cout << "No Student/Course Found\n";
	}
}