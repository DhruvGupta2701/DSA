#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l = {3,54,2,53,44,32};
    int maximum = 0;
    for(int i: l)
    {
        if(maximum< i)
        {
            maximum = i;
        }
    }
    cout<<maximum<<endl;

}
