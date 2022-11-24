//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    int LIS[n];
	    int RIS[n];
	    LIS[0]=1;
	    RIS[n-1]=1;
	    for(int i=1;i<n;i++){
	        LIS[i]=1;
	        for(int j=0;j<i;j++){
	            if(nums[i]>nums[j])
	            LIS[i]=max(LIS[i],LIS[j]+1);
	        }
	    }
	    for(int i=n-2;i>=0;i--){
	        RIS[i]=1;
	        for(int j=n-1;j>i;j--){
	            if(nums[i]>nums[j])
	            RIS[i]=max(RIS[i],RIS[j]+1);
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     cout<<LIS[i]<<" "<<RIS[i]<<endl;
	   // }
	    int ans =1;
	    for(int i=0;i<n;i++){
	        ans = max(ans,LIS[i]+RIS[i]-1);
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
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends