#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Remove using value
    list<int> numbers = {1,2,3,4};
    cout<<"Initial list: "<<endl;
    for(int i:numbers)
    {
        cout<<i<<", ";
    }cout<<endl;
    //removing 1 from the list
    cout<<"Enter element to delete: "<<endl;
    int ele;
    cin>>ele;
    numbers.remove(ele);
    //modified list
    cout<<"After removing 1: "<<endl;
    for(int i:numbers)
    {
        cout<<i<<", ";
    }cout<<endl;

}
