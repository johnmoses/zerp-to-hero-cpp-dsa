/*
* Is Subsequence
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int j = 0;
            for (auto i : t)
                if (s[j] == i)
                    j++;
            return j == s.size();
        }
};

int main() {
    string s = "abc";
    string t = "ahbgdc";
    Solution sn = Solution();
    cout << sn.isSubsequence(s, t) << endl;
    return 0;
}