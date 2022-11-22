//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int ans = 0;
	    int n = nums.size();
	    
	    for(int i=1;i<n-1;i++){
	        int l=0;
	        int r=0;
	        for(int j=0;j<i;j++){
	            if(nums[j]<nums[i]){
	                l++;
	            }
	        }
	        for(int j=i+1;j<n;j++){
	            if(nums[j]>nums[i]){
	                r++;
	            }
	        }
	        ans = ans + l*r;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends