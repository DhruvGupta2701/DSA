#include <bits/stdc++.h>
void moveZerosToLeft(int *arr, int n)
{
    int j=n-1;
    int i=n-2;
    while(i>=0){
        if(arr[j]==0&arr[i]!=0){
            swap(arr[j],arr[i]);
            i--;
            j--;
        }
        if(arr[j]!=0){
            j--;
            if(j==i){
                i--;
            }
        }
        if(arr[i]==0){
            i--;
        }
    }

}
