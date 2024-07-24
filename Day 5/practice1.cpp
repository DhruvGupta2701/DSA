#include<iostream>
using namespace std;
void intersection(int arr1[], int arr2[])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }

}
int main()
{
    int arr1[] = {2,3,4,5,9};
    int arr2[] = {3,9,5,2};
    intersection(arr1,arr2);
}
