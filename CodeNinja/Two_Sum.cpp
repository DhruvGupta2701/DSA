#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> a;
	int s=0;
	int e=n-1;
	sort(arr.begin(),arr.end());
	while(s<e){
		if(arr[s]+arr[e]==target){
			a.push_back(make_pair(arr[s],arr[e]));
			s++;
			e--;
		}
		else if(arr[s]+arr[e]>target){
			e--;
		}
		else if(arr[s]+arr[e]<target){
			s++;
		}
	}
	if(a.empty()){
		a.push_back(make_pair(-1,-1));
	}
	return a;
}
