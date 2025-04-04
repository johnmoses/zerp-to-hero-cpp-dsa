/*
* Minimum Distance
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int minDistance(string word1, string word2) {
            int M = word1.size(), N = word2.size();
            vector<int> dp1(N + 1), dp2(N + 1);
            for (int j=0; j<=N; j++) dp1[j] = j;
            for (int i=1; i<=M; i++) {
                dp2[0] = i;
                for (int j=1; j<=N; j++) 
                    dp2[j] = word1[i-1] == word2[j-1] ? dp1[j-1] : min(dp1[j], min(dp2[j-1], dp1[j-1])) + 1;
                dp1.swap(dp2);
            }
            return dp1[N];
        }
};

int main() {
    string word1 = "horse";
    string word2 = "ros";
    Solution sn = Solution();
    cout << sn.minDistance(word1, word2) << endl;
    return 0;
}