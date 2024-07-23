#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers = {1,2,3,4,5};
    for(int i:numbers)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
