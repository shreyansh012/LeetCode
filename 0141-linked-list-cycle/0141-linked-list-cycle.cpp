/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        unordered_map<ListNode*, bool> umap;
        while(head){
            if(umap[head])
                return true;
            umap[head]=1;
            head=head->next;
        }
        return false;
    }
};