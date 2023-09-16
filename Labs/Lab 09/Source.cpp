#include <iostream>


using namespace std;
class ScoreCard
{
	int testCount;
	double* scoreList = new double[testCount];
public:
	void obtainScore()
	{
		int no;
		cout << "Enter Test no:";
		cin >> no;
		testCount = no;
	}
	double getAverage()
	{
		double avg, total = 0.0;
		for (int i = 0; i < testCount; i++)
		{
			cout << "Enter Test no " << i + 1;
			cin >> scoreList[i];
			total = total + scoreList[i];
		}
		avg = total / testCount;
	}

};


int main()
{
	
	unsigned long long  int a= 18446744073709551615;

	cout << a << endl;
	cout << sizeof(a) << endl;

	return 0;
}