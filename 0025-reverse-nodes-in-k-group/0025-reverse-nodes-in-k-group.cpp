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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        int ctr=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            ctr++;
        }
        if(ctr<k){
            return head;
        }
        
        ListNode *prev=NULL, *curr=head, *forward=NULL;
        for(int i=0;i<k && curr!=NULL ;i++){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        if(forward){
            head->next=reverseKGroup(forward,k);
        }
        
        return prev;
    }
};