A binary search tree (BST), a special form of a binary tree, satisfies the binary search property:

The value in each node must be greater than (or equal to) any values stored in its left subtree.
The value in each node must be less than (or equal to) any values stored in its right subtree.
 

We have exercises for you to validate a BST after this article. You can use the property we mentioned above to determine whether a binary tree is a BST or not. The recursive thinking we have introduced in the previous chapter might help you with this problem.

Like a normal binary tree, we can traverse a BST in preorder, inorder, postorder or level-order. However, it is noteworthy that inorder traversal in BST will be in ascending order. Therefore, the inorder traversal is the most frequent used traversal method of a BST.

We also have exercises for you to find the inorder successor in a BST after this article. Obviously, you can do the inorder traversal to find the inorder successor in a BST. But please try to apply the property of the BST we have learned to find out a better way to solve this problem.

## Searching a Binary Search Tree
BSTs support three main operations: search, insertion and deletion. In this section, we are going to talk about how to search for a specific value in a BST.

According to the property of BST, for each node:

return the node if the target value is equal to the value of the node;
continue searching in the left subtree if the target value is less than the value of the node;
continue searching in the right subtree if the target value is larger than the value of the node.

