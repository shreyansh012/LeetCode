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
        Node *listhead=NULL, *listtail=NULL, *temp=head;
        while(temp){
            insertattail(listhead, listtail, temp->val);
            temp=temp->next;
        }

        temp=head;
        Node* temp2=listhead;
        while(temp && temp2){
            Node* next=temp->next;
            temp->next=temp2;
            temp=next;
            next=temp2->next;
            temp2->next=temp;
            temp2=next;
        }
        temp=head;
        while(temp){
            if(temp->next){
                if(temp->random)
                    temp->next->random=temp->random->next;
            }
            else{
                temp->next=NULL;
            }
            temp=temp->next->next;
        }
        temp=head;
        temp2=listhead;
        while(temp && temp2){
            temp->next=temp2->next;
            temp=temp->next;
            if(temp)
                temp2->next=temp->next;
            temp2=temp2->next;
        }
        return listhead;
    }
};