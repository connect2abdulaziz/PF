#include<iostream>
using namespace std;

int main()
{

    int arr1[5]= {4,4,4,4,4};
    int arr2[7]= {5,5,5,6,6,6,5};
    int temp [5+7];
    int j = 0;
    for(int i=0; i<5+7; i++)
    {
        if( i<5)
            temp[i]=arr1[i];
        else {

            temp[i]=arr2[j];
            j++;
        }
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    int n = 5+7;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(temp[i]==temp[j])
            {
                while(j<n)
                {
                    temp[j]= temp[j+1];
                    j++;
                }
                n--;
                j=i;
            }
        }
        cout<<temp[i]<<" ";
    }
    return 0;
}
