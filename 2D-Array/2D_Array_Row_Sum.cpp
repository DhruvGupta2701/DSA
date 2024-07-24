#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>n>>m;
    int arr[n][m];
    int Sum = 0;
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
    int row;
    cout<<"Enter row number you want to sum : "<<endl;
    cin>>row;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==row-1)
            {
                Sum += arr[i][j];
            }
        }
    }
    cout<<"Sum of selected row is : "<<Sum;
}
