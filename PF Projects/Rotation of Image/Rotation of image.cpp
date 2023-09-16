#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
	int const row = 9,col =9;
	int arr[row][col] = {
	{1,1,1,1,1,1,1,1,1},
	{2,2,2,2,2,2,2,2,2},
	{3,3,3,3,3,3,3,3,3},
	{4,4,4,4,4,4,4,4,4},
	{5,5,5,5,5,5,5,5,5},
	{6,6,6,6,6,6,6,6,6},
	{7,7,7,7,7,7,7,7,7},
	{8,8,8,8,8,8,8,8,8},
	{9,9,9,9,9,9,9,9,9},
	};
	
	system("pause>0");
	cout <<"Before Roation\n";
		for (int i =0; i<row; i++)
	{
		for (int j =0; j<col; j++)
		{
			Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),rand()%9 +1);
		cout <<arr[i][j]<<" ";
	}
		cout <<endl;
	}
	int n;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout <<"Please Select from the following\n";
	cout <<"Press 1 to rotate the image by 90\n";
	cout <<"Press 2 to rotate by 180\n";
	cout <<"Press 3 to rotate by 270\n";
	cout <<"Press 4 to rotate by 360 (inmiations)\n";
	cin>>n;
	while (n<1 || n>4)
	{
		cout <<"Invalid\n";
		cout <<"Re-enter: ";
		cin>>n;
	}
	int i =0;
	cout <<endl<<"Rotationg\n";
	for (int k =0; k<n; k++)
	for ( i =0; i<row/2; i++)
	{
		for (int j =i; j<col-(i+1); j++)
		{
			int temp, temp1; 
			
			temp = arr[j][col -(i +1)];
			arr[j][col- (i+1)] = arr[i][j];
			temp1 = arr[row -( i+1)][col -(j+1)];
			arr[row -( i+1)][col -(j+1)]= temp;
			temp = arr[row -(j+1)][i];
			arr[row -(j+1)][i] = temp1;
			arr[i][j] = temp;
			Sleep(200);
			cout <<arr[i][j];
			cout <<"\b";
		}
		if (i< row/2 - 1)
		cout <<"After "<< i+1<<" Step of Rotation"<<endl;
		else 
		cout <<"After Final Step for Rotation by Degree "<<(k+1) * 90<<endl<<endl;
		for (int l =0; l<row; l++)
		{
			for (int m=0; m<col; m++)
			{
				
				if  (l <=  i) 
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k+2);
				else if ( m <= i )
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k+2);
				else if ( m >= row - (i+1))
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k+2);
				else if (l >= row - (i+1))
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k+2);
				else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k+5); 
				
			Sleep(50);
			cout <<arr[l][m]<<" ";
		    }
			cout <<endl;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		cout <<endl<<endl;
	}
	return 0;
}
