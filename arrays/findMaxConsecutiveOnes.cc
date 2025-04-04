/* 
* Find maximum consecutive ones
*/

#include <iostream>
#include <vector>
// #include <numeric>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, thisMax = 0;
        

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                thisMax++;
                if (thisMax > max)
                    max = thisMax;
            }
            else
                thisMax = 0;
        }
        return max;
    }
};

int main() {
    // vector<int> nums = {1,1,0,1,1,1};
    int nums[] = {1,1,0,1,1,1};
    // Output: 3
    Solution sn = Solution();
    sn.findMaxConsecutiveOnes(nums);
    return 0;
}