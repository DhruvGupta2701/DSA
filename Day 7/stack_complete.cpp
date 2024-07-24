#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int choice;
    while(true)
    {
        cout<<"**********************************"<<endl<<endl;
        cout<<"1. Size of the stack"<<endl;
        cout<<"2. Insert element into the stack"<<endl;
        cout<<"3. Delete element from the stack"<<endl;
        cout<<"4. Top element of the stack"<<endl;
        cout<<"5. Exit"<<endl<<endl;
        cout<<"**********************************"<<endl;
        cout<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Size is : "<<s.size()<<endl;
            cout<<endl;
            break;

        case 2:

            cout<<"Enter element you want to insert : "<<endl;
            int ele;
            cin>>ele;
            s.push(ele);
            cout<<"Element got inserted."<<endl;
            cout<<endl;
            break;

        case 3:
            if(!s.empty())
            {
                s.pop();
                cout<<"Element got deleted."<<endl;
                cout<<endl;
            }
            else
            {
                cout<<"Underflow Error!!"<<endl;
                cout<<endl;
            }
            break;

        case 4:
            if(!s.empty()){
            cout<<"Top element of the stack is : "<<s.top()<<endl;
            cout<<endl;
            }
            else{
                cout<<"Stack is empty"<<endl;
                cout<<endl;
            }
            break;

        case 5:
            exit(0);
            break;
        }
    }
}
