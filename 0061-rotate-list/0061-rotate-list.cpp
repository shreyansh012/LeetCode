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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        if(k==0)
            return head;
        ListNode* temp=head;
        int len=0;
        while(temp){
            temp=temp->next;
            len++;
        }
        int rotations=k%len;
        if(rotations==0)
            return head;
        ListNode *prev=new ListNode(0,head);
        temp=head;
        int num=len-rotations;
        while(num && temp){
            prev=temp;
            temp=temp->next;
            num--;
        }
        ListNode *head1=temp;
        prev->next=NULL;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        
      return head1;  
    }
};