//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int n = s.size();
        int count[26]={0};
        string balloon ="balloon";
        for(int i=0;i<26;i++){
            count[i]=-1;
        }
        for(int i=0;i<7;i++){
            count[balloon[i]-'a']=0;
        }
        for(int i=0;i<n;i++){
            if(count[s[i]-'a']>=0){
                count[s[i]-'a']++;
            }
        }
        // for(int i=0;i<26;i++){
        //     cout<<count[i]<<" ";
        // }
        // cout<<endl;
        
        count['o'-'a']= count['o'-'a']/2;
        count['l'-'a']= count['l'-'a']/2;
        int ans =n;
        for(int i=0;i<26;i++){
            if(count[i]>=0){
                ans = min(ans,count[i]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends