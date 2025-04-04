/* 
* Find Numbers
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int i = 0; i < nums.size(); i++) {
            int digits = 1, thisNum = nums[i];
            while(thisNum / 10 != 0) {
                digits++;
                thisNum /= 10;
            }
            if (digits % 2 == 0)
                even++;
        }
        return even;
    }
};

int main() {
    vector<int> nums = {12,345,2,6,7896};
    Solution sn = Solution();
    printf("%3d\n", sn.findNumbers(nums));
    return 0;
}