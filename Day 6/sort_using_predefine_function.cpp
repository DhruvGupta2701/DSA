#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a = {3,4,2,5,6,9,1};
    int size = a.size();
    sort(a.begin(), a.end());
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    a.clear();
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
}
