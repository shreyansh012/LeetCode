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
    void solve(TreeNode* p, TreeNode* q, bool &flag){
        if(p->val!=q->val){
            flag=0;
            return;
        }
        if(p->left && q->left)
            solve(p->left, q->left, flag);
        else if((p->left && q->left==NULL) || (p->left==NULL && q->left)){
            flag=0;
            return;
        }
        if(p->right && q->right)
            solve(p->right, q->right, flag);
        else if((p->right && q->right==NULL) || (p->right==NULL && q->right)){
            flag=0;
            return;
        }
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        if(!p || !q)
            return false;
        bool flag=1;
        solve(p,q,flag);
        return flag;
    }
};