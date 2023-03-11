/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    int getlength(ListNode* head){
        ListNode* p=head;
        int ctr=0;
        while(p){
            ctr++;
            p=p->next;
        }
        return ctr;
    }
    int getval(ListNode* head, int pos){
        int i=1;
        ListNode* p=head;
        while(i!=pos && p){
            i++;
            p=p->next;
        }
        return p->val;
    }
    TreeNode* formtree(ListNode* head, int start, int end){
        if(start>end)   return NULL;
        
        int mid=start+((end-start)>>1);
        int valtoinsert=getval(head, mid);
        
        TreeNode* root=new TreeNode(valtoinsert);
        root->left=formtree(head, start, mid-1);
        root->right=formtree(head, mid+1, end);
        
        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int len=getlength(head);
        TreeNode* root=formtree(head, 1, len);
        return root;
    }
};