//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxDifferenceBST(Node *root,int target){
        return bst(root,target,0);
    }
    void getLowerSum(Node *root,int s,int *minPath){
        if(root == NULL){
            return ;
        }
        s = s + root->data;
        if(root->left == NULL && root->right == NULL){
            if(s < *minPath){
                *minPath = s;
            }
        }
        getLowerSum(root->left,s,minPath);
        getLowerSum(root->right,s,minPath);
    }
    int bst(Node *root,int key,int sum){
        if(root == NULL){
            return -1;
        }
        if(root->data > key){
            return bst(root->left,key,sum+root->data);
        }else if(root->data<key){
            return bst(root->right,key,sum+root->data);
        }else{
            int minPath = INT_MAX;
            getLowerSum(root,0,&minPath);
            return sum - minPath + key;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends