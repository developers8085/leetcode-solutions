//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        
        sort(arr.begin(),arr.end());
        set<vector<int>> s;
        int n = arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int f = K-(arr[i]+arr[j]);
                int l = j+1;
                int r = n-1;
                while(l<r){
                    int sum = arr[l]+arr[r];
                    if(sum == f){
                        vector<int> v(4);
                        v[0]=arr[i];
                        v[1]=arr[j];
                        v[2]=arr[l];
                        v[3]=arr[r];
                        if(s.count(v)  == 0){
                            ans.push_back(v);
                        }
                        s.insert(v);
                        l++;
                        }else if(sum >f){
                            r--;
                        }else{
                            l++;
                        }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends