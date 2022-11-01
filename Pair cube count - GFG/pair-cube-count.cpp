//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        int count =0;
        for(int i=1;i<=cbrt(N);i++){
            int cb = i*i*i;
            int diff = N-cb;
            int cbrtDiff = cbrt(diff);
            if (cbrtDiff*cbrtDiff*cbrtDiff == diff){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}
// } Driver Code Ends