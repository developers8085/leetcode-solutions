//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        // do operation
        Node *dummy = new Node(-1);
        dummy->next = head;
        Node * tmp = NULL;
        int carry =1;
        while(head != NULL){
             tmp = head->next;
             int data = head->data+carry;
             head->data = (data)%10;
             carry = data/10;
             head = tmp;
        }
        head = reverse(dummy->next);
        if(carry >=1){
        Node *nNode = new Node(carry);
        nNode->next = head;
        head = nNode;
        }
        return head;
    }
    Node* reverse(Node* root){
        Node * cur = root;
        Node *next = NULL;
        Node *prev = NULL;
        
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev=cur;
            cur = next;
        }
        return prev;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends