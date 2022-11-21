//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>> ans;
        int p[n];
        int k=0;
        p[k]=n;
        while(true){
            addToVector(ans,p,k+1);
            int rem_val=0;
            while(k>=0 && p[k]==1){
                rem_val += p[k];
                k--;
            }
            if(k<0){
                break ;
            }
            p[k]--;
            rem_val++;
            while (rem_val > p[k]){
                p[k+1] = p[k];
                rem_val = rem_val - p[k];
                k++;
            }
            p[k+1] = rem_val;
            k++;
        }
        // cout<<ans.size()<<endl;
        return ans;
    }
    void addToVector(vector<vector<int>> &ans,int p[],int n){
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=p[i];
        }
        ans.push_back(v);
        return ;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends