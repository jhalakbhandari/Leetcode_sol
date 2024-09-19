/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
    return checkHeight(root) != -1;

    }
    int checkHeight(TreeNode* root){
    if (root == nullptr) {
        return 0; // base case: height of an empty tree is 0
    }

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1;  // Left subtree is unbalanced

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1;  // Right subtree is unbalanced

    if (std::abs(leftHeight - rightHeight) > 1) {
        return -1;  // Unbalanced tree
    }
    
    // Return the height of the current node
    return 1 + std::max(leftHeight, rightHeight);

    }
};