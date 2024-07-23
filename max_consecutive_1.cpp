#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0, count = 0;
    for (int num : nums) {
        if (num == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> nums = {1,0,1,1,0,1,1,1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive 1s: " << maxConsecutiveOnes <<endl;
    return 0;
}
