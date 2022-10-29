//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int n, int m, int x)
    {
        sort(A,A+n);
        sort(B,B+m);
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            int k = x - A[i];
            int l = 0;
            int r = m-1;
            while(l<=r){
                int mid = l + (r-l)/2;
                if(B[mid]==k){
                    ans.push_back({A[i],B[mid]});
                    break;
                }
                if(B[mid]>k){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends