class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            int ele = -1;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            ele = nums2[k];
                        }
                        break;
                    }
                    break;
                }
            }
            ans.push_back(ele);
        }
        return ans;
    }
};
