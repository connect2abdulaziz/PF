#include <iostream>
using namespace std; 

void reduction(double [], int );
void transformation(double[],double [], int);
void retransformation(double[], double[], int);



int main()
{
	const int MAX = 20;
	double a[MAX][MAX];
	int row, col, n;
	cout << "Order of your matrix" << endl;
	cout << "Press   '2' (for 2 by 2)\n";
	cout << "\t'3' for (3 by 3)\n";
	cout << "\tand so on ...\n";
	cout << "Your Selection: ";
	cin >> n;
	row = col = n;


	for (int i = 0; i < row; i++)
	{
		cout << "R" << i + 1 << " :";
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	
	for (int m = 0; m < n; m++)
	{
		for (int i = m; i < row; i++)
		{
			for (int j = m; j < col; j++)
			{
				if (i == m && j == m)
				{
					if (a[m][m] == 0)
					{
						for (int l = m; l < row; l++)
						{
							if (a[l][j] != 0)
							{
								double temp;
								for (int k = m; k < col; k++)
								{
									temp = a[i][j];
									a[i][j] = a[l][j];
									a[l][j] = temp;
									j++;
								}
								temp = a[i][m];
								for (int k = m; k < col; k++)
								{
									a[i][k] = (float)a[i][k] / temp;
								}

								l = j = col;
							}
						}
					}
					else
					{
						double temp = a[i][j];
						for (int k = m; k < col; k++)
						{
							 a[i][k] = (float)a[i][k] / temp;
						}
						j = col;

					}
				}
				else if (i != m && a[i][m] != 0)
				{
					double temp = a[i][j];
					for (int k = m; k < col; k++)
					{
						a[i][k] = a[i][k] - temp * a[m][m];
					}
					j = col;
				}
				else
				{
					continue;
				}
			}
		}
	}

	cout << "\n\nHalf echolon form:";
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout<< a[i][j]<<" ";
		}
	}


	double b[MAX][MAX];
	for (int i = row - 1, l = 0; i >= 0, l < row; i--, l++)
	{

		for (int j = col - 1, m = 0; j >= 0, m < col; j--, m++)
		{
			b[l][m] = a[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		
		for (int j = 0; j < col; j++)
		{
			a[i][j] = b[i][j];
		}
	}






	for (int m = 0; m < n; m++)
	{
		for (int i = m; i < row; i++)
		{
			for (int j = m; j < col; j++)
			{
				if (i == m && j == m)
				{
					if (a[m][m] == 0)
					{
						for (int l = m; l < row; l++)
						{
							if (a[l][j] != 0)
							{
								double temp;
								for (int k = m; k < col; k++)
								{
									temp = a[i][j];
									a[i][j] = a[l][j];
									a[l][j] = temp;
									j++;
								}
								temp = a[i][m];
								for (int k = m; k < col; k++)
								{
									if (i != k)
									a[i][k] = (float)a[i][k] / temp;
								}

								l = j = col;
							}
						}
					}
					else
					{
						double temp = a[i][j];
						for (int k = m; k < col; k++)
						{
							if (i != k)
							a[i][k] = (float)a[i][k] / temp;
						}
						j = col;

					}
				}
				else if (i != m && a[i][m] != 0)
				{
					double temp = a[i][j];
					for (int k = m; k < col; k++)
					{
						if (i != k) 
						a[i][k] = a[i][k] - temp * a[m][m];
					}
					j = col;
				}
				else
				{
					continue;
				}
			}
		}
	}

	cout << "\n\nFull echolon form:";
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
	}











	/*const int MAX = 100;
	int n;
	double a[MAX];
	cout << "\tSelect Order of Matrix\n";
	cout << "2. for 2 by 2\n3. for 3 by 3\nand so on....\n";
	cout << "Your Selection: ";
	cin >> n;
	cout << "Enter 1st row: ";
	for (int i = 0; i < n * n; i++)
	{
		if (i % n == 0 && i != 0)
		{
			cout << "\nEnter next row: ";
		}

		cin >> a[i];

	}




	reduction(a, n);
	double b[MAX];
	int temp = 0;
	for (int m = 1; m < n; m++)
	{
		transformation(a, b, n);
		temp = n - m;
		reduction(b, temp);
		retransformation(a, b, n);
	}


	for (int i = 0; i < n *n; i++)
	{
		if (i % n == 0)
		{
			cout << endl;
		}
		cout << a[i] << " ";
		
	}*/





	system("pause>0");
	return 0;
}


void reduction(double a[], int n)
{
	for (int i = 0; i < n*n; i = i + n)
	{
		if (i == 0)
		{
			if (a[i] == 0)
			{
				for (int j = n; j < n * n; j = j + n)
				{
					if (a[j] != 0)
					{
						int temp;
						for (int k = 0; k < n; k++)
						{
							temp = a[k];
							a[k] = a[j];
							a[j] = temp;

						}
						int temp1 = a[i];
						for (int l = 0; l < n; l++)
						{
							a[l] = (float)a[l] / temp1;
						}
						break;
					}
					else
						continue;


				}
			}
			else
			{
				int temp1 = a[i];
				for (int l = 0; l < n; l++)
				{
					a[l] = (float)a[l] / temp1;
				}
			}
		}
		else
		{
			int temp1 = a[i];
			for (int j = i; j < i +n; j++)
			{
				for (int l = 0; l < n; l++)
				{
					a[j] = a[j] - a[l] * temp1;
					j++;
				}
				break;
			}
		}





	}







}


void transformation(double a[], double b[], int n)
{
	int j = 0;
	for (int i = n; i < n * n; i++)
	{
		if (i % n == 0)
		{
			continue;
		}
		else
		{
			b[j] = a[i];
			j++;
		}
	}
}



void retransformation(double a[], double b[], int n)
{
	int j = 0; 
	for (int i = n; i < n * n; i++)
	{
		if (i % n == 0)
		{
			continue;
		}
		else
		{
			a[i] = a[j];
			j++;
		}
	}
}
