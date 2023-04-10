//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int a[], int n)
    {
    	// sorting
    	/*
    	sort(a,a+n);
    	return a[0]+a[n-1];
    	*/
    	int mn = a[0];
    	int mx = a[0];
    	
    	for(int i=0;i<n;i++){
    	    mn = min(mn,a[i]);
    	    mx = max(mx,a[i]);
    	}
    	return mn+mx;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends