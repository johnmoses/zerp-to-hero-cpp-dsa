/*
* Unique Path with obstacles
*/

#include <vector>

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        int dp[m][n];
        int f=0;
        for(int i=0;i<m;i++){
            if(v[i][0]==1)f=1;
            if(f==0){
                dp[i][0]=1;
            }else{
                dp[i][0]=0;
            }
        }
        f=0;
        for(int i=0;i<n;i++){
            if(v[0][i]==1)f=1;
            if(f==0){
                dp[0][i]=1;
            }else{
                dp[0][i]=0;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(v[i][j]==1){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
                
            }
        }
        return dp[m-1][n-1];
    }
};