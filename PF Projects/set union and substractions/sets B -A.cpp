#include<iostream>
using namespace std;

int main()
{
    cout << "Hello,World!\n";
    int arr1[5]= {1,2,3,4,5};
    int arr2[8]= {0,1,2,4,8,9,10,4};
    int temp [8];
    int n = 0;
    for(int i=0; i<8; i++)
    { 
         bool found = false;
        for(int j=0; j<5; j++)
        {
            if(arr1[j]==arr2[i])
            {
                found = true;
                break;
            }
        }
       if(!found)
        {
          temp[n]= arr2[i];
          n++;
        
        }
    }
    cout<<"B-A\n";
    for(int i=0;i<n; i++)
    cout<<temp[i]<<" ";
    return 0;
}
