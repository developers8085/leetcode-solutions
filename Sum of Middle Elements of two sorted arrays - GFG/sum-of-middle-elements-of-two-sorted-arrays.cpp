//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            int index =0;
            int i=0;
            int j=0;
            while(index<n-1){
                if(ar1[i]>ar2[j]){
                    j++;
                }else{
                    i++;
                }
                index++;
            }
            if(i==n-1){
                return top2(ar1[n-1],ar2[0],ar2[1]);
            }
            if(j==n-1){
                return top2(ar1[0],ar1[1],ar2[n-1]);
            }
            return top2(ar1[i],ar1[i+1],ar2[j],ar2[j+1]);
    }
    int top2(int x,int y,int z){
        vector<int> v(3);
        v[0]=x;
        v[1]=y;
        v[2]=z;
        sort(v.begin(),v.end());
        return v[0]+v[1];
    }
    int top2(int w,int x,int y,int z){
        vector<int> v(4);
        v[0]=w;
        v[1]=x;
        v[2]=y;
        v[3]=z;
        sort(v.begin(),v.end());
        return v[0]+v[1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends