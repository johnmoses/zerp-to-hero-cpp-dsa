A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Input: m = 3, n = 7
Output: 28

Since robot can move either down or right, there is only one path to reach the cells in the first row: right->right->...->right.

Approach 1: Dynamic Programming

One could rewrite recursive approach into dynamic programming one.

Algorithm

Initiate 2D array d[m][n] = number of paths. To start, put number of paths equal to 1 for the first row and the first column. For the simplicity, one could initiate the whole 2D array by ones.

Iterate over all "inner" cells: d[col][row] = d[col - 1][row] + d[col][row - 1].

Return d[m - 1][n - 1]