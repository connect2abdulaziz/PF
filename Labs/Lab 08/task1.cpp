/*
ABDUL AZIZ
BCSF19A026
*/

#include <iostream>
using namespace std;

int main()
{
	//given program 
	int var1 = 10, var2 = 5;
	int* p1, * q1, * r1;
	int var3;
	var3 = ++var2;
	p1 = &var1;
	q1 = &var2;
	r1 = &var3;
	*p1 = var3++;
	*q1 = ++var1;
	// Required output 
	cout << "\t*********OUTPUT**********\n\n";
	cout << "Address of variable var1: " << &var1 << endl;
	cout << "Address of variable var2: " << &var2 << endl;
	cout << "Address of variable var3: " << &var3 << endl;
	cout << "Address of pointer variable p1: " << &p1 << endl;
	cout << "Address of pointer variable q1: " << &q1 << endl;
	cout << "Address of pointer variable r1: " << &r1 << endl;
	cout << "value at location pointed by p1: " << *p1 << endl;
	cout << "value at location pointed by q1: " << *q1 << endl;
	cout << "value at location pointed by r1: " << *r1 << endl;
	cout << "value at location that is pointed by p1: " << *p1 << endl;
	cout << "Address of location that is pointed by p1: " << p1 << endl;
	cout << endl;
	system("pause > 0");

	return 0;
}
