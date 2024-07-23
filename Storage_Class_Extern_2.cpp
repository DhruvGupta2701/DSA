#include<iostream>
using namespace std;
extern int globalVar;
void example(int localVar)
{
    localVar++;
    cout<<localVar;
}
int main()
{
    example(globalVar);
}
