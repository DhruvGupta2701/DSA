#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10,7,8,9,1,5};
    sort(v.begin(), v.end());
    cout<<"Sorted array : ";
    for(int num : v)
    {
        cout<<num<<" ";
    }
    return 0;
}
