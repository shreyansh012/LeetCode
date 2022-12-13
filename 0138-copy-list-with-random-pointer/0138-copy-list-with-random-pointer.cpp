/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    void insertattail(Node* &nodehead, Node* &nodetail, int data){
        if(!nodehead){
            Node* head=new Node(data);
            nodehead=head;
            nodetail=head;
            return;
        }
        Node* node=new Node(data);
        nodetail->next=node;
        nodetail=node;
    }
public:
    Node* copyRandomList(Node* head) {
        Node* list=NULL;
        Node* tail=NULL;
        Node* temp=head;
        while(temp){
            insertattail(list, tail, temp->val);
            temp=temp->next;
        }
        unordered_map<Node*, Node*> umap;
        temp=head;
        Node* temp2=list;
        while(temp && temp){
            umap[temp]=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        temp2=list;
        temp=head;
        while(temp2){
            Node* ans=umap[temp->random];
            temp2->random=ans;
            temp2=temp2->next;
            temp=temp->next;
        }
        return list;
    }
};