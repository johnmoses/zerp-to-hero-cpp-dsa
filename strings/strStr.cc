/*
* Implement strings
*/

#include <iostream>

using namespace std;

class Solution {
    public:
        int strStr(string haystack, string needle) {
            if(needle.length() ==0)
                return 0;

            size_t found = haystack.find(needle);
            if (found != string::npos)
                return found;
            return -1;
        }
};

int main() {
    string haystack = "hello";
    string needle = "ll";
    Solution sn;
    cout << sn.strStr(haystack, needle) << endl;
    return 0;
}