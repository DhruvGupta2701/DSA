#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Ajay");
    s.push("Sanjay");
    s.push("Zoro");
    s.push("Luffy");
    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"Element after pop "<<s.top()<<endl;


}
