Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

Constraints:

1 <= triangle.length <= 200
triangle[0].length == 1
triangle[i].length == triangle[i - 1].length + 1
-104 <= triangle[i][j] <= 104

Approach 1: Dynamic Programming (Bottom-up: In-place)

Intuition

A good way to get started on a problem like this is to make a very small example, and then figure out how to solve it. After that, make the example a bit bigger, and see if you can still solve it. Try and come up with a general way of solving the problem, regardless of the size.