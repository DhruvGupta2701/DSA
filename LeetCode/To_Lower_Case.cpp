#include<bits/stdc++.h>
using namespace std;
string toLowerCase(string s) {
    string ans = "";
    for(char c: s){
        if(c>=65 && c<=90){
            char a = c+32;
            ans+=a;
        }
        else ans+=c;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    string res = toLowerCase(s);
    cout<<res<<endl;
}
