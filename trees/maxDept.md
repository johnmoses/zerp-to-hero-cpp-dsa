Tree definition

First of all, here is the definition of the TreeNode which we would use.

Approach 1: Recursion

Intuition By definition, the maximum depth of a binary tree is the maximum number of steps to reach a leaf node from the root node.

From the definition, an intuitive idea would be to traverse the tree and record the maximum depth during the traversal.

One could traverse the tree either by Depth-First Search (DFS) strategy or Breadth-First Search (BFS) strategy. For this problem, either way would do. Here we demonstrate a solution that is implemented with the DFS strategy and recursion.