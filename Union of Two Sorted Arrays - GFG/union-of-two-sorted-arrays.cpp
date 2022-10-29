//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
        vector<int> ans;
        unordered_set<int> s;
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(arr1[i] == arr2[j]){
                if(s.find(arr1[i])==s.end()){
                    ans.push_back(arr1[i]);
                    s.insert(arr1[i]);
                }
                i++;
                j++;
            }else if(arr1[i]>arr2[j]){
                if(s.find(arr2[j])  == s.end())
                ans.push_back(arr2[j]);
                s.insert(arr2[j]);
                j++;
            }else{
                if(s.find(arr1[i])  == s.end())
                 ans.push_back(arr1[i]);
                 s.insert(arr1[i]);
                i++;
            }
        }
        
        while(i<n){
            if(s.find(arr1[i]) == s.end())
              ans.push_back(arr1[i]);
              s.insert(arr1[i]);
              i++;
        }
        while(j<m){
            if(s.find(arr2[j]) == s.end())
                ans.push_back(arr2[j]);
              s.insert(arr2[j]);
              j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends