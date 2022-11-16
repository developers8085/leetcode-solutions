//{ Driver Code Starts
#include<bits/stdc++.h>
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};


// } Driver Code Ends
/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       if(head == NULL){
           Node *head_ref = new Node(data);
           head_ref->next = head_ref;
           return head_ref;
       }
       if(head->data == data){
           Node *newNode = new Node(data);
           newNode->next=head->next;
           newNode->next = head; 
       }else if(head->data>data){
           Node *newNode = new Node(data);
           newNode->next=head->next;
           head->next = newNode;
           int t = head->data;
           head->data =newNode->data;
           newNode->data = t;
       }else{
           Node *tmp = head;
           while(tmp->next != head && tmp->next->data<data){
               tmp=tmp->next;
           }
           Node *newNode = new Node(data);
           if(tmp->next == head){
               // last node
               newNode->next = tmp->next;
               tmp->next = newNode;
           }else{
               // middle node
               newNode->next = tmp->next;
               tmp->next = newNode;
           }
       }
       return head;
    }
};

//{ Driver Code Starts.

/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;

  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("\n");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  
  
    /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
      scanf("%d",&arr);
    
    temp = new Node(arr);
    start=temp;
    r=start;
    }
    for (i = 0; i<n-1; i++)
    {
        scanf("%d",&arr);
        temp = new Node(arr);
        r->next=temp;
        r=r->next;
    }
    
    if(n>0)
    temp->next=start;
 
    scanf("%d",&x);
    Solution ob;
    start = ob.sortedInsert(start,x);
    printList(start);
    r=start;
    while(r!=start->next)
    {

      temp=start;
      start=start->next;
      free(temp);
    }
    free(start);
}
  return 0;
}

// } Driver Code Ends