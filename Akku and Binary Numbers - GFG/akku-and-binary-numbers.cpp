//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    vector<long long> tmp;
public:
    void precompute()
    {
        long long index = 0;
        for(int i=0;i<63;i++){
            for(int j=i+1;j<63;j++){
                for(int k=j+1;k<63;k++){
                    long long curr =0L;
                    curr = curr | 1L<<i;
                    curr = curr | 1L<<j;
                    curr = curr | 1L<<k;
                    tmp.push_back(curr);
                }
            }
        }
        sort(tmp.begin(),tmp.end());
    }
    long long solve(long long L, long long R){
        long long ans = 0;
        ans = rightIndex(R)-leftIndex(L)+1;
        return ans;
    }
    
    int leftIndex(long long key){
        int ans =0;
        int l =0;
        int r = tmp.size()-1;
        while(l<=r){
            int m = l +(r-l)/2;
            if(tmp[m]>=key){
                ans = m;
                r = m-1;
            }else{
                l= m+1;
            }
        }
        return ans;
    }
    
    int rightIndex(long long key){
        int l =0;
        int r = tmp.size()-1;
        int ans =0;
        while(l<=r){
            int m = l +(r-l)/2;
            if(tmp[m]<=key){
                ans = m;
                l= m+1;
            }else{
                r =m-1;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends