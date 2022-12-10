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
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        if(head->next->next==NULL){
            if(head->next->val==head->val)
                return NULL;
        }
        ListNode* start=new ListNode(0,head);
        ListNode* prev=start;
        while(head){
            if(head->next && head->val==head->next->val){
                while(head->next && head->val==head->next->val)
                    head=head->next;
                prev->next=head->next;
            }
            else{
                prev=prev->next;
            } 
            head=head->next;
        }
        

        return start->next;
    }
};