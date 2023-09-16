#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n ;
    cout << "Enter no of row and col: ";
    cin>>n;
    for( int i = n ; i>0; i--)
    {
        for (int j=n ; j>0; j--)
        {
            if( j<=i)
                cout<<setw(2)<<i;
            else
                cout<<setw(2)<<j;
        }
        for (int j=1 ; j<=n; j++)
        {
            if( j<=i)
                cout<<setw(2)<<i;
            else
                cout<<setw(2)<<j;
        }
        cout<<endl;
    }
    for( int i = 1 ; i<=n; i++)
    {
        for (int j=n ; j>0; j--)
        {
            if( j>=i)
                cout<<setw(2)<<j;
            else
                cout<<setw(2)<<i;
        }
        for (int j=1 ; j<=n; j++)
        {
            if( j<=i)
                cout<<setw(2)<<i;
            else
                cout<<setw(2)<<j;
        }
        cout<<endl;
    }
    return 0;
}
