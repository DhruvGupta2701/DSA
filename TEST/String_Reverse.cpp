#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    string ans;
	for(int i=str.size()-1;i>=0;i--)
        ans+=str[i];
	return ans;
}

