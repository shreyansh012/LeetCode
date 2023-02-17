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
    vector<int> arr;
    void solve(TreeNode* root){
        arr.push_back(root->val);
        if(root->left)
            solve(root->left);
        if(root->right)
            solve(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        solve(root);
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            ans=min(ans, arr[i+1]-arr[i]);
        }
        return ans;
    }
};