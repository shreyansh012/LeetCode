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
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        bool flag=0;
        ListNode *fast=head,*slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                flag=1;
                break;
            }
        }
        if(!flag)
            return NULL;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};