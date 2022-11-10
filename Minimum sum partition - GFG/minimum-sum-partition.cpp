//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  {
	    
	   int sum =0;
	    for(int i=0;i<n;i++){
	        sum = sum + arr[i];
	    }
	    /* Recursive approach
	    return minPartision(arr,n,0,sum);
	    */
	    /*    DP approach  */
	    
	    bool dp[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        dp[i][0]=true;
	    }
	    for (int i = 1; i <= sum; i++){
	        dp[0][i] = false;
	    }
	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= sum; j++) {
	            dp[i][j] = dp[i - 1][j];
	            if (arr[i - 1] <= j){
	                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
	            }
	        }
	    }
	    int diff = INT_MAX;
	    for (int j = sum / 2; j >= 0; j--) {
	        if (dp[n][j] == true) {
	            diff = sum - 2 * j;
	            break;
	        }
        }
    return diff;
	} 
	int minPartision(int arr[],int i,int curr,int sum){
	    if(i==0){
	        return abs(sum - (2*curr));
	    }
	    
	    return min( minPartision(arr,i-1,curr+arr[i-1],sum) , 
	                minPartision(arr,i-1,curr,sum));
	}
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends