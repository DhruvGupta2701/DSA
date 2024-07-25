#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int start=3,endp=0;
    int i=start, j=endp;
    while(i<j){
        int temp = nums[i];
        nums[j] = nums[j];
        nums[j] = temp;
        i++;j--;
        cout<<nums[i]<<" ";
    }

}
