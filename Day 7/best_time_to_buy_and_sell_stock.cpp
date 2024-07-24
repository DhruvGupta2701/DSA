#include<iostream>
#include<array>
using namespace std;
int stock(int prices[])
{
    int buy = prices[0];
    int profit = 0;
    for(int i=1; i<6;i++)
    {
        if(prices[i]<buy)
        {
            buy = prices[i];
        }
        else if(prices[i]-buy>profit)
        {
            profit = prices[i]-buy;
        }
    }
    return profit;
}
int main()
{
    int prices[] = {7,1,5,3,6,4};
    int totalprofit = stock(prices);
    cout<<totalprofit<<endl;
}
