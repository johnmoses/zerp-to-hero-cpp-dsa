Given a string s, return the longest palindromic substring in s.

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.

Summary

This article is for intermediate readers. It introduces the following ideas: Palindrome, Dynamic Programming and String Manipulation. Make sure you understand what a palindrome means. A palindrome is a string which reads the same in both directions. For example, 
S
S = "aba" is a palindrome, 
S
S = "abc" is not.

Solution

Approach 1: Longest Common Substring

Common mistake

Some people will be tempted to come up with a quick solution, which is unfortunately flawed (however can be corrected easily):

Reverse 
S
S and become 
S
′
S 
′
 . Find the longest common substring between 
S
S and 
S
′
S 
′
 , which must also be the longest palindromic substring.
This seemed to work, let’s see some examples below.

For example, 
S
S = "caba", 
S
′
S 
′
  = "abac".

The longest common substring between 
S
S and 
S
′
S 
′
  is "aba", which is the answer.

Let’s try another example: 
S
S = "abacdfgdcaba", 
S
′
S 
′
  = "abacdgfdcaba".

The longest common substring between 
S
S and 
S
′
S 
′
  is "abacd". Clearly, this is not a valid palindrome.

Algorithm

We could see that the longest common substring method fails when there exists a reversed copy of a non-palindromic substring in some other part of S. To rectify this, each time we find a longest common substring candidate, we check if the substring’s indices are the same as the reversed substring’s original indices. If it is, then we attempt to update the longest palindrome found so far; if not, we skip this and find the next candidate.

This gives us an O(n2) Dynamic Programming solution which uses O(n2) space (could be improved to use O(n) space). Please read more about Longest Common Substring 
