//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    int dp[1001][1001];
  public:
    int longestPalinSubseq(string seq) {
        
    int n = seq.size();
    dp[n][n];
    memset(dp, -1, sizeof(dp));
    string s2 = seq;
    reverse(s2.begin(), s2.end());
    return lps(s2, seq, n, n);
    }
    
    int lps(string& s1, string& s2, int n1, int n2)
{
    if (n1 == 0 || n2 == 0) {
        return 0;
    }
    if (dp[n1][n2] != -1) {
        return dp[n1][n2];
    }
    if (s1[n1 - 1] == s2[n2 - 1]) {
        return dp[n1][n2] = 1 + lps(s1, s2, n1 - 1, n2 - 1);
    }
    else {
        return dp[n1][n2] = max(lps(s1, s2, n1 - 1, n2),
                                lps(s1, s2, n1, n2 - 1));
    }
}
    
    
    int tablalation(string rev,string a,int n1,int n2){
        if(n1 ==0 || n2 ==0){
            return 0;
        }
        if(dp[n1][n2] != -1){
            return dp[n1][n2];
        }
        if(rev[n1-1]==a[n2-1]){
            dp[n1][n2] = 1 + tablalation(rev,a,n1-1,n2-1);
            return dp[n1][n2];
        }else{
            dp[n1][n2] = max(tablalation(rev,a,n1-1,n2),tablalation(rev,a,n1,n2-1));
            return dp[n1][n2];
        }
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends