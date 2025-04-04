/*
* Maximal Square
*/

#include <vector>

using namespace std;

class Solution {
    public:
        int maximalSquare(vector<vector<char>>& matrix){
            int m = matrix.size(), n = matrix[0].size(), maxi = 0;
            vector<vector<int>> dp(m, vector<int>(n));
            for(int i=m-1;i>=0;i--){
                for(int j=n-1;j>=0;j--){
                    if(i == m-1 || j == n-1 || matrix[i][j]=='0') dp[i][j] = matrix[i][j]-'0';
                    else dp[i][j] = 1 + min({dp[i][j+1], dp[i+1][j], dp[i+1][j+1]});
                    maxi = max(maxi, dp[i][j]);
                }
            }
            return maxi*maxi;
        }
};

int main() {
    vector<vector<char>> matrix = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    Solution sn = Solution();
    printf("%3d\n", sn.maximalSquare(matrix));
    return 0;
}