#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int num)
{
    int temp;
    for(int x = 0; x < num - 1; x++)
    {
        for(int y = 0; y < num - x - 1; y++)
        {
            if(arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    cout<<"Array after implementing bubble sort:";
    for(int x = 0; x < num; x++)
    {
        cout<<arr[x]<<" ";
    }
}
void selectionSort(int arr[], int num)
{
    int temp;
    for(int i=0; i<num-1; i++)
    {
        int index=i;
        for(int j=i+1; j<num; j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
        }
    }
    cout<<"Array after implementing  sort:";
    for(int x = 0; x < num; x++)
    {
        cout<<arr[x]<<" ";
    }
}
void insertionSort(int arr[], int num)
{
    for(size_t i=1; i<num; ++i)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    cout<<"Array after insertion sort : "<<endl;
    for(int x = 0; x < num; x++)
    {
        cout<<arr[x]<<" ";
    }
}

int main()
{
    int num;
    cout<<"Please Enter the Number of Elements you want in the array:";
    cin>>num;
    int arr[num];
    cout<<"Please Enter the Value of Elements:";
    for(int x = 0; x < num; x++)
    {
        cin>>arr[x];
    }
    int choice;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        bubbleSort(arr, num);
        break;
    case 2:
        selectionSort(arr, num);
        break;
    case 3:
        insertionSort(arr, num);
        break;


    }
}
