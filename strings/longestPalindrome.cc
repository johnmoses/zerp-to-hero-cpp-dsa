/*
* Longest Palindrome Substring
*/

#include <iostream>

using namespace std;

class Solution {
    public:
        string longestPalindrome(string s) {
            int n=s.length();
            bool dp[n+1][n+1];
            for(int i=0;i<=n;i++){
                dp[i][i]=true;
            }

            int ans=1;
            pair<int,int> p=make_pair(0,0);
            for(int l=2;l<=n;l++){
                for(int i=0;i<=n-l;i++){
                    int j=i+l-1;

                    if(l==2) dp[i][j]=(s[i]==s[j]);
                    else dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]);

                    if(dp[i][j]){
                        if(j-i+1>ans){
                            ans=j-i+1;
                            p=make_pair(i,j);
                        }
                    }
                    
                }
            }
            return s.substr(p.first,p.second-p.first+1);
        }
};

int main() {
    string s = "babad";
    Solution sn;
    cout << sn.longestPalindrome(s) << endl;
    return 0;
}