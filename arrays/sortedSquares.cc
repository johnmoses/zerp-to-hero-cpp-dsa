/*
* Sorted Squares
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        size_t n = nums.size();
        vector<int> ans(n);
        for (size_t i = 0; i < n; i++) {
            ans[i] = nums[i] * nums[i];
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {-4,-1,0,3,10};
    Solution sn = Solution();
    // printf("good", sn.sortedSquares(nums));
    // std::cout << sn.sortedSquares(nums) << std::endl;
    return 0;
}