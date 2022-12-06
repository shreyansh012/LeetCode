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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* tail=head;
        int ctr=1;
        while(tail->next!=NULL){
            tail=tail->next;
            ctr++;
        }
        ListNode* head1=head;
        ListNode* temp=head->next;
        for(int i=2;i<=ctr && temp!=NULL;i+=2){
            if(i%2==0 && temp!=NULL){
                tail->next=temp;
                tail=temp;
                temp=temp->next;
                head1->next=temp;
                head1=head1->next;
                temp=temp->next;
                tail->next=NULL;
            }
            
        }
        
        return head;
    }
};