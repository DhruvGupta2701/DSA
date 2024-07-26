#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers;
    int choice;
    while(true)
    {
        cout<<"1.Insert in front."<<endl;
        cout<<"2.Insert in back."<<endl;
        cout<<"3.Delete from front."<<endl;
        cout<<"4.Delete from back."<<endl;
        cout<<"5.Display first element."<<endl;
        cout<<"6.Display last element."<<endl;
        cout<<"7.Exit."<<endl;
        cout<<"Enter you choice : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:int ele;
            cout<<"Enter element to insert in front : "<<endl;;
            cin>>ele;
            numbers.push_front(ele);
            cout<<"Element got inserted at front."<<endl;
            break;

            case 2:int ele1;
            cout<<"Enter element to insert in back : "<<endl;;
            cin>>ele1;
            numbers.push_back(ele1);
            cout<<"Element got inserted at back."<<endl;
            break;

            case 3:numbers.pop_front();
            cout<<"Element got deleted from front."<<endl;
            break;

            case 4:numbers.pop_back();
            cout<<"Element got deleted from back."<<endl;
            break;

            case 5:cout<<"First element is : "<<numbers.front()<<endl;
            break;

            case 6:cout<<"Last element is : "<<numbers.back()<<endl;
            break;

            case 7:exit(0);
        }
    }
    return 0;
}
