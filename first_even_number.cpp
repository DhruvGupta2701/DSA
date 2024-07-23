#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,3,5,8,10,13};
    bool found = false;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            cout<<"First even number is : "<<v[i]<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"NO even number found"<<endl;
    }


    return 0;
}
