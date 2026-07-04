/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool func(TreeNode* lLeft, TreeNode* rRight) {

        if (!lLeft && !rRight)
            return true;
        if (!lLeft || !rRight)
            return false;
        
        if(lLeft->val !=rRight->val) return false;
        return func(lLeft->left,rRight->right) && func(lLeft->right,rRight->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root->left && !root->right)
            return true;
        if (!root->left || !root->right)
            return false;

        return func(root->left, root->right);
    }
};