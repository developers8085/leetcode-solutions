//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        vector<int> rem(K,0);
        for(int i=0;i<N;i++){
            int index = arr[i]%K;
            rem[index]= rem[index] +1;
        }
        int ans =0;
        if(rem[0]>=1){
            ans = ans+1;
        }
        int l= 1;
        int r= K-1;
        while(l<r){
            ans += max(rem[l],rem[r]);
            l++;
            r--;
        }
        if(l==r &&rem[l]>0){
            ans = ans + 1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends