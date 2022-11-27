//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int N, int M, int K,vector<vector<int>> Mat) {
        
        K = K%M;
        
        for(int i=0;i<N;i++){
            
            // first k element
            
            int j=0;
            int k=K-1;
            while(j<k){
                swap(Mat[i][j],Mat[i][k]);
                j++;
                k--;
            }
            // first n-k element
            j=K;
            k=M-1;
            while(j<k){
                swap(Mat[i][j],Mat[i][k]);
                j++;
                k--;
            }
            j=0;
            k=M-1;
            // Full row 
            while(j<k){
                swap(Mat[i][j],Mat[i][k]);
                j++;
                k--;
            }
        }
        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, K, Mat);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends