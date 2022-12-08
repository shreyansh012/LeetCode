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
    void traversetree(TreeNode* &root, vector<int> &ans){
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->val);
            return;
        }
        if(root->left)
        traversetree(root->left,ans);
        if(root->right)
        traversetree(root->right,ans);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        traversetree(root1, ans1);
        traversetree(root2, ans2);
        return ans1==ans2;
    }
};