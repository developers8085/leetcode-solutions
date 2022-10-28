//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        
        unordered_set<long long> s;
        
        for(int i=0;i<n;i++){
          if(x == 0 && arr[i]==0 ||arr[i]!=0 && x%arr[i] ==0 && s.find(x/arr[i]) != s.end()){
              return true;
          }
          s.insert(arr[i]);
        }
        return false;
        
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends