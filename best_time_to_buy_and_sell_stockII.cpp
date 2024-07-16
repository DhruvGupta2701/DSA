#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int buy = prices[0];
    int profit = 0;
    for(int i=1; i<prices.size(); i++)
    {
        if(buy<prices[i]){
            profit += prices[i]-buy;
        }
        buy = prices[i];
    }
    cout<<profit<<endl;
    return 0;
}
