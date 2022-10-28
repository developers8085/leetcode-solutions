//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        ll mod = 1e9+7;
        vector<ll> v1;
        vector<ll> v2;
        v1.push_back(1);
        v2.push_back(1);
        v2.push_back(1);
        
        if(n==1)
          return v1;
        if(n==2)
          return v2;
          v1.clear();
        for(int i=3;i<=n;i++){
            v1.push_back(1);
            for(int j=0;j<i-2;j++){
                v1.push_back((v2[j]+v2[j+1])%mod);
            }
            v1.push_back(1);
            v2=v1;
            v1.clear();
        }
        return v2;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends