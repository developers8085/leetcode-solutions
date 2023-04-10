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