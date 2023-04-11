//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second < b.second;
    }
    int distinctIds(int arr[], int n, int m)
    {
        // priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>> p;
        vector<pair<int,int>> tmp;
        unordered_map<int,int> unmp;
        for(int i=0;i<n;i++){
            unmp[arr[i]]++;
        }
        for(auto x : unmp){
            tmp.push_back({x.first,x.second});
        }
        sort(tmp.begin(),tmp.end(),cmp);
        int cnt = 0;
        for(auto x: tmp){
            if(m>=x.second){
                m = m-x.second;
            }else{
                break;
            }
            cnt++;
        }
        return tmp.size()-cnt;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }
    
    	int m ;
    	cin >> m;
        Solution ob;
    	cout << ob.distinctIds(arr, n, m) << endl;
    }
	return 0;
}
// } Driver Code Ends