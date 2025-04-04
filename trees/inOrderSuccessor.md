Given the root of a binary search tree and a node p in it, return the in-order successor of that node in the BST. If the given node has no in-order successor in the tree, return null.

The successor of a node p is the node with the smallest key greater than p.val.

Example 1:


Input: root = [2,1,3], p = 1
Output: 2
Explanation: 1's in-order successor node is 2. Note that both p and the return value is of TreeNode type.
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-105 <= Node.val <= 105
All Nodes will have unique values.

Approach 1: Using BST properties

Intuition

In the previous approach, we did not use any of the binary-search tree properties. However, the optimal solution for this problem comes from utilizing those properties and that's what we will explore in this solution. Specifically, we'll make use of the standard BST property where the left descendants have smaller values than the current node and right descendants have larger values than the current node. We don't need to handle any specific cases here and we can start with the root node directly and reach our inorder successor. Let's see the choices we have when comparing the value of the given node p to the current node in the tree.
