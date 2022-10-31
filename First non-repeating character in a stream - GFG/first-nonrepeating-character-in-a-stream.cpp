//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int hs[26];
		    memset(hs,-1,sizeof(hs));
		    int n = A.size();
		    string ans="";
		    for(int i=0;i<n;i++){
		        if(hs[A[i]-'a']==-1){
		            hs[A[i]-'a']=i;
		        }else{
		            hs[A[i]-'a']=-2;
		        }
		        int pos = n+1;
		        for(int j=0;j<26;j++){
		            if(hs[j]>=0){
		                pos = min(pos,hs[j]);
		            }
		        }
		        if(pos == n+1){
		            ans +='#';
		        }else{
		            ans +=A[pos];
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends