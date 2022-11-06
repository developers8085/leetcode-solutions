//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int X)
    {
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0]=1;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (mp.find(sum-X) != mp.end()) {
                ans = ans + mp[sum-X];
            }
            mp[sum]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends