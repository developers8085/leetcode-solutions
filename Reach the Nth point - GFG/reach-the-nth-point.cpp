//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int MOD = 1e9+7;
	public:
		int nthPoint(int n){
		    
		    /* Recursive Approach
		    if(n<0)
		     return 0;
		    if(n==0)
		     return 1;
		    int x = nthPoint(n-1);
		    int y = nthPoint(n-2);
		    return (x+y)%MOD;
		    */
		    /* DP Approach   */
		    
		    if(n==0 || n==1)
		      return 1;
		    if(n==2)
		     return 2;
		    int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    for(int i=2;i<=n;i++){
		        dp[i]=(dp[i-1]+dp[i-2])%MOD;
		    }
		    return dp[n];
		}
		
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends