Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.

Solution

Note: In this article, only the fourth approach satisfies both the time and space complexity requirements provided in the problem description. However, the first three approaches are included to show a diverse set of ways to approach this problem.
Approach 1: List operation

Algorithm

Iterate over all the elements in 
nums
nums
If some number in 
nums
nums is new to array, append it
If some number is already in the array, remove it