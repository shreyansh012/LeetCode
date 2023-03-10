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
    vector<int> vec;
public:
    Solution(ListNode* head) {
        ListNode *h=new ListNode(head->val, head->next);
        while(h){
            vec.push_back(h->val);
            h=h->next;
        }
    }
    
    int getRandom() {
        int a=rand()%vec.size();
        return vec[a];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */