//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(),words.end());
        int n = words.size();
        unordered_set<string> hs;
        for(int i=0;i<n;i++){
            hs.insert(words[i]);
        }
        int len =0;
        string ans="";
        for(int i=n-1;i>=0;i--){
            int clen = words[i].size();
            if(clen>=len){
                // check all sub string present or not
                if(checkForSubstring(hs,words[i])){
                    ans = words[i];
                    len = clen;
                }
            }
        }
        return ans;
    }
    bool checkForSubstring(unordered_set<string> hs,string word){
        
        int len = word.size()-1;
        while(len>0){
            if(hs.find(word.substr(0,len)) != hs.end()){
                len--;
            }else{
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends