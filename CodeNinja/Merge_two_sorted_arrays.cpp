#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> arr3;
	int i=0,j=0,k=0;
	while(i<m&&j<n){
		if(arr1[i]<arr2[j]){
			arr3.push_back(arr1[i++]);
		}
		else{
			arr3.push_back(arr2[j++]);
		}
	}
	while(i<m){
		arr3.push_back(arr1[i++]);
	}
	while(j<n){
		arr3.push_back(arr2[j++]);
	}
	return arr3;
}
