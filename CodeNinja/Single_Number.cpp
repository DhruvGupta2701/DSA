#include <bits/stdc++.h>
int occursOnce(vector<int> &arr, int n){
	int num=0;
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	for(auto itr=mpp.begin();itr!=mpp.end();itr++){
		if(itr->second==1){
			num=itr->first;
		}
	}
	return num;

}
