#include<iostream>
#include "myheader2.h"
using namespace std;
void Demo::input()
{
    cout<<"Enter \n";
    cin>>a>>b;
}
void Demo::show()
{
    cout<<"\n"<<a<<" "<<b;
}
int main(){
    Demo obj;
    obj.input();
    obj.show();
    return 0;
}
