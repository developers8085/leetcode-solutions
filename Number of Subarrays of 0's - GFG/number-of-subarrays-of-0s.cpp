//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
    long long cnt = 0;
    long long ans = 0;
    int i = 0;
    while(i<n){
        
        while(i<n && arr[i]==1){
            i++;
        }
        cnt = 0;
        while(i<n && arr[i] ==0){
            cnt++;
            i++;
        }
        ans = ans + (cnt*(cnt+1))/2;
    }
    return ans;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends