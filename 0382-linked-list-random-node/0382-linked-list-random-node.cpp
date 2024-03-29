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
    ListNode *h;
    Solution(ListNode* head) {
        this->h=head;
    }
    
    int getRandom() {
        int a=0, i=1;
        ListNode* p=this->h;
        while(p){
            if(rand()%i==0) a=p->val;
            i++;
            p=p->next;
        }
        return a;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */