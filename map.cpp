#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1] = "Luffy";//1 is key and Luffy is value
    m[2] = "Zoro";
    m[3] = "Sanji";
    m.insert({5,"Nami"});
    for(auto i:m)
    {
        //expression cannot be used as function
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<endl;
    cout<<"find the element "<<m.count(-13)<<endl;
    m.erase(5);
    cout<<"After erase "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<" " <<endl;
    }
}
