Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one 

Algorithm

Initialize the minimum difference diff with a large value.
Sort the input array nums.
Iterate through the array:
For the current position i, set lo to i + 1, and hi to the last index.
While the lo pointer is smaller than hi:
Set sum to nums[i] + nums[lo] + nums[hi].
If the absolute difference between sum and target is smaller than the absolute value of diff:
Set diff to target - sum.
If sum is less than target, increment lo.
Else, decrement hi.
If diff is zero, break from the loop.
Return the value of the closest triplet, which is target - diff.