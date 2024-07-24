#include<iostream>
using namespace std;
void add(int a, int b)
{
    int sum = a+b;
    cout<<"Sum of two numbers is = "<<sum<<endl;
}
void add(int a, int b, int c)
{
    int sum = a+b+c;
    cout<<"Sum of three numbers is = "<<sum<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Do you want to add two numbers or three numbers : "<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 2:{
            int a,b;
            cout<<"Enter two numbers : "<<endl;
            cin>>a>>b;
            add(a,b);
        }break;
        case 3:{
            int a,b;
            cout<<"Enter three numbers : "<<endl;
            cin>>a>>b>>c;
            add(a,b,c);
        }break;
        default:{
            cout<<"Invalid input."<<endl;
        }break;
    }
}
//Function Overloading- It is the process of loading multiple functions with same name but different parameter.
//Function Overriding- It is the process where the child class has the same method as declared int the parent class.
//Polymorphism- It enables objects of different classes to be treated as if they were the objects of the same class.
