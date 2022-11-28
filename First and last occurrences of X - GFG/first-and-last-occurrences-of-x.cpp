//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int first =-1;
        int last1  =-1;
        vector<int> ans;
        first = bnsFirst(arr,0,n-1,x);
        if(first ==-1){
            ans.push_back(-1);
            return ans;
        }
        last1 = bnsLast(arr,0,n-1,x,n);
        ans.push_back(first);
        ans.push_back(last1);
        return ans;
    }
    int bnsFirst(vector<int> arr,int l,int r,int k){
        if(l>r){
            return -1;
        }
        int m = l +(r-l)/2;
        if((m ==0 || k>arr[m-1]) && arr[m]==k){
            return m;
        }else if(k>arr[m]){
            return bnsFirst(arr,m+1,r,k);
        }else{
            return bnsFirst(arr,l,m-1,k);
        }
    }
    int bnsLast(vector<int> arr,int l,int r,int k,int n){
        if(l>r){
            return -1;
        }
        int m = l +(r-l)/2;
        if((m ==n-1 || k<arr[m+1]) && arr[m]==k){
            return m;
        }else if(k<arr[m]){
            return bnsLast(arr,l,m-1,k,n);
        }else{
            return bnsLast(arr,m+1,r,k,n);
        }
    }
    int last(vector<int> arr, int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1])
            && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
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