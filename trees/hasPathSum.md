Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-1000 <= Node.val <= 1000
-1000 <= targetSum <= 1000

Approach 1: Recursion

The most intuitive way is to use a recursion here. One is going through the tree by considering at each step the node itself and its children. If node is not a leaf, one calls recursively hasPathSum method for its children with a sum decreased by the current node value. If node is a leaf, one checks if the the current sum is zero, i.e if the initial sum was discovered.