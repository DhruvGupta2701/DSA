#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int num,fact=1;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"no factorial."<<endl;
    }
    fact = factorial(num);
    cout<<"The factorial of "<<num<<" is "<<fact<<endl;
}
