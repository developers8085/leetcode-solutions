//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int hs[256];
    for(int i=0;i<256;i++){
        hs[i]=0;
    }
    int st=0;
    int end=0;
    int n = S.size();
    int ans=0;
    while(end<n){
        // skip all first occurences
        while(end<n && hs[S[end]]<=0){
            if((end-st+1)>ans){
                ans = max(ans,end-st+1);
            }
            hs[S[end]]++;
            end++;
        }
        // when duplicate occured remove all elements till duplicate
        while(st<=end && S[st] != S[end]){
            hs[S[st]]=0;
            st++;
        }
        hs[S[st]]--;
        st++;
        ans = max(ans,end-st+1);
    }
    return ans;
}