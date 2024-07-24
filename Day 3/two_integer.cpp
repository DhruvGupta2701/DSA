#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int disc = a*a - 4*b;
    if(disc<0)
    {
        cout<<"No solution"<<endl;
        return 1;
    }
    int sqrt_disc = sqrt(disc);
    int d = (a+sqrt_disc)/2;
    int e = (a-sqrt_disc)/2;
    if(d<e)
    {
        cout<<d<<" "<<e<<endl;
    }else{
        cout<<e<<" "<<d<<endl;
    }
    return 0;
}
