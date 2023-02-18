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
    void solve(TreeNode* root){
        if(root->left){
            solve(root->left);
        }
        if(root->right){
            solve(root->right);
        }
            swap(root->left, root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root || (!root->left && !root->right))
            return root;
        solve(root);
        return root;
    }
};