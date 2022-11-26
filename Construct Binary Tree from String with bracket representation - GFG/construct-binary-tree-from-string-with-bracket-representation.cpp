//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        int l =0;
        int r = str.size()-1;
        Node *root = NULL;
        root=contructTree(str,l,r);
        return root;
    }
    Node *contructTree(string str,int l,int r){
        if(l>r){
            return NULL;
        }
        int num = 0;
        while(l <=r && str[l] >= '0' && str[l] <= '9'){
            num *= 10;
            num += (str[l] - '0');
            l++;
        }
        Node *newNode = new Node(num);
        int pivot=-1;
        if(str[l]=='('){
            pivot = findIndex(str,l,r);
        }
        if(pivot !=-1){
            newNode->left = contructTree(str,l+1,pivot-1);
            newNode->right = contructTree(str,pivot+2,r-1);
        }
        return newNode;
    }
    
    int findIndex(string str, int si, int ei)
{
    if (si > ei)
        return -1;
 
    // Inbuilt stack
    stack<char> s;
 
    for (int i = si; i <= ei; i++) {
 
        // if open parenthesis, push it
        if (str[i] == '(')
            s.push(str[i]);
 
        // if close parenthesis
        else if (str[i] == ')') {
            if (s.top() == '(') {
                s.pop();
 
                // if stack is empty, this is
                // the required index
                if (s.empty())
                    return i;
            }
        }
    }
    // if not found return -1
    return -1;
}
    
    int pivotIndex(int l,int r,string str){
        if(l>r){
            return -1;
        }
        int i = l+1;
        int count = 0;
        while(i<=r){
            if(str[i]>='0' && str[i]<='9'){
                i++;
                continue;
            }
            if(str[i]=='('){
                count++;
            }else{
                count--;
            }
            if(count==0){
                break;
            }
            i++;
        }
        return i;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends