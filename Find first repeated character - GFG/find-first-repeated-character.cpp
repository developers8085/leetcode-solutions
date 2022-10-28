//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    int count[26]={0};
    string ans="-1";
    int n = s.size();
    for(int i=0;i<n;i++){
        if(count[s[i]-'a']>=1){
            ans="";
            return ans+s[i];
        }else{
            count[s[i]-'a']++;
        }
    }
    return ans;
}