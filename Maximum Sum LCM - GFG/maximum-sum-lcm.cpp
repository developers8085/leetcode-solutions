//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        
        long long int ans =1+n;
        
        if(n==2 || n==3){
            return ans;
        }
        
        long long int sroot = (long long int)(sqrt(n));
        for( int i=2;i<sroot;i++){
            
            if(n%i ==0){
                ans = ans +i;
                ans = ans +n/i;
            }
        }
        // cout<<sroot<<endl;
        if(n%sroot==0){
            if(sroot*sroot==n){
                ans = ans + sroot;
            }else{
                ans = ans +sroot;
                ans = ans +n/sroot;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends