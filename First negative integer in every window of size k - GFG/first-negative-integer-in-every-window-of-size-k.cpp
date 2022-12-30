//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int n, long long int k) {
    vector<long long> ans;
    /*
    Two Pointer Approach (n*k)+(1);
    int st =0;
    int end = n-1;
    int j = -1;
    for(int i=0;i<=(n-k);i++){
        j=i;
        for(;j<(i+k);j++){
            if(A[j]<0){
                break;
            }
        }
        if(j<(i+k)){
            ans.push_back(A[j]);
        }else{
            ans.push_back(0);
        }
    }
    */
     /*  Queue Approach  O(n)+O(k) [ Time + Space]
      queue<long long> q;
        for(int i=0;i<k;i++){
            if(A[i]<0){
                q.push(i);
            }
        }
        if(q.size()>=1){
            ans.push_back(A[q.front()]);
        }else{
            ans.push_back(0);
        }
        for(long long i=k;i<n;i++){
            if(A[i]<0){
                q.push(i);
            }
           while(!q.empty() && (i-q.front())>=k){
               q.pop();
           }
           if(q.empty()){
               ans.push_back(0);
           }else{
               ans.push_back(A[q.front()]);
           }
        }
        */
        
        /* Sliding window approach O(N)+O(1) */
        
        int st=0;
        for(;st<k;st++){
            if(A[st]<0){
                break;
            }
        }
        if(st<k){
            ans.push_back(A[st]);
        }else{
            ans.push_back(0);
        }
        st=1;
        int end=k;
        while(end<n){
            while((end-st)>=k){
                st++;
            }
            while(st<end && A[st]>=0){
                st++;
            }
            if(A[st]<0){
                ans.push_back(A[st]);
            }else{
                ans.push_back(0);
            }
            end++;
        }
        return ans;
}