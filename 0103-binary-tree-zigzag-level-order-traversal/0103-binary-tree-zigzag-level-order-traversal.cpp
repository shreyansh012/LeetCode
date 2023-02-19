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
    void solve(TreeNode* root, int level, vector<vector<int>> &ans){
        if(ans.size()<=level){
            vector<int> vec;
            vec.push_back(root->val);
            ans.push_back(vec);
        }
        else ans[level].push_back(root->val);
        if(root->left){
            solve(root->left, level+1, ans);
        }
        if(root->right){
            solve(root->right, level+1, ans);
        }
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<vector<int>> ans;
        int level=0;
        solve(root, level, ans);
        for(int i=0;i<ans.size();i++){
            if(i&1){
                reverse(ans[i].begin(), ans[i].end());
            }
        }
        return ans;
    }
};