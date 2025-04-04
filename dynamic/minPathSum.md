Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 200
0 <= grid[i][j] <= 100

Summary

We have to find the minimum sum of numbers over a path from the top left to the bottom right of the given matrix .

Approach 1: Dynamic Programming 1D

Algorithm

In the previous case, instead of using a 2D matrix for dp, we can do the same work using a dp array of the row size, since for making the current entry all we need is the dp entry for the bottom and the right element. Thus, we start by initializing only the last element of the array as the last element of the given matrix. The last entry is the bottom rightmost element of the given matrix. Then, we start moving towards the left and update the entry p(j) as:
min dp(j)=grid(i,j)+min(dp(j),dp(j+1))

We repeat the same process for every row as we move upwards. At the end dp(0) gives the required minimum sum.

