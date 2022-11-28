//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int first =-1;
        int last  =-1;
        vector<int> ans;
        first = bnsFirst(arr,0,n-1,x,n-1);
        if(first ==-1){
            ans.push_back(-1);
            return ans;
        }
        last = first;
        while(first>=0 && arr[first]==x){
            first--;
        }
        while(last<n && arr[last]==x){
            last++;
        }
        // last = bnsSecond(arr,0,n-1,k);
        ans.push_back(first+1);
        ans.push_back(last-1);
        return ans;
    }
    int bnsFirst(vector<int> arr,int l,int r,int k,int n){
        if(l>r){
            return -1;
        }
        int m = l+(r-l)/2;
        if(arr[m]==k){
            return m;
        }
        if(arr[m]>k){
            return bnsFirst(arr,l,m-1,k,n);
        }
        return bnsFirst(arr,m+1,r,k,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends