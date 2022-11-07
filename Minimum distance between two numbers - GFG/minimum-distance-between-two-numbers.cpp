//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int idx1 = -1;
        int idx2 = -1;
        int min_dist = INT_MAX;
        
        for(int i=0;i<n;i++){
            if(arr[i]==x)
       {
          idx1=i;
       }
       //if current element is y then change idx2
       else if(arr[i]==y)
       {
          idx2=i;
       }
       //if x and y both found in array
       //then only find the difference and store it in min_dist
       if(idx1!=-1 && idx2!=-1)
       min_dist=min(min_dist,abs(idx1-idx2));
        }
        if(idx1 ==-1 || idx2 == -1){
            return -1;
        }
        return min_dist;
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
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends