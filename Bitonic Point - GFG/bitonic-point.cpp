//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    if(n == 1){
	        return arr[0];
	    }
	    if(n==2){
	        return max(arr[0],arr[1]);
	    }
	    return bns(arr,0,n-1,n);
	}
	int bns(int arr[],int l,int r,int n){
	    if(l>r)
	      return -1;
	    if(l==r)
	      return arr[l];
	    int m = l + (r-l)/2;
	    if(m>0 && m<n && arr[m]>arr[m+1]&&arr[m]>arr[m-1])
	      return arr[m];
	    if(m<n && arr[m]<arr[m+1])
	      return bns(arr,m+1,r,n);
	    return bns(arr,l,m-1,n);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends