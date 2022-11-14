//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int shortestUnorderedSubarray(int a[], int n)
    {
        // Cop
        if(a[0]<a[1]){
           for(int i=1;i<n-1;i++){
               if(a[i]>a[i+1])
                   return 3;
           }
       }
       else{
           for(int i=1;i<n-1;i++){
               if(a[i]<a[i+1])
                   return 3;
           }
       }
       return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) 
            cin >> a[i];
        Solution obj;
        cout << obj.shortestUnorderedSubarray(a, n) << endl;
    }
}

// } Driver Code Ends