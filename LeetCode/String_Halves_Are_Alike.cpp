#include<bits/stdc++.h>
using namespace std;
bool halvesAreAlike(string s) {
    int n = s.size();
    string l = s.substr(0,n/2);
    string r = s.substr(n/2);
    int count1 = 0;
    int count2 = 0;
    for(char c:l){
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
            count1++;
        }
    }
    for(char c:r){
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
            count2++;
        }
    }
    return count1==count2;
}
int main()
{
    string s;
    getline(cin, s);
    bool res = halvesAreAlike(s);
    if(res == 1){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}
