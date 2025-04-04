Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Approach 1: Dynamic Programming (C++)

Intuition

In brute force, we iterate over the left and right parts again and again just to find the highest bar size upto that index. But, this could be stored. Voila, dynamic programming.

Algorithm

Find maximum height of bar from the left end upto an index i in the array 
left_max
left_max.
Find maximum height of bar from the right end upto an index i in the array 
right_max
right_max.
Iterate over the 
height
height array and update ans: