#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"Sorted array : "<<endl;
    printarray(arr,n);
}
