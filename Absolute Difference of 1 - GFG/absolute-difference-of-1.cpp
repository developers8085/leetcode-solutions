//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        vector<long long> ans;
        for(long long i=0;i<n;i++){
            if(arr[i]<k && arr[i]>=10){
               int num = arr[i];
               int ld = num%10;
               num = num/10;
               while(num>0){
                   if(abs(num%10-ld) !=1){
                       break;
                   }
                   ld = num%10;
                   num = num/10;
               }
               if(num==0){
                   ans.push_back(arr[i]);
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
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.getDigitDiff1AndLessK(arr, n, k);
        for (auto x: ans) {
            cout << x << " ";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";

    }
    return 0;
}

// } Driver Code Ends