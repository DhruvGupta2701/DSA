#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main()
{
    vector<int> arr = {2,-4,-1,7,2};
    int maxsum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<arr.size(); i++)
    {
        currSum += arr[i];
        if(currSum > maxsum)
        {
            maxsum = currSum;
        }
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    cout<<"Maximum sum is : "<<currSum<<endl;
    return 0;
}
