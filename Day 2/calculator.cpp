#include<iostream>
using namespace std;
void add(int a, int b)
{
    int sum = a+b;
    cout<<"Sum of a and b is : "<<sum<<endl;
}
void sub(int a, int b)
{
    int subtract= a-b;
    cout<<"Subtraction of a and b is : "<<subtract<<endl;
}
void mul(int a, int b)
{
    int multiply = a*b;
    cout<<"Multiplication of a and b is : "<<multiply<<endl;
}
void divi(int a, int b)
{
    int divide = a/b;
    cout<<"Division of a and b is : "<<divide<<endl;
}
void rem(int a, int b)
{
    int remender = a%b;
    cout<<"Remender of a and b is : "<<remender<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter values of a and b : "<<endl;
    cin>>a>>b;

    add(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
    rem(a,b);
    return 0;
}
