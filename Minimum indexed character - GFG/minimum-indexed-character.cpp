//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int hs[256];
        memset(hs,-1,sizeof(hs));
        for(int i=str.size()-1;i>=0;i--){
            hs[str[i]]=i;
        }
        int n = patt.size();
        int ans = str.size();
        for(int i=0;i<n;i++){
            if(hs[patt[i]]>=0){
                ans=min(ans,hs[patt[i]]);
            }
        }
        if(ans == str.size()){
            ans = -1;
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
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends