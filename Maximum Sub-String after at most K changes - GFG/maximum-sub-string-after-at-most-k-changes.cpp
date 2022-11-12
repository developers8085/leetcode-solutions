//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    int maxLen =1;
		    for(int i=0;i<26;i++){
		        maxLen = max(maxLen,findMaxLen(s,k,i+'A'));
		    }
		    return maxLen;
		}
		int findMaxLen(string s,int k,char ch){
		    int count =0;
		    int l=0;
		    int r=0;
		    int n = s.size();
		    int maxlen = 1;
		    while(r<n){
		        if(s[r] != ch){
		            count++;
		        }
		        while(count>k){
		            if(s[l] != ch)
		               count--;
		               l++;
		        }
		        maxlen= max(maxlen,r-l+1);
		        r++;
		    }
		    return maxlen;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends