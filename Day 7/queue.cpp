#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Nami");
    q.push("Robin");
    q.push("Sanji");
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
