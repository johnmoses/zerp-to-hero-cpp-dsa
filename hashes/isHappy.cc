/* 
* Happy Number
*/

#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(n)
        {
            if(s.find(n)==s.end())
            {
                if(n==1)
                {
                    return 1;
                }
                s.insert(n);
                int k=n,num=0;
                while(k)
                {
                    num+=(k%10)*(k%10);
                    k=k/10;
                }
                n=num;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
};

int main() {
    int n = 19;
    Solution sn = Solution();
    cout << sn.isHappy(n) << endl;
    return 0;
}