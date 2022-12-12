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
    void solve(ListNode* &temp, ListNode* slow, bool &flag){
        if(!slow){
            return;
        }
        solve(temp,slow->next,flag);
        if(temp->val!=slow->val){
            flag=0;
            return;
        }
        else{
            temp=temp->next;
        }
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
        ListNode* temp=head;
        bool flag=1;
        solve(temp,slow->next,flag);
        
        return flag;
    }
};