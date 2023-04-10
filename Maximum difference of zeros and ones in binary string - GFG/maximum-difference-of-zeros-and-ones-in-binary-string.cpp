//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    int ans =0;
	    int zcnt =0;
	    int ocnt =0;
	    int n = S.size();
	    for(int i=0;i<n;i++){
	        if(ocnt > zcnt){
	            ocnt = 0;
	            zcnt = 0;
	        }
	        if(S[i]=='1'){
	            ocnt++;
	        }else{
	            zcnt++;
	        }
	        ans =max(ans,zcnt-ocnt);
	    }
	    if(ans ==0){
	        return -1;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends