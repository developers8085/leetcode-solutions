//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        if(arr[0]>x)
         return 1;
        int ws = arr[0];
        int st=0;
        int i=1;
        int ans = n+1;
        while(i<n){
            ws +=arr[i];
            if(ws>x){
                ans = min(ans,i-st+1);
            }
            while(st<=i && ws>x){
                ans = min(ans,i-st+1);
                ws -=arr[st];
                st++;
            }
            i++;
        }
        if(ans == n+1){
            ans =0;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends