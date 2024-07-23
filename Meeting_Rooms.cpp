#include<bits/stdc++.h>
using namespace std;
void meetingRooms(vector<vector<int>>& v)
{
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            if(v[i][j+1]>=v[i+1][j])
            {
                cout<<"false"<<endl;
                break;
            }
            else
            {
                cout<<"true"<<endl;
                break;
            }
        }
        break;
    }
}
int main()
{
    vector<vector<int>> v = {{12,24},{30,40},{20,23}};
    meetingRooms(v);
    return 0;
}
