//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    int ans =0;
	    
	    int n = nums.size();
	    unordered_set<int> s1;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[nums[i]]++;
	    }
	    for(auto x: mp){
	        if((k==0 && mp[x.first]>1))
	           ans++;
	        if(k>0 &&(mp.find(k+x.first) != mp.end()))
	           ans++;
	        if(k>0 &&(mp.find(x.first-k) != mp.end()))
	           ans++;
	    }
	    if(k>0)
	      ans = ans/2;
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends