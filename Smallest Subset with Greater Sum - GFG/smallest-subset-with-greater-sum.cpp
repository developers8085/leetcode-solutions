//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &arr,int N){
        sort(arr.begin(),arr.end());
        /* Approach 1
        long long int lsum=0;
        long long int rsum=0;
        int i=-1;
        int j=N;
        int ans =0;
        while(i<j){
            if(rsum<=lsum){
                rsum = rsum+arr[--j];
                ans++;
            }else{
                lsum = lsum + arr[++i];
                // i++;
            }
        }
        // cout<<i<<endl;
        return ans;
        */
        
        long long int lsum = 0;
        long long int rsum = 0;
        for(auto x: arr){
            lsum = lsum + x;
        }
        int ans =0;
        int index = N;
        while(lsum >= rsum){
            int curr = --index;
            lsum = lsum - arr[curr];
            rsum = rsum + arr[curr];
            // index;
            ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends