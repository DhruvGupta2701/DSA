#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    auto modifyX = [x]() mutable
    {
        x = 20; //This modifies the local copy of x, not the original x
        cout<<"Inside Lambda, x = "<<x<<endl;
    };
    modifyX();
    cout<<"outside lambda, x = "<<x<<endl;
    return 0;
}
