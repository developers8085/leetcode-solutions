//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        sort(arr.begin() , arr.begin()+(n/2));
        // sort(arr.begin()+n/2 , arr.end());
        int l =0;
        int h = (n-1)/2;
        int ans = 0;
        for(int i=n/2;i<n;i++){
            if(arr[0]>=5*arr[i]){
                ans = ans + n/2;
            }else if(arr[n/2-1]<5*arr[i]){
                ans = ans +0;
            }else{
                ans = ans + n/2 - bs(arr,l,h,5*arr[i]);
            }
        }
        return ans;
    }  
    int bs(vector<int> arr,int l,int r,int key){
        int ans = arr.size()/2;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]>=key){
                ans = mid;
                r = mid-1;
            }else{
                l= mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends