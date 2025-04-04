Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Constraints:

The number of nodes in the tree is in the range [2, 105].
-109 <= Node.val <= 109
All Node.val are unique.
p != q
p and q will exist in the BST.

Solution

We can solve this using the approaches to find LCA in a binary tree.

But, binary search tree's property could be utilized, to come up with a better algorithm.

Lets review properties of a BST:

1. Left subtree of a node N contains nodes whose values are lesser than or equal to node N's value.
2. Right subtree of a node N contains nodes whose values are greater than node N's value.
3. Both left and right subtrees are also BSTs.

Approach 1: Recursive Approach

Intuition

Lowest common ancestor for two nodes p and q would be the last ancestor node common to both of them. Here last is defined in terms of the depth of the node. The below diagram would help in understanding what lowest means.

