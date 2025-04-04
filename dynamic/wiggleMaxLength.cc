/* 
* Wiggle Max Length
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int wiggleMaxLength(vector<int>& nums) {
            int cnt = 0, flag = 0;
            for (int i=1, prev=nums[0]; i<nums.size(); i++) {
                if (nums[i] == prev) continue;
                if ((nums[i] - prev) * flag <= 0) {
                    cnt++;
                    flag = nums[i] > prev ? 1 : -1;
                }
                prev = nums[i];
            }
            return cnt + 1;
        }
};

int main() {
    vector<int> nums = {1,7,4,9,2,5};
    Solution sn = Solution();
    cout << sn.wiggleMaxLength(nums) << endl;
    return 0;
}