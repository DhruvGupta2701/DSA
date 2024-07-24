//To find the number of pairs of integers in the array whose sum is equal to given value_type
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,4,2,3,8};
    int value = 5;
    int count1 = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]+arr[j]== value)
            {
                count1 +=1;
            }

        }
    }
    cout<<"The count of pairs "<<value<<" is "<<count1<<endl;
    return 0;
}
