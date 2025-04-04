/*
* Unique Paths
*/

#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int uniquePaths(int m, int n) {
            int N = n + m - 2; // (m-1) + (n-1)
            int r = min(m,n) - 1;
            double res = 1;
            for (int i =1; i<=r; ++i, N--){
                res = res * (N) / i;
            }
            return int(res);
        }
};

int main(){
    Solution sn = Solution();
    int m = 3;
    int n = 7;
    printf("%3d\n", sn.uniquePaths(m, n));
    return 0;
}