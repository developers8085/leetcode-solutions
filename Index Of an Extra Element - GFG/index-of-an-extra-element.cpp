//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int A[], int B[], int n) {
        
        if(A[0] != B[0])
          return 0;
        if(A[n-1] != B[n-2])
          return n-1;
        return bns(A,B,0,n-2);
    }
    int bns(int A[],int B[],int l,int r){

        while(l<=r){
            int m = l + (r-l)/2;
            if(A[m] != B[m] && m>0 && B[m-1] != A[m])
              return m;
            if(B[m]>A[m])
              r = m-1;
            else
              l = m+1;
        }
        return -1;
        
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends