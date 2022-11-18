//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int sumExists(int arr[], int n, int sum) {
       set<int> s;
       
       for(int i=0;i<n;i++){
           if(s.find(sum-arr[i])  != s.end()){
               return 1;
           }
           s.insert(arr[i]);
       }
       return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum;
        cin >> n ;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin>>sum;
        Solution ob;
        auto ans = ob.sumExists(arr, n, sum);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends