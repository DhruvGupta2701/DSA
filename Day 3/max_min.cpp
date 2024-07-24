#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};
    //To find the sum of elements in array
    int sum = 0;
    for(auto x : arr)
        sum += x;
    cout<<"Sum is "<<sum<<endl;
    //To find the minimum or maximum element in an array
    int max = -32678;
    for(auto temp : arr)
    {
        if(temp > max)
        {
            max = temp;
        }
    }
    cout<<"Max element is : "<<max;
    return 0;
}
