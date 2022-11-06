//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxVal(int a[], int n) {
        for(int i=0;i<n;i++){
            a[i]=a[i]-i;
        }
        int max_v = a[0];
        int min_v = a[0];
        
        for(int i=0;i<n;i++){
            min_v= min(min_v,a[i]);
            max_v= max(max_v,a[i]);
        }
        return max_v-min_v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends