//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int ans = -1;
            int maxC =-1;
            for(int i=0;i<N;i++){
                if(Mat[i][0]==1){
                    return i;
                }
                int currC = count(Mat[i],0,M-1,M); 
                if(currC>maxC){
                    ans = i;
                    maxC=currC;
                }
            }
            return ans;
        }
        int count(vector<int> arr,int l,int r,int M){
            if(l>r){
                return 0;
            }
            int m = l +(r-l)/2;
            if(m>0 && arr[m-1]==0 && arr[m-1]==1){
                return M-m;
            }
            if(m+1<=M-1&&arr[m]==0 &&arr[m+1]==1){
                return M-m-1;
            }
            if(arr[m]==0){
                return count(arr,m+1,r,M);
            }
            return count(arr,l,m-1,M);
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends