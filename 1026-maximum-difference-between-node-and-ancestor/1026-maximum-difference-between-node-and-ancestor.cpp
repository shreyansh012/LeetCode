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
    void solve(TreeNode* &start, TreeNode* &node, int &maxval){
        if(node->left==NULL && node->right==NULL){
            maxval=max(abs(start->val-node->val),maxval);
            return;
        }
        maxval=max(abs(start->val-node->val),maxval);
        //move left and right
        if(node->left)
            solve(start,node->left,maxval);
        if(node->right)
            solve(start,node->right,maxval);
    }
    
    void callsolve(TreeNode* &start, TreeNode* &node, int &maxval){
        if(start->left==NULL && start->right==NULL){
            return;
        }
        solve(start,node,maxval);
        if(start->left)
            callsolve(start->left, start->left, maxval);
        if(start->right)    
            callsolve(start->right, start->right, maxval);
        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        TreeNode *start=root, *node=root;
        int maxval=INT_MIN;
        callsolve(start, node, maxval);
        return maxval;
    }
};