#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> hash;
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(auto val:hash){
		if(val.second>(float)(n/2)){
			return val.first;
		}
	}
	return -1;
}
