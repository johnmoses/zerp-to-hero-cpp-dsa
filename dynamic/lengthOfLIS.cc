/* 
* Length of Longest Increasing Subsequence
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            int n = nums.size();
            vector<int> dp(n,1);
            dp[n-1] = 1;
            int max_arr = 1;
            for(int i=n-2; i>=0; i--){
                for(int j=i+1; j<n; j++){
                    if(nums[j] <= nums[i])  continue;
                    dp[i] = max(dp[j]+1, dp[i]);
                }
                max_arr = max(max_arr, dp[i]);
            }
            return max_arr;
        }
};

int main() {
    vector<int> nums = {10,9,2,5,3,7,101,18};
    Solution sn = Solution();
    cout << sn.lengthOfLIS(nums) << endl;
    return 0;
}