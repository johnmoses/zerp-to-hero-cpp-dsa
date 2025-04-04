A wiggle sequence is a sequence where the differences between successive numbers strictly alternate between positive and negative. The first difference (if one exists) may be either positive or negative. A sequence with one element and a sequence with two non-equal elements are trivially wiggle sequences.

For example, [1, 7, 4, 9, 2, 5] is a wiggle sequence because the differences (6, -3, 5, -7, 3) alternate between positive and negative.
In contrast, [1, 4, 7, 2, 5] and [1, 7, 4, 5, 5] are not wiggle sequences. The first is not because its first two differences are positive, and the second is not because its last difference is zero.
A subsequence is obtained by deleting some elements (possibly zero) from the original sequence, leaving the remaining elements in their original order.

Given an integer array nums, return the length of the longest wiggle subsequence of nums.

Input: nums = [1,7,4,9,2,5]
Output: 6
Explanation: The entire sequence is a wiggle sequence with differences (6, -3, 5, -7, 3).
 

Constraints:

1 <= nums.length <= 1000
0 <= nums[i] <= 1000

Summary

We need to find the length of the longest wiggle subsequence. A wiggle subsequence consists of a subsequence with numbers which appears in alternating ascending / descending order.

Solution

Approach #1 Brute Force

Here, we can find the length of every possible wiggle subsequence and find the maximum length out of them. To implement this, we use a recursive function, 
calculate (nums,index, isUp calculate(nums,index,isUp) which takes the array 
nums
nums, the 
index
index from which we need to find the length of the longest wiggle subsequence, boolean variable 
isUp
isUp to tell whether we need to find an increasing wiggle or decreasing wiggle respectively. If the function 
calculate
calculate is called after an increasing wiggle, we need to find the next decreasing wiggle with the same function. If the function 
calculate
calculate is called after a decreasing wiggle, we need to find the next increasing wiggle with the same function.

