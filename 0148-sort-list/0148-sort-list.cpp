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
    
    ListNode* findmid(ListNode* head){
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* mergelist(ListNode* left, ListNode* right){
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(left && right){
            if(left->val<right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        ans=ans->next;
        return ans;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* mid=findmid(head);
        
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        //recursive calls
        left=sortList(left);
        right=sortList(right);
        //merge two sorted LL
        ListNode* ans=mergelist(left,right);
        return ans;
    }
};