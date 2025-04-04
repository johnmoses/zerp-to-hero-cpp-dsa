Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

Approach 1: Dynamic Programming

Intuition

The problem can be solved in a dynamic programming way.

Given a sorted sequence 1 ... n, to construct a Binary Search Tree (BST) out of the sequence, we could enumerate each number i in the sequence, and use the number as the root, then, the subsequence 1 ... (i-1) on its left side would lay on the left branch of the root, and similarly the right subsequence (i+1) ... n lay on the right branch of the root. We then can construct the subtree from the subsequence recursively. Through the above approach, we could be assured that the BST that we construct are all unique, since they start from unique roots.

As we can see, the problem can be reduced into problems with smaller sizes, instead of recursively (also repeatedly) solve the subproblems, we can store the solution of subproblems and reuse them later, i.e. the dynamic programming way.

Algorithm

The problem is to calculate the number of unique BST. To do so, we can define two functions:

G
(
n
)
G(n): the number of unique BST for a sequence of length n.

F
(
i
,
n
)
F(i,n): the number of unique BST, where the number i is served as the root of BST (
1
≤
i
≤
n
1≤i≤n).

