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
}
