#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>n>>m;
    int arr[n][m];
    int Sum1 = 0, Sum2 = 0;
    cout<<"Enter elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Elements are : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Sum of first diagonal
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==j)
            {
                Sum2 += arr[i][j];
            }
        }
    }
    //Sum of second diagonal
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i+j==n-1)
            {
                Sum1 += arr[i][j];
            }
        }
    }
    cout<<"Sum of first diagonal is : "<<Sum2<<endl;
    cout<<"Sum of second diagonal is : "<<Sum1;
}
