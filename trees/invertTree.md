226 Given the root of a binary tree, invert the tree, and return its root.

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100

Approach #1 (Recursive) [Accepted]

This is a classic tree problem that is best-suited for a recursive approach.

Algorithm

The inverse of an empty tree is the empty tree. The inverse of a tree with root r, and subtrees right and left, is a tree with root r, whose right subtree is the inverse of left, and whose left subtree is the inverse of right.