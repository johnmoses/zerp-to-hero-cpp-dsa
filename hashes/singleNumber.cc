/*
* Single Number
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int no_duplicate_list = nums[0];
        for (int i=1; i<nums.size(); i++) {
            no_duplicate_list^= nums[i];
        }
        return no_duplicate_list;
    }
};

int main() {
    vector<int> nums = {2,2,1};
    Solution sn = Solution();
    cout << sn.singleNumber(nums) << endl;
    return 0;
}