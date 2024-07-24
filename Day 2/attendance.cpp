#include<iostream>
using namespace std;
int main()
{
    int classes,attended;
    cin>>classes>>attended;
    float percentage = (float)(attended*100)/classes;
    cout<<"Percentage of classes attended : "<<percentage<<"%"<<endl;
    if(percentage<75)
    {
        cout<<"Not allowed."<<endl;
    }else
    {
        cout<<"You are allowed."<<endl;
    }
    return 0;
}
