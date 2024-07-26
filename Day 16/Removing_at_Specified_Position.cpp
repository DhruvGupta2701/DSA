#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1,2,1,3,4,1};
    list<int>::iterator itr = numbers.begin();
    cout<<"Initial list: "<<endl;
    for(int i:numbers)
    {
        cout<<i<<", ";
    }cout<<endl;
    cout<<"Enter element index to delete: "<<endl;
    int index;
    cin>>index;
    for(int i=0; i<index; i++)
    {
        itr++;
    }
    numbers.remove(*itr);
    cout<<"After removing specified element: "<<endl;
     for(int i:numbers)
    {
        cout<<i<<", ";
    }
    return 0;
}
