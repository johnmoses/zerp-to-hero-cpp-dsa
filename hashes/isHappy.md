Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Constraints:

1 <= n <= 231 - 1

Solution

Approach 1: Detect Cycles with a HashSet

Intuition

A good way to get started with a question like this is to make a couple of examples. Let's start with the number 
7
7. The next number will be 
49
49 (as 
7
2
=
49
7 
2
 =49), and then the next after that will be 
97
97 (as 
4
2
+
9
2
=
97
4 
2
 +9 
2
 =97). We can continually repeat the process of squaring and then adding the digits until we get to 
1
1. Because we got to 
1
1, we know that 
7
7 is a happy number, and the function should return true.


