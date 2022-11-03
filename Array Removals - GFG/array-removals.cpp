//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& a, int k){
        sort(a.begin(),a.end());
        int maxLen = INT_MIN;
        int i = 0;
        int n = a.size();
        if(n==1)
          return 0;
        if(n==2){
            if(a[1]-a[0]>k)
              return 1;
            else
              return 0;
        }
        for (int j = i + 1; j < n && i < n; j++) {
            if (a[j] - a[i] <= k) {
                maxLen = max(maxLen, j - i + 1);
            }else {
                i++;
            }
        }
    int removed = n - maxLen;
    return removed;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends