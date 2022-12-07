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
    void solve(TreeNode* &root,int low, int high, long long &sum){
        if(root==NULL)
            return ;
        
        if((root->val)>=low && (root->val)<=high)
            sum+=root->val;
        if(root->val>low)
        solve(root->left,low,high,sum);
        if(root->val<high)
        solve(root->right,low,high,sum);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        long long sum=0;
        solve(root,low,high,sum);
        return sum;
    }
};