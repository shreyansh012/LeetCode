//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{   Node* reverselist(struct Node* node){
        Node* curr=node;
        Node* prev=NULL;
        Node* forward=NULL;
        while(curr){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    public:
    void insertattail(Node* &anshead, Node* &anstail,int sum){
        Node* temp=new Node(sum);
        if(!anshead){
            anshead=temp;
            anstail=temp;
        }
        else{
            anstail->next=temp;
            anstail=temp;
        }
    }
    
    Node* solve(Node* first, Node* second){
        Node *anshead=NULL;
        Node *anstail=NULL;
        int carry=0;
        while(first || second || carry){
            int val1=0;
            if(first)
                val1=first->data;
            int val2=0;
            if(second)
                val2=second->data;
            int sum=val1+val2+carry;
            carry=sum/10;
            sum%=10;
            insertattail(anshead,anstail,sum);
            if(first)
                first=first->next;
            if(second)
                second=second->next;
        }
        return anshead;
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        first=reverselist(first);
        second=reverselist(second);
        Node* ans=solve(first,second);
        
        ans=reverselist(ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends