/**
 * @file inOrderSuccessor.cc
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
 public:
  TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p) {
    TreeNode *succ = nullptr;
    while (root) {
      if (p->val >= root->val) {
        root = root->right;
      } else {
        succ = root;
        root = root->left;
      }
    }
    return succ;
  }
};

int main() {
    return 0;
}