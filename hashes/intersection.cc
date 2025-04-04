/* 
* Intersection of integer arrays
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> output;
        for (auto x:nums1)mp[x]++;
        for (auto x:nums2) {
            if (mp.find(x)!=mp.end() && mp[x]!=-1) {
                output.push_back(x);
                mp[x]=-1;
            }
        }
        return output;
    }
};

int main() {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution sn = Solution();
    cout << sn.intersection(nums1, nums2);
    return 0;
}