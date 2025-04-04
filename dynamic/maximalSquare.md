Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 300
matrix[i][j] is '0' or '1'.

Summary

We need to find the largest square comprising of all ones in the given m×n matrix. In other words we need to find the largest set of connected ones in the given matrix that forms a square.

Solution

Approach #1 (Dynamic Programming) [Accepted]

Algorithm

We will explain this approach with the help of an example.

0 1 1 1 0
1 1 1 1 1
0 1 1 1 1
0 1 1 1 1
0 0 1 1 1
We initialize another matrix (dp) with the same dimensions as the original one initialized with all 0’s.

dp(i,j) represents the side length of the maximum square whose bottom right corner is the cell with index (i,j) in the original matrix.

Starting from index (0,0), for every 1 found in the original matrix, we update the value of the current element as dp(i,j)=min(dp(i−1,j),dp(i−1,j−1),dp(i,j−1))+1.

We also remember the size of the largest square found so far. In this way, we traverse the original matrix once and find out the required maximum size. This gives the side length of the square (say maxsqlen). The required result is the area maxsqlen 2
To understand how this solution works, see the figure below.

Max Square

An entry 2 at (1,3) implies that we have a square of side 2 up to that index in the original matrix. Similarly, a 2 at (1,2) and (2,2) implies that a square of side 2 exists up to that index in the original matrix. Now to make a square of side 3, only a single entry of 1 is pending at (2,3). So, we enter a 3 corresponding to that position in the dp array.

Now consider the case for the index (3,4). Here, the entries at index (3,3) and (2,3) imply that a square of side 3 is possible up to their indices. But, the entry 1 at index (2,4) indicates that a square of side 1 only can be formed up to its index. Therefore, while making an entry at the index (3,4), this element obstructs the formation of a square having a side larger than 2. Thus, the maximum sized square that can be formed up to this index is of size 

