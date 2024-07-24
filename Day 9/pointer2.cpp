#include<iostream>
#include<list>
using namespace std;
int main()
{
    int i=10;
    int *j=&i;//passing address to pointer
    cout<<*j<<endl;
    cout<<*(&i)<<endl;

}
