//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        
        /* Recursive solution
        if(sum <0)
          return 0;
        if(sum == 0)
          return 1;
        if(N<=0)
          return 0;
        return count(coins,N,sum-coins[N-1])+count(coins,N-1,sum);
        */
        
        long long dp[sum+1][N];
        
        for(int i=0;i<N;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=sum;i++){
           for(int j=0;j<N;j++){
               long long x = i-coins[j]>=0?dp[i-coins[j]][j]:0;
               long long y = j>=1?dp[i][j-1]:0;
               dp[i][j]=x+y;
           }    
        }
        return dp[sum][N-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends