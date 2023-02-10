//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int ans =-1;
    for(int i=1;i<n-1;i++){
        int j=i-1;
        int k = i+1;
        while(j>=0 && arr[j]<=arr[i]){
            j--;
        }
        if(j>=0){
            continue;
        }
        while(k<n && arr[k]>=arr[i]){
            k++;
        }
        if(k>=n){
            ans = arr[i];
            break;
        }
    }
    
    return ans;
}
