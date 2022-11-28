//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    int sum =0;
	    vector<int> ans;
	    int i = 0;
	    while(i<n){
	        int len =0;
	        vector<int> curr;
	        int curr_sum =0;
	        while(i<n && a[i]>=0){
	            len++;
	            curr_sum = curr_sum + a[i];
	            curr.push_back(a[i]);
	            i++;
	        }
	        if(curr_sum>=sum){
	            if(curr_sum > sum){
	                sum = curr_sum;
	                ans.clear();
	                ans.insert(ans.begin(),curr.begin(),curr.end());
	            }else{
	                if(ans.size()<curr.size()){
	                    ans.clear();
	                    ans.insert(ans.begin(),curr.begin(),curr.end());
	                }
	            }
	        }
	        while(i<n && a[i]<0){
	            i++;
	        }
	    }
	    if(ans.size()==0){
	        ans.push_back(-1);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends