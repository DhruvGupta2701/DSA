#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {2,7,11,15};
    int sum = 0;
    int target = 9;
        int s1,s2;
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                if(v[i]+v[j]==target){
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
            }
        }
}
