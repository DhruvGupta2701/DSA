#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int profit=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else if(prices[i]-min>profit){
            profit=prices[i]-min;
        }
    }
    return profit;
}
