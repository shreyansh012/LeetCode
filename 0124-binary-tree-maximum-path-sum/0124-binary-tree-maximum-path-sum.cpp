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
    
    int maxsum=INT_MIN;
    int sum=0;
    int findsum(TreeNode *node){
        if(!node)
            return 0;
        int leftsum=max(0,findsum(node->left));
        int rightsum=max(0,findsum(node->right));
        sum=node->val+leftsum+rightsum;
        maxsum=max(sum,maxsum);
        return node->val+max(leftsum,rightsum);
    }
    
    int maxPathSum(TreeNode* root) {
        findsum(root);
        return maxsum;
    }
};