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
class Solution {
public:
    
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode *temp=head->next,*mover=head;
        
        while(temp){
            while(temp && mover->val==temp->val){
                ListNode* deletenode=temp;
                temp=temp->next;
                delete(deletenode);
            }
            mover->next=temp;
            if(temp)
            {mover=mover->next;
            temp=temp->next;}
        }
        return head;
    }
};