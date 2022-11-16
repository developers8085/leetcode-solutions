//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    // Node 
    struct Node {
        int data;
        struct Node* next;
    };
    Node *newNode(int data){
        Node *node = new Node;
        node->data = data;
        node->next = NULL;
        return node;
    }
public:
    int find(int N){
        Node *last =  newNode(1);
        last->next = last;
        for(int i=2;i<=N;i++){
            Node *nNode =  newNode(i);
            nNode->next = last->next;
            last->next = nNode;
            last = nNode;
        }
        Node *curr = last->next;
        Node *tmp= NULL;
        while(curr->next != curr){
            tmp = curr;
            curr = curr->next;
            tmp->next = curr->next;
            delete curr;
            tmp=curr->next;
            curr = tmp;
        }
        int ans = tmp->data;
        delete(tmp);
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends