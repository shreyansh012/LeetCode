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
    ListNode* reverselist(ListNode* node){
        ListNode* prev=NULL;
        ListNode* temp=NULL;
        while(node){
            temp=node->next;
            node->next=prev;
            prev=node;
            node=temp;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        if(head->next->next==NULL){
            if(head->val==head->next->val)
                return true;
            else return false;
        }
        ListNode* fast=head,*slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* end=reverselist(slow->next);
        slow->next=end;
        ListNode* h1=head, *h2=slow->next;
        while(h2){
            if(h1->val!=h2->val){
                return 0;
            }
            h1=h1->next;
            h2=h2->next;
        }
        return 1;
    }
};