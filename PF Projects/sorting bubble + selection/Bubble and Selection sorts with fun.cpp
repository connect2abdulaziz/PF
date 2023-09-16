#include <iostream>
using namespace std;


void bubble(int[], int);
void selection(int [], int);
int main()
{
	int a1[10] = {12,44,2,-1,3,22,93,6,98,18};
    int a2[5] = {2,111,0,7,-2};
    bubble(a1,10);
    bubble(a2,5);
    selection(a1,10);
    selection(a2,5);
	
	
	return 0;
}
void bubble(int arr [], int s)
{
	cout <<"Bubble Sort\n";
	bool s1 = false;
	while (1)
	{
		s1 = false;
		for (int j=0;j<s-1; j++)
		{
			if (arr[j]> arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				s1 = true;
			}
		}
		
		
		if (s1)
		continue;
		else
		break;
	}
	for (int i =0; i<s; i++)
	     cout <<arr[i]<<" ";
	cout <<endl;
}
void selection(int arr [], int s)
{
	cout <<"Selection Sort\n";
	int i =0;
	int j =0;
	while (i<s-1)
	{
		j = i;
		while (j<s-1)
		{
			if (arr[j]< arr[j+1])
			swap (arr[j], arr[j+1]);
			j++;
		}
		swap(arr[i], arr[j]);
		i++;
	}
	
	for (int i =0; i<s; i++)
	cout <<arr[i]<<" ";
	cout <<endl;
}
