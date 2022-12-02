//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        unordered_map<int,int> mp;
        sort(a,a+n);
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int i=0;
        while(i<n){
            if(a[i]<0){
                i++;
                continue;
            }
            if(mp[(-1)*(a[i])]>=1){
                ans.push_back((-1)*(a[i]));
                ans.push_back(a[i]);
                mp[(-1)*(a[i])]--;
            }
            i++;
        }
        return ans;
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
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends