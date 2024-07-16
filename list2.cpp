#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l = {3,4,6,3,2,1,1};
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;
    l.reverse();

    cout<<"After reversing : "<<endl;
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.unique();
    cout<<"After unique : "<<endl;
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.resize(2);
    cout<<"After resizing : "<<endl;
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;




}
