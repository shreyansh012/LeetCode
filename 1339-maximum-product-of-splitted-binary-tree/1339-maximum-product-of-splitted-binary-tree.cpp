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
    long long ans=0,totsum=0;
    int findsumoftree(TreeNode* node){
        if(node==NULL)
            return 0;
        int sum=node->val+findsumoftree(node->left)+findsumoftree(node->right);
        ans=max(ans, (sum*(totsum-sum)));
        return sum;
    }
    
    
    int maxProduct(TreeNode* root) {
        totsum=findsumoftree(root);
        findsumoftree(root);
        long long mod=1e9+7;
        return ans%mod;
    }
};