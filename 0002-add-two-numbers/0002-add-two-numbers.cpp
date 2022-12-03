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
    void insertattail(ListNode* &tail, int val){
        ListNode* temp=new ListNode(val);
        tail->next=temp;
        tail=temp;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        int sum=l1->val + l2->val;
        int carry=sum/10;
        int dig=sum%10;
        
        ListNode* temp=new ListNode(dig);
        l1=l1->next;
        l2=l2->next;
        ListNode* tail=temp;
        while(l1!=NULL && l2!=NULL){
            sum=l1->val + l2->val+carry;
            dig=sum%10;
            carry=sum/10;
            insertattail(tail,dig);
            l1=l1->next;
            l2=l2->next;  
        }
        while(l1!=NULL){
            sum=l1->val+carry;
            dig=sum%10;
            carry=sum/10;
            insertattail(tail,dig);
            l1=l1->next;
        }
        while(l2!=NULL){
            sum=l2->val+carry;
            dig=sum%10;
            carry=sum/10;
            insertattail(tail,dig);
            l2=l2->next;
        }
        if(carry){
            insertattail(tail,carry);
        }
        return temp;   
    }
};