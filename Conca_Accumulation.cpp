#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words = {"Hello", "World", "From", "C++"};

    string result = accumulate(words.begin(), words.end(), string(""),
                               [](const string& total, const string word)
    {
        return total + (total.empty() ?"" : " ")+word;

    });
    cout<<"Concatenated string: "<<result<<endl;
}
