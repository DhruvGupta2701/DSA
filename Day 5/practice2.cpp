#include<iostream>
using namespace std;
int singlenumber(int arr[], int n)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==arr[i+1])
        {
            i++;
        }
        else
        {
            for(int j=i; j<n; j++)
            {
                if(arr[j]==arr[j+2])
                {
                    j++;
                }
                return arr[j+1];
            }
        }
        return arr[i+1];
    }
}
int main()
{
    int arr[] = {2,2,1,3,1};
    int n = end(arr)-begin(arr);
    int ans = singlenumber(arr,n);
    cout<<ans<<endl;
}
