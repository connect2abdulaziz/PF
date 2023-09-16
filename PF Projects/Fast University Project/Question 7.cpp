#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double const dltT = 0.01, g = 9.8;
	//Formulas:
	// s = vt - 1/2gt^2 ------- (1)
	// v = v-g*dltT
	// s = s + v*dltT
	double v ;//input from the user
	cout <<"Enter the initial valicity of the Cannon ball: ";
	cin>>v;
	double s1=0, s2 = 0;//position by formula (1) and comparision with s2.
	double v2 = v;// to update after each 0.01 sec
	cout <<"Cannon ball at rest in the Ground\n";
	for (int i=0; ; i++)
	{
		//Cannon ball initilly at rest so the t =0, Vi = 0;
		// we will calculate the position after each 0.01 sec
		// and will display after each full second.
		cout <<showpoint <<setprecision(2)<<fixed;
		cout <<"After t = "<<setw(2)<< i<<" sec"<<setw(15);
		cout <<s1<<setw(15)<<s2<<endl;
		for (int j =1; j<=100; j++)
		{
			s2 = s2 + v2*dltT;
			v2 = v2 - g * dltT;
		}
		//t = i so i start from 0 that's why we start from i+1
		//i = 0, we place i = i+1
		s1 = (v* (i+1)) - (0.5*g*(i+1)*(i+1));//i = t each full sec
		if (s1 < 0 )
		{
			s1 = 0, s2 = 0;
			cout <<"After t = "<<setw(2)<< i+1<<" sec"<<setw(15);
			cout <<s1<<setw(15)<<s2<<endl;
			cout <<"Cannon ball back into Ground\n";
			break;
		}
		
	}
	//Now to plot Graph
	cout <<"\n\n\n\tPlotting Graph\n";
	s1 = s2 = 0;
	int pexil = v/3;
	if (v <= 40)
	pexil = 1;
	for (int i=0; ; i++)
	{
		for (int j =0; j<= s1/pexil; j++)
		{
			cout<<"*";
		}
		cout <<endl;
		s1 = (v* (i+1)) - (0.5*g*(i+1)*(i+1));
		if (s1 < 0 )
		{
			break;
		}
	}
	
	return 0;
	
}
