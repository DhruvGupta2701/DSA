#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers;
    while(true)
    {
         if(numbers.empty())
         {
            cout<<"The list is empty."<<endl;
            int ele;
            cout<<"Enter element to insert in front : "<<endl;;
            cin>>ele;
            numbers.push_front(ele);
            cout<<"Element got inserted at front."<<endl;
        }
        else
        {
            cout<<"List is not empty."<<endl;
            int ele1;
            cout<<"Enter element to insert in back : "<<endl;;
            cin>>ele1;
            numbers.push_back(ele1);
            cout<<"Element got inserted at back."<<endl;
        }
        break;
    }
    for(int i:numbers)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}
