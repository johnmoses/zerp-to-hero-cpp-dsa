/** 
 * Valid BST
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
        bool validate(TreeNode* root, TreeNode* low, TreeNode* high) {
            // Empty trees are valid trees
            if (root == nullptr) {
                return true;
            }

            // Current node value must be between low and high
            if (
                (low != nullptr and root->val <= low->val) or
                (high != nullptr and root->val >= high->val)
            ) {
                return false;
            }

            // Left and right subtrees must be valid
            return validate(root->right, root, high) and 
                    validate(root->left, low, root);
        }

        bool isValidBST(TreeNode* root) {
            return validate(root, nullptr, nullptr);
        }

};

int main() {
    TreeNode * root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    Solution sn = Solution();
    cout << sn.isValidBST(root) << endl;
    return 0;
}