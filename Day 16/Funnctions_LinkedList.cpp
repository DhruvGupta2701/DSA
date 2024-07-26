#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1,2,4,3,6,5,5};
    list<int> list2 = {7,8,9,10};
    int choice;
    while(true)
    {
        cout<<"1.Reverse."<<endl;
        cout<<"2.Sort."<<endl;
        cout<<"3.Unique."<<endl;
        cout<<"4.Empty."<<endl;
        cout<<"5.Size."<<endl;
        cout<<"6.Clear."<<endl;
        cout<<"7.Merge."<<endl;
        cout<<"8.Exit."<<endl;
        cout<<"Enter you choice : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:numbers.reverse();
            cout<<"After reversing: "<<endl;
            for(int i:numbers)
            {
                cout<<i<<" ";
            }cout<<endl;
            break;

            case 2:numbers.sort();
            cout<<"After sorting: "<<endl;
            for(int i:numbers)
            {
                cout<<i<<" ";
            }cout<<endl;
            break;

            case 3:numbers.unique();
            cout<<"After using unique: "<<endl;
            for(int i:numbers)
            {
                cout<<i<<" ";
            }cout<<endl;
            break;

            case 4:if(numbers.empty())
            {
                cout<<"List is empty."<<endl;
            }
            else
            {
                cout<<"List is not empty."<<endl;
            }
            break;

            case 5:cout<<"Size of list is: "<<numbers.size()<<endl;
            break;

            case 6:numbers.clear();
            cout<<"List is cleared."<<endl;
            break;

            case 7:cout<<"Second list is: "<<endl;
            for(int i:list2)
            {
                cout<<i<<" ";
            }cout<<endl;
            numbers.merge(list2);
            cout<<"After merging: "<<endl;
            for(int k:numbers)
            {
                cout<<k<<" ";
            }cout<<endl;
            break;

            case 8:exit(0);
            break;
        }
    }
    return 0;
}
