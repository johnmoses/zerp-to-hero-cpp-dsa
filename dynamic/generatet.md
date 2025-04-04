118 Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Approach 1: Dynamic Programming

Intuition

If we have the a row of Pascal's triangle, we can easily compute the next row by each pair of adjacent values.

Algorithm

Although the algorithm is very simple, the iterative approach to constructing Pascal's triangle can be classified as dynamic programming because we construct each row based on the previous row.

First, we generate the overall triangle list, which will store each row as a sublist. Then, we check for the special case of 
0
0, as we would otherwise return [1]. Since numRows is always greater than 0, we can initialize triangle with [1] as its first row, and proceed to fill the rows 

