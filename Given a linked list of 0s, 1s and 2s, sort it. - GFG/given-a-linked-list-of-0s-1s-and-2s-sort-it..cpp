//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    void insert(Node* &tail, Node* curr){
        tail->next=curr;
        tail=curr;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* zerohead=new Node(-1);
        Node* zerotail=zerohead;
        Node* onehead=new Node(-1);
        Node* onetail=onehead;
        Node* twohead=new Node(-1);
        Node* twotail=twohead;
        
        Node* temp=head;
        while(temp){
            if(temp->data==0){
                insert(zerotail,temp);
            }
            else if(temp->data==1){
                insert(onetail,temp);
            }
            else{
                insert(twotail,temp);
            }
            temp=temp->next;
            
        }
        if(onehead->next){
            zerotail->next=onehead->next;
        }
        else{
            zerotail->next=twohead->next;
        }
        onetail->next=twohead->next;
        twotail->next=NULL;
        head=zerohead->next;
        delete zerohead;
        delete onehead;
        delete twohead;
        return head;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends