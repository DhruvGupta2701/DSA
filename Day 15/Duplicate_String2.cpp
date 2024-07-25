#include<bits/stdc++.h>
using namespace std;
printDuplicates(vector<string> words)
{
    vector<string> duplicate;
    for(int i=0; i<words.size(); i++)
    {
        for(int j=i+1; j<words.size(); j++)
        {
            if(words[i]==words[j])
            {
                duplicate.push_back(words[i]);
            }
        }
    }
    if(duplicate.size()==0)
        cout<<"No duplicate words" <<endl;
    else
        for(int i=0; i<duplicate.size(); i++)
            cout<<duplicate[i]<<endl;
}
int main()
{
    vector<string> words{"Welcome","to","MIET","for","Intern","To","Intern"};
    printDuplicates(words);
    return 0;
}
