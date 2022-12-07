//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        
    /*    vector<int> v;
        sortBSTN(root,v,K);
        sortBSTK(root,v,K);
        if(v.size()<K){
            return -1;
        }
        return v[K-1];
        */
        int ans = -1;
        int count =0;
        sortBST(root,&count,K,&ans);
        return ans;
    }
    void sortBST(Node *root,int *count,int k,int *ans){
        if(root == NULL){
            return ;
        }
        sortBST(root->left,count,k,ans);
        *count = *count+1;
        if(*count ==k){
            *ans = root->data;
            return ;
        }
        sortBST(root->right,count,k,ans);
    }
    void sortBSTN(Node *root,vector<int> &v,int k){
        if(root == NULL){
            return ;
        }
        sortBSTN(root->left,v,k);
        v.push_back(root->data);
        sortBSTN(root->right,v,k);
    }
    void sortBSTK(Node *root,vector<int> &v,int k){
        if(root == NULL){
            return ;
        }
        sortBSTK(root->left,v,k);
        v.push_back(root->data);
        if(v.size()==k){
            return ;
        }
        sortBSTK(root->right,v,k);
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);

        getline(cin, s);
        int k = stoi(s);
        //  getline(cin, s);
        Solution obj;
        cout << obj.KthSmallestElement(root, k) << endl;
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends