//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long K)
    {
        long long x = -1;
        long long y = -1;
        vector<long long> ans;
        
        // Find left most index ;
        
        long long l= 0;
        long long r = v.size()-1;
        while(l<=r){
            long long m = l +(r-l)/2;
            if(v[m]==K){
                x = m;
                r = m-1;
            }else if(v[m]<K){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        // Find the right most index;
        l= 0;
        r = v.size()-1;
        while(l<=r){
            long long m = l +(r-l)/2;
            if(v[m]==K){
                y = m;
                l = m+1;
            }else if(v[m]<K){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        return {x,y};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends