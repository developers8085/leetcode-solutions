//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
        int n= s.size();
        string ans="";
        int i=1;
        int len=1;
        char ch = s[0];
        while(i<n){
            if(s[i]==ch){
                len++;
            }else{
                ans += ch+to_string(len);
                ch = s[i];
                len =1;
            }
            i++;
        }
        ans += ch+to_string(len);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends