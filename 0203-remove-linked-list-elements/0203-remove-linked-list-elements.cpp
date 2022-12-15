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
    void removeelement(ListNode* &prev, ListNode* &curr){
        ListNode* a=curr;
        prev->next=curr->next;
        curr=curr->next;
        delete a;
    }
    
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return head;
        }
        while(head && head->val==val ){
            ListNode* a=head;
            head=head->next;
            delete a;
        }
        if(!head){
            return head;
        }
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr){
            if(curr->val==val){
                removeelement(prev,curr);
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
            
        }
        return head;
        
    }
};